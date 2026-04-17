#include<bits/stdc++.h>
using namespace std;
#define SIZE 100

void input_Edges(int **g, int m, int n) {
    int u, v;
    ifstream fin("graph values.txt");
    for (int i = 0; i < m; i++) {
        fin >> u >> v;
        g[u][v] = g[v][u] = 1;
    }
}
int findDegree(int vertex, vector<int> adList[]){
    return adList[vertex].size();
}

int main(){
    vector<int> adList[SIZE];
    int n,m;
    ifstream fin("graph values.txt");
    fin>>n>>m;

    int u,v;
    for(int i=0; i<m; i++){
        fin>>u>>v;
        adList[u].push_back(v);
        adList[v].push_back(u);

    }
    for(int i=0; i<n; i++){
            cout<<"------>";
        for(int j=0; j<adList[i].size(); j++){
            cout<<adList[i][j]<<", ";
        }
        cout<<endl;
    }

    int vertex;
    cout<<"Enter the vertex: ";
    cin>>vertex;
    cout<< "Degree of vertex "<<vertex<<" is: "<<findDegree(vertex, adList)<<endl;

    return 0;

}
