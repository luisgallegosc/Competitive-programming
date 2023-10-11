#include<iostream>
using namespace std;
int **matriz1,f,c;
void leerMatriz();
void mostrarMatriz();
int main(){
    leerMatriz();
    mostrarMatriz();

}
void leerMatriz(){
    cout<<"digite el numero de filas despues el numero de columnas: ";
    cin>>f>>c;

    matriz1 = new int*[f];
    for(int i = 0;i<f;++i){
        matriz1[i] = new int[c]; 
    }
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<"ingrese el numero de la posion["<<i<<"]["<<j<<"]:";
            cin>>*(*(matriz1+i)+j);
        }
    }

}

void mostrarMatriz(){
    cout<<"==========================";
    cout<<"a continuacion la matriz: ";
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<*(*(matriz1+i)+j);
        }
        cout<<endl;
    }
        
}