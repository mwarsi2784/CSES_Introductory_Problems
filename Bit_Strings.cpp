#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>; //find_by_order() order_of_key()

int main() {
    long long n;
    cin>>n;
    long long mod=1000000007;
    long long ans=1;
    while(n--){
        ans=2*ans;
        ans=ans%mod;
    }
    cout<<ans;

    return 0;
}