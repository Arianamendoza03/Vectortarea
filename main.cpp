//1. Diseñe la función que imprima el vector de nombres
#include "iostream"
#include "string"
using namespace std;
void nombre (int limite){
    string nombres[limite];
    for(int i = 0; i < limite; i++)
    {
        cout << "\n******* Nombres " << i + 1 << " ********:\n";
        cout << endl<<"Primer nombre: ";
        cin >> nombres[i];
    }

}

//2. Diseñe la función que ordene descendentemente (Z-A) el vector de nombres

#include <iostream>
#include <string.h>
using namespace std;
void ordenar_nombre (int Max){
    int ciclo_A,ciclo_B; //Ciclos que ayudaran a ordenar el arreglo
    char nombre[5][10]; //Arreglo que guardara los nombres
    char aux[20]; //Vector auxiliar que guardara nombres temporalmente
    //Ciclo en el que solicitamos los nombres a ingresar
    for(ciclo_A=0;ciclo_A<Max;ciclo_A++){
        cout<<("Ingresa un nombre: ");
        cin>>(nombre[ciclo_A]);
    }


    for(ciclo_A=1;ciclo_A<6;ciclo_A++) //Ciclo que se repetirá 5 veces para ordenar cada nombre
        for(ciclo_B=0;ciclo_B<5-ciclo_A;ciclo_B++) //Ciclo que ordenara un nombre, se va restando pues en cada vuelta queda ordenado el ultimo nombre
            if(strcmp(nombre[ciclo_B],nombre[ciclo_B+1])<0) //Si el nombre actual es mayor al siguiente nombre...
            {
                strcpy(aux,nombre[ciclo_B]); //Guardamos el nombre actual en Aux
                strcpy(nombre[ciclo_B],nombre[ciclo_B+1]); //Pasamos el nombre siguiente al actual
                strcpy(nombre[ciclo_B+1],aux); //Pasamos el Aux al siguiente
            }

    cout<<endl<<("---- NOMBRES ORDENADOS ---- ");
    //Mostramos los nombres ordenados
    for(ciclo_A=0;ciclo_A<Max;ciclo_A++){
        cout<<endl<<(nombre[ciclo_A]);
    }
}
int main(){
    int Max=5;
    ordenar_nombre(Max);

}

