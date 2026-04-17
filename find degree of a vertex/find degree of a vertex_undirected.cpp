#include<bits/stdc++.h>
using namespace std;

int** createZeroMatrix(int n) {
    int **g = new int*[n];
    for (int i = 0; i < n; i++) {
        g[i] = new int[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            g[i][j] = 0;
        }
    }
    return g;
}
void inputEdges(int **g, int m, ifstream &fin) {
    int u, v;
    for (int i = 0; i < m; i++) {
        fin >> u >> v;
        g[u][v] = g[v][u] = 1;
    }
}

void printMatrix(int **g, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
}

int calculateDegree(int **g, int vertex, int n) {
    int sum = 0;
    for (int j = 0; j < n; j++) {
        if (g[vertex][j] == 1) {
            sum++;
        }
    }
    return sum;
}
int main() {
    int n, m;
    ifstream fin("g1.txt");
    fin >>n>>m;
    int **g = createZeroMatrix(n);
    inputEdges(g, m, fin);
    printMatrix(g, n);
    int find_v;
    cout << "Vertex Number: ";
    cin >> find_v;
    int degree = calculateDegree(g, find_v, n);
    cout << "Degree of vertex " << find_v << " is: " << degree << endl;

    return 0;
}
