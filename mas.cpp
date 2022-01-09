#include <bits/stdc++.h>
using namespace std;
 
struct Edge {
    int src, dest, weight;
};
 
class Graph
{
public:
    vector<vector<Edge>> adjList;
 
    Graph(vector<Edge> const &edges, int n){
        adjList.resize(n);
 
        for (auto &edge: edges) {
            adjList[edge.src].push_back(edge);
        }
    }
};
 
struct Node {
    int vertex, depth, weight;
};
 
int findLeastCost(Graph const &g, int src, int dest, int m){
    queue<Node> q;
    q.push({src, 0, 0});
    int minCost = INT_MAX;
 
    while (!q.empty()){
        Node node = q.front();
        q.pop();
 
        int v = node.vertex;
        int depth = node.depth;
        int cost = node.weight;
 
        if (v == dest && depth == m) {
            minCost = min(minCost, cost);
        }
 
        if (depth > m) {
            break;
        }
 
        for (Edge edge: g.adjList[v]){
            q.push({edge.dest, depth + 1, cost + edge.weight});
        }
    }
 
    return minCost;
}
 
int main()
{
    vector<Edge> edges;
    Graph g(edges, n);
    int src = 0, dest = 3, m = 4;

    cout << findLeastCost(g, src, dest, m);
 
    return 0;
}