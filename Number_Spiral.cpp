#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>; //find_by_order() order_of_key()

void solve(){
    long long x,y;
    cin>>x>>y;
    if(y>=x){
        long long start;
        if(y&1){
            start=(y)*(y);
            cout<<start-(x-1);
            return;
        }else{
            start=(y-1)*(y-1)+1;
            cout<<start+x-1;
            return;
        }
    }
    else{
        long long start;
        if(x&1){
            start=(x-1)*(x-1)+1;
            cout<<start+y-1;
            return;
        }else{
            start=x*x;
            cout<<start-(y-1);
            return;
        }
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }


    return 0;
}