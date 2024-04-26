#include <iostream>

using namespace std;

int main(){
    int numeros[] = {1,2,3,4,5,1,2,3,4,5};

    int largoDelArray  = sizeof(numeros)/sizeof(numeros[0]);

    int nuevoElemento = 10;

    int nuevoTamanio = largoDelArray + 1;
    int nuevoArray[nuevoTamanio];
    copy(numeros, numeros + largoDelArray, nuevoArray);
    nuevoArray[largoDelArray] = nuevoElemento;

    cout << "Nuevo Array: "<< endl;



      for(int i=0; i < nuevoTamanio; i++){
            cout << nuevoArray[i] <<" ";
        }

        /*
        cout << "El largo del array es "<< largoDelArray<<"\n";
    for(int i=0; i < largoDelArray; i++){
        cout << numeros[i] <<" ";
    }


    int aux=0;
    for(int i=0; i<largoDelArray-1;i++){
        for(int j=0; j < largoDelArray-1;j++){
            if(numeros[j]>numeros[j+1]){
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1]=aux;
            }
        }
    }
    cout << "Array ordenado"<<endl;
     for(int i=0; i < largoDelArray; i++){
        cout << numeros[i] <<" ";
    }
    */
    return 0;
}
