#include <bits/stdc++.h>

using namespace std;

const int INF = numeric_limits<int>::max();

struct node
{
    int id;
    int dist;
    node *parent;
    bool is_visited;
    int time_discovered;
    int time_finished;
};

class Graph
{
    int V;
    list<node *> *adj;
    node *nodes;
    int time = 0;

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
            nodes[i].time_discovered = INF;
            nodes[i].time_finished = INF;
        }
    }

    void add_edge(int v, int w)
    {
        adj[v].push_back(&nodes[w]);
    }

    void DFS_visit(int s)
    {
        // cout << s << "\n";
        time += 1;

        nodes[s].dist = time;
        nodes[s].time_discovered = time;
        nodes[s].is_visited = true;

        for (auto it = adj[s].begin(); it != adj[s].end(); ++it)
        {
            if ((*it)->is_visited == false)
            {
                (*it)->is_visited = true;
                (*it)->parent = &nodes[s];
                DFS_visit((*it)->id);
            }
        }
        time += 1;
        nodes[s].time_finished = time;
    }

    void DFS()
    {
        for (int i = 0; i < V; ++i)
        {
            // cout << i << "\n";
            if (nodes[i].is_visited == false)
            {
                DFS_visit(i);
            }
        }
    }

    void print_time()
    {
        for (int i = 0; i < V; ++i)
        {
            int distance = nodes[i].dist;
            if (distance == INF)
            {
                cout << "DFS discovery time of Node " << i << " = "
                     << "INF"
                     << "\n";
                cout << "DFS finishing time of Node " << i << " = "
                     << "INF"
                     << "\n";
            }
            else
            {
                cout << "DFS discovery time of Node " << i << " = " << nodes[i].time_discovered << "\n";
                cout << "DFS finishing time of Node " << i << " = " << nodes[i].time_finished << "\n";
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
    Graph g(6);

    g.add_edge(0, 1);
    g.add_edge(0, 3);
    g.add_edge(1, 4);
    g.add_edge(2, 4);
    g.add_edge(2, 5);
    g.add_edge(3, 1);
    g.add_edge(4, 3);
    g.add_edge(5, 5);

    g.DFS();
    g.print_time();
    // g.print_parents();

    return 0;
}