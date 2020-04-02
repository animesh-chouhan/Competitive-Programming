#include <bits/stdc++.h>
#define V 5

using namespace std;

void add_edge(int (*adj)[V], int u, int v)
{
    adj[u][v] = 1;
    adj[v][u] = 1;
}

void print_graph(int (*adj)[V])
{
    for (int i = 0; i < V; ++i)
    {
        for (int j = 0; j < V; ++j)
        {
            cout << adj[i][j] << " ";
        }
        cout << "\n";
    }
}

void init(int (*adj)[V])
{
    for (int i = 0; i < V; ++i)
    {
        for (int j = 0; j < V; ++j)
        {
            adj[i][j] = 0;
        }
    }
}

int main()
{
    int adj[V][V];
    init(adj);

    add_edge(adj, 0, 1);
    add_edge(adj, 0, 4);
    add_edge(adj, 1, 2);
    add_edge(adj, 1, 3);
    add_edge(adj, 1, 4);
    add_edge(adj, 2, 3);
    add_edge(adj, 3, 4);

    print_graph(adj);
    return 0;
}