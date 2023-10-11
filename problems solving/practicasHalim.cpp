#include<algorithm>
#include<cmath>
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int col = str[0] - 'a' + 1;
    int row = str[1] - '1' + 1;
    int pos = (row - 1) * 8 + col;
    cout << "La posición de " << str << " es: " << pos << endl;
    return 0;   
}