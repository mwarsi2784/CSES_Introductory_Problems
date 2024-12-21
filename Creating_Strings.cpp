#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>; //find_by_order() order_of_key()

void fun(set<string> &ans,string use,string curr){
    if(use.size()==0){
        ans.insert(curr);
    }
    for(int i=0;i<use.size();i++){
        string new_str="";
        for(int j=0;j<use.size();j++){
            if(j!=i){
                new_str=new_str+use[j];
            }
        }
        fun(ans,new_str,curr+use[i]);
    }
}

int main() {
    string s;
    cin>>s;
    set<string> ans;
    sort(s.begin(),s.end());
    string curr="";
    fun(ans,s,curr);
    cout<<ans.size()<<"\n";
    for(auto i:ans){
        cout<<i<<"\n";
    }
    return 0;
}