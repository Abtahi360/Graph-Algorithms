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

void inputEdges(int **g, int m) {
    int u, v;
    ifstream fin("g1.txt");
    for (int i = 0; i < m; i++) {
        fin >> u >> v;
        g[u][v] = 1;
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

int calculateInDegree(int **g, int vertex, int n) {
    int in_deg = 0;
    for (int i = 0; i < n; i++) {
        if (g[i][vertex] == 1) {
            in_deg++;
        }
    }
    return in_deg;
}

int calculateOutDegree(int **g, int vertex, int n) {
    int out_deg = 0;
    for (int j = 0; j < n; j++) {
        if (g[vertex][j] == 1) {
            out_deg++;
        }
    }
    return out_deg;
}

int main() {
    int n, m;
    ifstream fin("g1.txt");
    fin >> n >> m;

    int **g = createZeroMatrix(n);
    inputEdges(g, m);
    printMatrix(g, n);

    int find_v;
    cout << "Vertex Number: ";
    cin >> find_v;

    int in_deg = calculateInDegree(g, find_v, n);
    int out_deg = calculateOutDegree(g, find_v, n);

    cout << "In Degree of vertex " << find_v << " is: " << in_deg << endl;
    cout << "Out Degree of vertex " << find_v << " is: " << out_deg << endl;

    return 0;
}
