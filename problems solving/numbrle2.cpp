#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	int a,b,c,d,e;
	while(t--){
		int cont =0;
		int k=1;
		cin>>a>>b>>c>>d;
		int p[a+1];
		for(int i=1;i<=a;i++){
			cin>>p[i];
		}
		
		
		for(int i = 1;i<=a;i++){
			cout<<"rr"<<p[i]-p[k]<<"rr"<<endl;
			if(p[i]-p[k]>c+d||i%b==0){
				cont++;
				k=i+1;
				cout<<"=="<<i<<"=="<<k<<"=="<<endl;
			}
			
		}
		cout<<cont<<endl;
	}
		
		
		
	
	return 0;
}
