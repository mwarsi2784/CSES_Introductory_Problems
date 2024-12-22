#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>; //find_by_order() order_of_key()

bool isSafe(string s[]){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(s[i][j]=='q'){
                for(int k=1;k+j<8;k++){
                    if(s[i][k+j]=='q'){
                        return false;
                    }
                }
                for(int k=1;k+i<8;k++){
                    if(s[i+k][j]=='q'){
                        return false;
                    }
                }
                for(int k=1;k+j<8 && k+i<8;k++){
                    if(s[i+k][k+j]=='q'){
                        return false;
                    }
                }
                for(int k=1;k+j<8 && i-k>=0;k++){
                    if(s[i-k][k+j]=='q'){
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

void fun(string s[], int &ans,int indx){
    if(indx==8){
        if(isSafe(s)){
            ans++;
        }
        return;
    }
    else{
        for(int i=0;i<8;i++){
            if(s[indx][i]=='.'){
                s[indx][i]='q';
                fun(s,ans,indx+1);
                s[indx][i]='.';
            }
        }
    }
}

int main() {
    string s[8];
    for(int i=0;i<8;i++){
        cin>>s[i];
    }
    int ans=0;
    fun(s,ans,0);
    cout<<ans;

    return 0;
}