#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int n,e;
    cin>>n>>e;

    vector<int> g[100];
    bool visited[100]={0};

    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    queue<int> q;
    q.push(0);
    visited[0]=true;

    while(!q.empty()){
        int node=q.front();
        q.pop();

        cout<<node<<" ";

        for(int x:g[node]){
            if(!visited[x]){
                visited[x]=true;
                q.push(x);
            }
        }
    }
}