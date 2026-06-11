#include <iostream>
#include <vector>
using namespace std;

vector<int> g[100];
bool visited[100];

void dfs(int node){
    visited[node]=true;
    cout<<node<<" ";

    for(int x:g[node]){
        if(!visited[x])
            dfs(x);
    }
}

int main(){
    int n,e;
    cin>>n>>e;

    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(0);
}