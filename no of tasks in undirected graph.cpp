#include <iostream>
#include <vector>

using namespace std;

class Graph {
public:
  vector<vector<int> > adj;
  int num_vertices;

  Graph(int num_vertices) {
    this->num_vertices = num_vertices;
    adj.resize(num_vertices, vector<int>());
  }

  void addEdge(int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  bool isSafeToColorVertex(int vertex_index, int color, vector<int>& color_array) {
    for (int i = 0; i < adj[vertex_index].size(); i++) {
      if (color_array[adj[vertex_index][i]] == color) {
        return false;
      }
    }
    return true;
  }

  bool colorGraph(int vertex_index, int m, vector<int>& color_array) {
    if (vertex_index == num_vertices) {
      return true;
    }

    for (int i = 0; i < m; i++) {
      if (isSafeToColorVertex(vertex_index, i, color_array)) {
        color_array[vertex_index] = i;
        if (colorGraph(vertex_index + 1, m, color_array)) {
          return true;
        }

        // Backtracking step
        color_array[vertex_index] = -1;
      }
    }

    return false;
  }

  bool canColorGraphWithMColors(int m) {
    vector<int> color_array(num_vertices, -1);

    return colorGraph(0, m, color_array);
  }
};

int main() {
  int num_vertices = 4;
  int m = 3;

  Graph graph(num_vertices);

  // Add edges to the graph
  graph.addEdge(0, 1);
  graph.addEdge(0, 2);
  graph.addEdge(1, 2);
  graph.addEdge(2, 3);

  if (graph.canColorGraphWithMColors(m)) {
    cout << "The graph can be colored with " << m << " colors.\n";
  } else {
    cout << "The graph cannot be colored with " << m << " colors.\n";
  }

  return 0;
}
