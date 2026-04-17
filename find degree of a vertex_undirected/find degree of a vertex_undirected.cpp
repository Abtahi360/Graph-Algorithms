#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    ifstream fin("g1.txt");
    fin >> n >> m;

    int **g = new int*[n];
    for(int i = 0; i < n; i++){
        g[i] = new int[n];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            g[i][j] = 0;
        }
    }

    int u, v;
    for(int i = 0; i < m; i++){
        fin >> u >> v;
        g[u][v] = g[v][u] = 1;
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << g[i][j] << " ";
        }
        cout << endl;
    }

    int find_v, sum=0;
    cout<<" Vertex Number: ";
    cin>>find_v;
        for(int j = 0; j < n; j++){
            if(g[find_v][j] == 1)
                sum++;
        }
        cout << endl;
    cout<<"Degree of "<<find_v<<" number Vertex is: "<<sum;

    return 0;
}
