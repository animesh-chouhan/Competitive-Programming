#include <bits/stdc++.h>

using namespace std;

const int INF = numeric_limits<int>::max();

struct node
{
    int id;
    int dist;
    node *parent;
    bool is_visited;
};

class Graph
{
    int V;
    list<node *> *adj;
    node *nodes;

public:
    Graph(int V)
    {
        this->V = V;
        nodes = new node[V];
        adj = new list<node *>[V];

        for (int i = 0; i < V; ++i)
        {
            nodes[i].id = i;
            nodes[i].dist = INF;
            nodes[i].parent = nullptr;
            nodes[i].is_visited = false;
        }
    }

    void add_edge(int v, int w)
    {
        adj[v].push_back(&nodes[w]);
    }

    void BFS(int s)
    {

        list<node> q;

        nodes[s].is_visited = true;
        nodes[s].dist = 0;
        nodes[s].parent = nullptr;
        q.push_back(nodes[s]);

        list<node *>::iterator it;

        node u;
        while (!q.empty())
        {
            u = q.front();
            // cout << u.id << " -> ";
            q.pop_front();

            for (it = adj[u.id].begin(); it != adj[u.id].end(); ++it)
            {
                // cout << (*it)->id << " " << (*it)->is_visited << " ";
                if (!((*it)->is_visited))
                {
                    (*it)->is_visited = true;
                    (*it)->parent = &nodes[u.id];
                    (*it)->dist = ((*it)->parent)->dist + 1;
                    q.push_back(*(*it));
                }
                // cout << (*it)->is_visited << "\n";
            }
        }
        // cout << "\n";
    }

    void print_distances()
    {
        for (int i = 0; i < V; ++i)
        {
            int distance = nodes[i].dist;
            if (distance == INF)
            {
                cout << "BFS distance of Node " << i << " = "
                     << "INF"
                     << "\n";
            }
            else
            {
                cout << "BFS distance of Node " << i << " = " << nodes[i].dist << "\n";
            }
        }
    }

    void print_parents()
    {
        for (int i = 0; i < V; ++i)
        {
            if (nodes[i].parent != nullptr)
            {
                cout << "Parent of Node " << i << " = " << (nodes[i].parent)->id << "\n";
            }
            else
            {
                cout << "Parent of Node " << i << " = "
                     << "null"
                     << "\n";
            }
        }
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

    g.BFS(3);
    g.print_distances();
    g.print_parents();

    return 0;
}