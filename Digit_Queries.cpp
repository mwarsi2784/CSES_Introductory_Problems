#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>; //find_by_order() order_of_key()

char solve(vector<long long> & a){
    long long n;
    cin>>n;
    int digit=0;
    while(digit<a.size() && n>a[digit]){
        digit++;
    }
    long long firstnum = pow(10,digit-1);
    long long num= firstnum+(n-1-a[digit-1])/digit;
    int index=(n-1-a[digit-1])%digit;
    string numstring=to_string(num);
    return numstring[index];
}


int main() {
    int t;
    cin>>t;
    vector<long long> a;
    a.push_back(0);
    for(int i=1;i<18;i++){
        a.push_back(i*(9*pow(10,i-1)));
        a[i]=a[i]+a[i-1];
    }
    while(t--){
        cout<<solve(a);
        cout<<"\n";
    }
    return 0;
}