#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main(){
	double pi= M_PI;
	double n;
	cin>>n;
	double x=sqrt(n/pi);
	x=2*pi*x;
	cout<<fixed<<setprecision(6)<<x<<endl;
	
}
