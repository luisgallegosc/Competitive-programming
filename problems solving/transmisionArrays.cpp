#include <iostream>
using namespace std;
int hallarMax(int*,int);
int  main(){
    const int nElementos = 5;
    int numeros[nElementos] = {3,5,8,1,4};

    cout<<"el mayor elemento es: " <<hallarMax(numeros,nElementos);

    return 0;
}
 
int hallarMax(int *dirVec,int nElmentos){
    int max = 0;
    for(int i=0 ;i<nElmentos;++i){
        if(*(dirVec+i)>max){
            max = *(dirVec+i);
        }
    }
    return max;
}