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
    vector<bool> b(n+1,false);
    for(int i=1;i<n;i++){
        int t;
        cin>>t;
        b[t]=true;
    }
    for(int i=1;i<=n;i++){
        if(!b[i]){
            cout<<i;
            return 0;
        }
    }


    return 0;
}