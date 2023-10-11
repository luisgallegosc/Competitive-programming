#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n,m,aux,aux2=0;
	    cin>>n>>m;
	    n=(n*(n+1))/2;
	    for(int i=0;i<m;i++){
	        cin>>aux;
	        aux2=aux2+aux;
	    }
	    cout<<n-aux2<<endl;
	}
	return 0;
}
