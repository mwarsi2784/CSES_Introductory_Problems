#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>; //find_by_order() order_of_key()

void solve(){
    long double a,b;
    cin>>a>>b;
    long double sum=(a+b)/3;
    long double s1=(2*a-b)/3;
    long double s2=(2*b-a)/3;
    if(floor(sum)==sum && floor(s1)==s1 && floor(s2)==s2 && s1>=0 && s2>=0){
        cout<<"YES";
        return;
    }
    cout<<"NO";
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