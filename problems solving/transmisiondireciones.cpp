#include <iostream>
using namespace std;
void intercambio(float*,float*);
int main(){
    float num1 = 2.34,num2=0.43;

    cout<<"primer numero:"<<num1<<endl;
    cout<<"segundo numero: "<<num2<<endl;
    intercambio(&num1,&num2);
    cout<<"despues del cambio: \n";
    cout<<"primer numero:"<<num1<<endl;
    cout<<"segundo numero: "<<num2<<endl;



}
void intercambio(float* dir1,float*dir2){
    float aux;
    aux = *dir1;
    *dir1=*dir2;
    *dir2=aux;
}