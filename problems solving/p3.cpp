#include<iostream>
using namespace std;
int  main(){
    int t;
    cin>>t;
    while (t--){
        int n; cin>>n;
        int k,b;
        int b1,b2;
        int h1=100000000,h2=100000000,h3=100000000;
        for(int i=0;i<n;i++){
            cin>>k>>b;
            b1=b%10;
            b2=b/10;
            b=b1+b2;
            if(b==2){
                if(k<=h3){
                    h3=k;
                }
            }
            if(b1==1){
                if(k<=h1){
                    h1=k;
                }
            }
            if(b2==1){
                if(k<=h2){
                    h2=k;
                }
            }
        }
        if(h1==100000000 or h2==100000000){
            cout<<-1<<endl;
        }
        else if(h1+h2>h3){
            cout<<h3<<endl;
        }
        else{
            cout<<h2+h1<<endl;
        }
    }
}