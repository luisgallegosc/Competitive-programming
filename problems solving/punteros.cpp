#include <iostream>
#include <stdlib.h>

using namespace std;
void pedirNotas();
void mostrarNotas();
int numCalif,*calif;
int main(){
    pedirNotas();    
    mostrarNotas();
    delete[] calif;
    return 0;
}
void pedirNotas(){
    cout<<"digite el numero de calificaciones: ";
    cin>>numCalif;
    calif = new int[numCalif];

    for(int i=0;i<numCalif;++i){
        cout<<"ingrese una nota: ";
        cin>>calif[i];
    }

}

void mostrarNotas(){
    cout<<"\n mostrando notas del usuario: \n";
    for(int i=0;i<numCalif;++i){
        cout<<calif[i]<<endl;
    }
}