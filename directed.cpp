#include<bits/stdc++.h>
using namespace std;

#define SIZE 100
int main(){
    vector<int> adList[SIZE];
    int n,m;
    cin>>n>>m;
    int u,v;
    for(int i=0; i<m; i++){
        cin>>u>>v;
        adList[u].push_back(v);
        //adList[v].push_back(u);

    }
    for(int i=0; i<n; i++){
            cout<<"------>";
        for(int j=0; j<adList[i].size(); j++){
            cout<<adList[i][j]<<", ";
        }
        cout<<endl;
    }


}
