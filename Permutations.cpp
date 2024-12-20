#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>; //find_by_order() order_of_key()

int main() {
    int n;
    cin>>n;
    int mx=n;
    int mn=1;
    if(n==1){
        cout<<"1";
        return 0;
    }
    if(n<=3){
        cout<<"NO SOLUTION";
        return 0;
    }
    if(n==4){
        cout<<"3 1 4 2";
        return 0;
    }
    vector<int> a;
    for(int i=0;i<n/2;i++){
        a.push_back(mx);
        a.push_back(mn);
        mx--;
        mn++;
    }
    a.push_back(mx);
    swap(a[0],a[n-1]);
    for(int i=0;i<n;i++){cout<<a[i]<<" ";};


    return 0;
}