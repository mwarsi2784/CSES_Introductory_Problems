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
    vector<int> s1,s2;
    if((n*(n+1)/2)&1){
        cout<<"NO";
        return 0;
    }
    else{
        cout<<"YES"<<"\n";
        long long sum=n*(n+1)/2;
        sum=sum/2;
        long long curr=0;
        for(int i=n;i>=1;i--){
            if(curr+i<=sum){
                curr=curr+i;
                s1.push_back(i);
            }
            else{
                s2.push_back(i);
            }
        }
    }
    cout<<s1.size()<<"\n";
    for(int i=s1.size()-1;i>=0;i--){
        cout<<s1[i]<<" ";
    }
    cout<<"\n"<<s2.size()<<"\n";
    for(int i=s2.size()-1;i>=0;i--){
        cout<<s2[i]<<" ";
    }

    return 0;
}