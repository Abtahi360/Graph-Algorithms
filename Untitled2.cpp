#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, m;
    cin>>n>>m;
    int **g = new int* [n];
    for(int i=0; i<n; i++){
        g[i] = new int[n];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            g[i][j] = 0;
        }
    }

    int u,v;
    for(int i=0; i<m; i++){
        cin>>u>>v;
        g[u][v]= g[v][u] = 1;
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<g[i][j];
        }
    }

    return 0;
}
