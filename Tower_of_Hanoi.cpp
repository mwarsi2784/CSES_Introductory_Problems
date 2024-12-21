#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>; //find_by_order() order_of_key()

void fun(int source,int destination,int use,int n,vector<pair<int,int>>& ans){
    if(n==1){
        ans.push_back({source,destination});
        return;
    }
    fun(source,use,destination,n-1,ans);
    ans.push_back({source,destination});
    fun(use,destination,source,n-1,ans);

}

int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> ans;
    fun(1,3,2,n,ans);
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].first<<" "<<ans[i].second<<"\n";
    }
    return 0;
}