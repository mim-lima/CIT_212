#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int INF = 1e9;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int,int>> graph[n + 1];

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }

    int source;
    cin >> source;

    vector<int> dist(n + 1, INF);

    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
    > pq;

    dist[source] = 0;
    pq.push({0, source});

    while (!pq.empty())
    {
        int d = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto edge : graph[node])
        {
            int next = edge.first;
            int weight = edge.second;

            if (dist[node] + weight < dist[next])
            {
                dist[next] = dist[node] + weight;
                pq.push({dist[next], next});
            }
        }
    }

    for (int i = 1; i <= n; i++)
        cout << "Node " << i
             << " = " << dist[i] << endl;

    return 0;
}