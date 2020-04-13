#include <bits/stdc++.h>

using namespace std;

class Graph
{
    int V;
    list<int> *adj;

public:
    Graph(int V)
    {
        this->V = V;
        adj = new list<int>[V];
    }

    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
    }

    void DFS_visit(int v, bool visited[])
    {
        visited[v] = true;
        cout << v << " ";

        list<int>::iterator it;
        for (it = adj[v].begin(); it != adj[v].end(); ++it)
        {
            if (visited[*it] == false)
            {
                DFS_visit(*it, visited);
            }
        }
    }

    void DFS(int v)
    {
        bool *visited = new bool[V];
        for (int i = 0; i < V; ++i)
        {
            visited[i] = false;
        }

        DFS_visit(v, visited);
    }
};

void dfs(int s, vector<int> g[], int visited[])
{
    if (visited[s] == true)
    {
        return;
    }
    else
    {
        visited[s] = true;
        for (auto i : g[s])
        {
            dfs(i, g, visited);
        }
    }
}

int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.DFS(2);

    return 0;
}