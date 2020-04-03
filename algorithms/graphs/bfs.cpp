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

    void add_edge(int v, int w)
    {
        adj[v].push_back(w);
    }

    void BFS(int s)
    {
        bool *visited = new bool[V];
        for (int i = 0; i < V; ++i)
        {
            visited[i] = false;
        }

        list<int> q;

        visited[s] = true;
        q.push_back(s);

        list<int>::iterator it;

        int u;
        while (!q.empty())
        {
            u = q.front();
            cout << u << " -> ";
            q.pop_front();

            for (it = adj[u].begin(); it != adj[u].end(); ++it)
            {
                if (!visited[*it])
                {
                    visited[*it] = true;
                    q.push_back(*it);
                }
            }
        }
        cout << "\n";
    }
};

int main()
{
    Graph g(4);

    g.add_edge(0, 1);
    g.add_edge(0, 2);
    g.add_edge(1, 2);
    g.add_edge(2, 0);
    g.add_edge(2, 3);
    g.add_edge(3, 3);

    g.BFS(2);

    return 0;
}