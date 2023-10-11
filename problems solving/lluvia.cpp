#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int dfs(int u,vector<bool>& visited,vector<vector<int>>& gra){
    visited[u] = true;
    cout<< u <<" ";
    for(int v: gra[u]){

    }
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        n=n+1;
        vector<vector<int>> tam(n+2,vector<int>(m+2,0));
        for(int i = 1;i<n-2;i++){
            for(int j=1;j<m-1;j++){
                cin>>tam[i][j];
            }
        }
        vector<int> gra[m*n];
        for(int i = 1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                gra[n].push_back(i*j);
            }
        }
        int val=1;
        for(int i = 1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                if(tam[i][j]>tam[i-1][j]){
                    gra[val].push_back(val-1);
                }
                val++;
            }
        }
        int val=1;
        for(int i = 1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                if(tam[i][j]>tam[i+1][j]){
                    gra[val].push_back(val+1);
                }
                val++;
            }
        }
        int val=1;
        for(int i = 1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                if(tam[i][j]>tam[i][j+1]){
                    gra[val].push_back(val+m);
                }
                val++;
            }
        }
        int val=1;
        for(int i = 1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                if(tam[i][j]>tam[i][j-1]){
                    gra[val].push_back(val-m);
                }
                val++;
            }
        }

    }
    return 0;
}