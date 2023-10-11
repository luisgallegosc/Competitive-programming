#include<iostream>
#include<string.h>
using namespace std;
void pedirDatos();
int contador(char *);
char nombreUsauario[30];

int main(){
    pedirDatos();
    cout<<"\el numero de vocales es: "<<contador(nombreUsauario);

}
void pedirDatos(){
    cout<<"digite el nombre de usuario: ";
    cin.getline(nombreUsauario,30,'\n');
    strupr(nombreUsauario);
}
int contador(char *nombre){
    int cont = 0;
    while(*nombre){
        switch (*nombre)
        {
        case 'A':
        case 'E':
        case 'O':
        case 'I':
        case 'U': cont++; 
        }
        nombre++;
    }
    return cont;
}