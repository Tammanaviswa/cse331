#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

class Graph {
public:
    Graph(int vertices) : V(vertices) {
        adj = std::vector<std::vector<int>>(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }

    bool hasCycle() {
        std::unordered_set<int> visited;
        std::unordered_set<int> recStack;

        for (int i = 0; i < V; i++) {
            if (isCyclicUtil(i, visited, recStack)) {
                return true;
            }
        }

        return false;
    }

private:
    int V;
    std::vector<std::vector<int>> adj;

    bool isCyclicUtil(int v, std::unordered_set<int>& visited, std::unordered_set<int>& recStack) {
        if (recStack.find(v) != recStack.end()) {
            return true;
        }

        if (visited.find(v) != visited.end()) {
            return false;
        }

        visited.insert(v);
        recStack.insert(v);

        for (int neighbor : adj[v]) {
            if (isCyclicUtil(neighbor, visited, recStack)) {
                return true;
            }
        }

        recStack.erase(v);
        return false;
    }
};

int main() {
    int vertices = 4;
    Graph graph(vertices);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 2);
    graph.addEdge(2, 0);
    graph.addEdge(2, 3);
    graph.addEdge(3, 3);

    if (graph.hasCycle()) {
        std::cout << "The graph contains cycles." << std::endl;
    } else {
        std::cout << "The graph does not contain cycles." << std::endl;
    }

    return 0;
}

