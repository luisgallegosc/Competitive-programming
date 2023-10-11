#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void pedir_datos();
void imprimir_datos(int *,int);
void busqueda(int *, int);
void cierto_falso();


int n,m,*arreglo,pos,*dir_m;
char band = 'F';


int main(){
 pedir_datos();
 
 imprimir_datos(arreglo,n);
 
 busqueda(arreglo,n);
 
 cierto_falso();
 
 delete[] arreglo;
 getch();
 return 0;
}
void pedir_datos(){
 cout<<"Digite la cantidad de elementos que tendra el arreglo: "; cin>>n;
 
 arreglo = new int[n];
 
 for(int i=0;i<n;i++){
  cout<<"Digite un numero ["<<i+1<<"]: "; cin>>*(arreglo+i);
 }
}
void imprimir_datos(int *arreglo,int n){
 cout<<"\nEl arreglo es: "<<endl;
 
 for(int i=0;i<n;i++){
  cout<<*(arreglo+i)<<" ";
 }
 cout<<"\n";
}
void busqueda(int *arreglo, int n){
 
 
 cout<<"\nDigite un numero para localizarlo en el arreglo: "; cin>>m;
 
 dir_m = &m;
 
 for(int i=0;i<n;i++){
  if(*(arreglo+i)==*dir_m){
   band = 'V';
   pos = i;
  }
 }
}
void cierto_falso(){
 if(band == 'V'){
  cout<<"\nEl numero ha sido encontrado."<<endl;
  cout<<"Posicion: "<<pos<<endl;
 }
 else{
  cout<<"\nEl numero "<<*dir_m<<" no ha sido encontrado en el arreglo.";
 }
}