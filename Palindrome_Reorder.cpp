#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>; //find_by_order() order_of_key()

int main() {
    string s;
    cin>>s;
    int n;
    n=s.size();
    map<char,int> f;
    char oddchar;
    int oddfreq=0;
    for(int i=0;i<n;i++){
        f[s[i]]++;
    }
    int oddcount=0;
    for(char i='A';i<='Z';i++){
        if(f[i]&1){
            oddcount++;
            oddchar=i;
            oddfreq=f[i];
        }
    }
    if( (oddcount>1) || ( (oddcount==1) && (n%2 ==0) ) ){
        cout<<"NO SOLUTION";
        return 0;
    }
    int l=0;
    int r=n-1;
    vector<char> a(n);
    for(char i='A';i<='Z';i++){
        if(f[i]&1){
            continue;
        }
        while(f[i]>0){
            a[l]=i;
            a[r]=i;
            f[i]-=2;
            l++;
            r--;
        }
    }
    while(oddfreq--){
        a[l++]=oddchar;
    } 
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}