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
    while(n!=1){
        cout<<n<<" ";
        if(n&1){
            n=n*3+1;
        }
        else{
            n=n/2;
        }
    }
    cout<<"1";


    return 0;
}