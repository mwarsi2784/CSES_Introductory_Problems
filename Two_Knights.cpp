#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>; //find_by_order() order_of_key()

long solve(int x){
    long long n=x;
    return (   (n*n)*(n*n-1)/2 - 4*((n-1)*(n-2)));
}

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<solve(i)<<"\n";
    }
    return 0;
}