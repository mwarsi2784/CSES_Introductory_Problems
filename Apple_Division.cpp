#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>; //find_by_order() order_of_key()

long long fun(long sum, vector<int> a,int n,int num){
    int count=0;
    long curr=0;
    while(count<n){
        if(num&(1ll<<count)){
            curr=curr+a[count];
        }
        count++;
    }
    long  s1 = sum-curr;
    long s2= sum-s1;
    return abs(s1-s2);
}

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    long long ans=999999999999;
    for(int i=0;i<pow(2,n);i++){
        ans = min(fun(sum,a,n,i),ans);
    }
    cout<<ans;
    return 0;
}