#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>; //find_by_order() order_of_key()

vector<string> fun(int n){
    if(n==1){
        return {"0","1"};
    }
    vector<string> x = fun(n-1);
    vector<string> ans;
    for(int i=0;i<x.size();i++){
        ans.push_back("0"+x[i]);
    }
    for(int i=x.size()-1;i>=0;i--){
        ans.push_back("1"+x[i]);
    }
    return ans;
}
int main() {
    int n;
    cin>>n;
    vector<string> ans=fun(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"\n";
    }

    return 0;
}