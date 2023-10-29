#include<iostream>
using namespace std;
char vertArr[20][20]; //the adjacency matrix initially 0
int count = 0;
void displayMatrix(int v) {
   int i, j;
   for(i = 0; i < v; i++) {
      for(j = 0; j < v; j++) {
         cout << vertArr[i][j] << " ";
      }
      cout << endl;
   }
}
void add_edge(int u, int v) {       //function to add edge into the matrix
   vertArr[u][v] = 1;
   vertArr[v][u] = 1;
}
main(int argc, char* argv[]) {
   int v = 5;    //there are 6 vertices in the graph
   char A,B,C,D,E;
   add_edge(A, B);
   add_edge(A, C);
   add_edge(A, D);
   add_edge(B, A);
   add_edge(B, D);
   add_edge(B, E);
   add_edge(C, A);
   add_edge(C, D);
   add_edge(D, A);
    add_edge(D, B);
    add_edge(D, C);
    add_edge(D, E);
    add_edge(E, B);
    add_edge(E, D);
   displayMatrix(v);
}
