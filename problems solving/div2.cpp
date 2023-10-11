#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    int t; cin>>t;
    vector<bool> lista(5050,true);
    int r= sqrt(5050);
    for(int i=2;i<r;i++){   
        for(int j=i*i;j<=5050;j+=i){
            lista[j]=false;
        }
    }

    while(t--){
        int n;
        cin>>n;
        int k= n*(n+1)/2;
        if(lista[k]==true){
            for(int i=1;i<=n;i++){
                cout<<i<<' ';
            }
        }
        else {
            cout<<"-1"; cout<<endl;
        }
    }
}