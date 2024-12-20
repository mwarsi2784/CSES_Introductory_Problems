#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>; //find_by_order() order_of_key()

int main() {
    string s;
    cin>>s;
    int ans=-1;
    int curr=0;
    for(int i=0;i<s.size();){
        char c=s[i];
        while(s[i]==c){
            curr++;
            i++;
        }
        ans=max(ans,curr);
        curr=0;
    }
    cout<<ans;

    return 0;
}