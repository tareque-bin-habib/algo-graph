#include <bits/stdc++.h>
using namespace std;

void init_code()
{
}

const int N = 1e5 + 5;

vector<int> adj[N];
bool visited[N];

void dfs(int u)
{
    visited[u] = true;

    // cout << "Visiting Node: " << u << endl;

    for (int v : adj[u])
    {
        if (visited[v] == true)
        {
            continue;
        }
        dfs(v);
    }
}

int main()
{
    init_code();

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "Node" << i << ": ";
    //     for (auto j : adj[i])
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    dfs(1);

    cout << "visiting Array\n";
    for (int i = 1; i <= n; i++)
    {
        cout << "Node : " << i << "status " << visited[i] << endl;
    }

    return 0;
}