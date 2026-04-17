#include<bits/stdc++.h>
using namespace std;
#define SIZE 100

int find_OutD(int vertex, set<int> adList[]) {
    return adList[vertex].size();
}
int find_InD(int vertex, set<int> adList[], int n) {
    int inD=0;
    for(int i = 0; i<n; i++) {
        if(adList[i].find(vertex)!=adList[i].end()) {
            inD++;
        }
    }
    return inD;
}
void printList(set<int> adList[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Vertex " << i << " ------> ";
        for(auto it = adList[i].begin(); it != adList[i].end(); ++it) {
            cout << *it << ", ";
        }
        cout << endl;
    }
}

int main() {
    set<int> adList[SIZE];
    int n, m;

    ifstream fin("graph values.txt");
    fin >> n >> m;

    int u, v;
    for(int i = 0; i < m; i++) {
        fin >> u >> v;
        adList[u].insert(v);
    }
    printList(adList, n);
    int vertex;
    cout<<"Enter the vertex number: ";
    cin>>vertex;

    cout<<"Out-degree of vertex "<<vertex<<" is: "<<find_OutD(vertex, adList)<<endl;
    cout<<"In-degree of vertex "<<vertex<<" is: "<<find_InD(vertex, adList, n)<<endl;

    return 0;
}
