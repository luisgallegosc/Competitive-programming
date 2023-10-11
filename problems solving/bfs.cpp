#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;
const int MAXN = 500;
vector<int> gra[MAXN];
void bfs(int star, int comp){
    queue<int> q;
    vector<bool> visitado(MAXN,false);
    vector<int> depth(MAXN,0);
    q.push(star);
    visitado[star] = true;
    while (!q.empty()){
        int curr =q.front();
        q.pop();
        if(curr==comp){
            cout<<depth[curr]<<endl;
            break;
        }

        for(int i=0;i<gra[curr].size();i++){
            int junt = gra[curr][i];
            if(!visitado[junt]){
                q.push(junt);
                visitado[junt] = true;
                depth[junt] = depth[curr]+1;
            }
        }

    }
}
int main() {
    for(int j=1;j<=56;j+=8){
        for(int k=j;k<j+6;k++){
            gra[k].push_back(k+10);
            gra[k+10].push_back(k);
        }
        for(int i=j+2;i<j+8;i++){
            gra[i].push_back(i+6);
            gra[i+6].push_back(i);
        } 
    }
    for(int i=1;i<49;i+=8){
        for(int j=i;j<i+7;j++){
            gra[j].push_back(j+17);
            gra[j+17].push_back(j);
        }
        for(int k=i+1;k<i+8;k++){
            gra[k].push_back(k+15);
            gra[k+15].push_back(k);
        }
    }
    int t;cin>>t;
    while(t--){
        string l1,l2;        
        cin>>l1>>l2;
        int col = l1[0] - 'a' + 1;
        int row = l1[1] - '1' + 1;
        int d1 = (row - 1) * 8 + col;
        col = l2[0] - 'a' + 1;
        row = l2[1] - '1' + 1;
        int d2 = (row - 1) * 8 + col;
        bfs(d1,d2);
    }
    return 0;

}