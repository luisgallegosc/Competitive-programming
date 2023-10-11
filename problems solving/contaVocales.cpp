#include<iostream>
#include<string.h>
using namespace std;
char nombre[30];
void pedirNombre();
void contadorVocales(char *nombre);
int main(){
    pedirNombre();
    contadorVocales(nombre);

    return 0;
};
void pedirNombre(){
    cout<<"ingrese un nombre: ";
    cin.getline(nombre,30,'\n');
    strupr(nombre);
}

void contadorVocales(char *nombre){
    int contA=0,contE=0,contI=0,contO=0,contU=0;
     while(*nombre){
        switch(*nombre){
            case 'A': contA++;
                break;
            case 'E': contE++;
                break;
            case 'O': contO++;
                break;
            case 'I': contI++;
                break;
            case 'U': contU++;
                break;
        }
        nombre++;
     }
     cout<<"exixten A: "<<contA<<endl;
     cout<<"exixten E: "<<contE<<endl;
     cout<<"exixten I: "<<contI<<endl;
     cout<<"exixten O: "<<contO<<endl;
     cout<<"exixten U: "<<contU<<endl;
}