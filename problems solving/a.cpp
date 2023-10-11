#include <iostream>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        long long q,c,p;
        long long a,b,k;
        cin>>a>>b>>k;
        q=(a*1)+(b*2);
        c=(a*1)+(b*2);
        p=(a*2)+(b*2);
        if(k<=q and k<=c and (k+1)<=p){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
    return 0;
}
