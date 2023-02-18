#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

const int N=1e5+10; 
bool vis[N]; 
vector<int> g[N]; 

void dfs(int vertex) {     
    vis[vertex]=true;     
    for(int child:g[vertex]) {         
        if(vis[child])
            continue;         
        dfs(child);   
    } 
} 

int main() {     
    int n,m;     
    cin>>n>>m;     
    for(int i=0;i<m;i++) {         
        int a,b;         
        cin>>a>>b;         
        g[a].push_back(b);         
        g[b].push_back(a);     
    }
    int ct=0;     
    for(int i=1;i<=n;i++) {         
        if(vis[i])
            continue;         
        dfs(i);         
        ct++;     
    }     
    cout<<ct;
}

