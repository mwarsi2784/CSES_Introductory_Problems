#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>; //find_by_order() order_of_key()


bool isValid(int x,int y,vector<vector<int>> &visited){
    if(x>6 || y>6 || x<0 || y<0){
        return false;
    }
    if(visited[x][y]==1){
        return false;
    }
    return true;
}

void fun(string &s,int x,int y,int ind,int &ans, vector<vector<int>> &visited){
    if(ind==48 && x==6 && y==0){
        ans++;
        return;
    }
    if(x==6 && y==0){
        return;
    }
    if(ind>=48){
        return;
    }
    if(x>6 || y>6 || x<0 ||y<0){
        return;
    }
    if( isValid(x+1,y,visited) && isValid(x-1,y,visited) && (!isValid(x,y+1,visited)) && (!isValid(x,y-1,visited)) ){
        return;
    }
    if( isValid(x,y+1,visited) && isValid(x,y-1,visited) && (!isValid(x+1,y,visited)) && (!isValid(x-1,y,visited)) ){
        return;
    }
    if(visited[x][y]==1){
        return;
    }
    if( (s[ind]=='D' || s[ind]=='?') &&  x+1<=6 && visited[x+1][y]==0){
        visited[x][y]=1;
        fun(s,x+1,y,ind+1,ans,visited);
        visited[x][y]=0;
    }
    if( (s[ind]=='R' || s[ind]=='?') &&  y+1<=6 && visited[x][y+1]==0 ){
        visited[x][y]=1;
        fun(s,x,y+1,ind+1,ans,visited);
        visited[x][y]=0;
    }
    if( (s[ind]=='L' || s[ind]=='?') && y-1>=0 && visited[x][y-1]==0 ){
        visited[x][y]=1;
        fun(s,x,y-1,ind+1,ans,visited);
        visited[x][y]=0;
    }
    if( (s[ind]=='U' || s[ind]=='?') && x-1>=0 && visited[x-1][y]==0 ){
        visited[x][y]=1;
        fun(s,x-1,y,ind+1,ans,visited);
        visited[x][y]=0;
    }
}

int main() {
    string s;
    cin>>s;
    int ans=0;
    vector<vector<int>> visited(7,vector<int>(7,0));
    fun(s,0,0,0,ans,visited);
    cout<<ans;
    return 0;
}