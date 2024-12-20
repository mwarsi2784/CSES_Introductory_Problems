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
    int x=5;
    int ans=0;
    while(x<=n){
        ans=ans+n/x;
        x=x*5;
    }
    cout<<ans;
    return 0;
}