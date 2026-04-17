#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    ifstream fin("g1.txt");
    fin >> n >> m;
    int **g = new int*[n];
    for (int i = 0; i < n; i++) {
        g[i] = new int[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            g[i][j] = 0;
        }
    }
    int u, v;
    for (int i = 0; i < m; i++) {
        fin >> u >> v;
        g[u][v] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }


    int find_v;
    cout << "Vertex Number: ";
    cin >> find_v;
    int in_deg = 0, out_deg = 0;
    for (int j = 0; j < n; j++) {
        if (g[j][find_v] == 1) {
            in_deg++;
        }
    }
    for (int j = 0; j < n; j++) {
        if (g[find_v][j] == 1) {
            out_deg++;
        }
    }
    cout << endl;
    cout << "In Degree of vertex " << find_v << " is: " << in_deg << endl;
    cout << "Out Degree of vertex " << find_v << " is: " << out_deg << endl;
    return 0;
}
