#include <iostream>
#include <vector>

using namespace std;

bool isCyclic(vector<vector<int>>& adj, int v, vector<bool>& visited) {
  if (visited[v]) {
    return true;
  }

  visited[v] = true;

  for (int neighbor : adj[v]) {
    if (isCyclic(adj, neighbor, visited)) {
      return true;
    }
  }

  return false;
}

int main() {
  int n = 4;
  vector<vector<int>> adj(n);

  adj[0].push_back(1);
  adj[1].push_back(0);
  adj[1].push_back(2);
  adj[2].push_back(1);
  adj[2].push_back(3);
  adj[3].push_back(2);

  vector<bool> visited(n, false);

  bool isCyclic = false;
  for (int i = 0; i < n; i++) {
    if (!visited[i]) {
      if (isCyclic(adj, i, visited)) {
        isCyclic = true;
        break;
      }
    }
  }

  if (isCyclic) {
    cout << "The graph contains a cycle." << endl;
  } else {
    cout << "The graph does not contain a cycle." << endl;
  }

  return 0;
}
