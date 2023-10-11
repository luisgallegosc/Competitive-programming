#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	double n,k;
	cin>>n>>k;
	double d,s;
	cin>>d>>s;
	double aux=n-k;
	n=n*d;
	k=k*s;
	n=n-k;
	double R = n/aux;
	if(R<=100&&R>=0){
		
		cout << fixed << setprecision(7) << R << endl;
	}
	else cout<<"impossible";

    return 0;
}
