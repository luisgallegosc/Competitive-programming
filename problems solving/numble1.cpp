#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	int a,b,div,min,m;
	while(t--){
		cin>>a>>b;
		a=abs(a);
		b=abs(b);
		m=max(a,b);
		min=a+b-m;
		div=m-min;
		min =min*2;
		if(div==0){
			div=0;
		}
		else div=(div*2)-1;
		
		cout<<min+div<<endl;
	}
	
	
	return 0;
}
