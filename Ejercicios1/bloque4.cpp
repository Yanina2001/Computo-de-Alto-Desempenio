#include <iostream>
#include<stdlib.h>
#include <math.h>
#include <conio.h>
#define n 6
#define m 6
using namespace std;

int *randomArreglo(int *arreglo1, int x){
    for (int i=0;i<x;i++) {
        arreglo1[i]=rand()%100;
    }
    return arreglo1;
}

int *imprimirArreglo(int *arreglo1, int x){
    for (int i=0;i<x;i++) {
        cout << arreglo1[i];
        cout << " ";
    }
    return arreglo1;
}

int *sumaArreglo(int *sumaArreglo,int *arreglo1, int *arreglo2,int x){
    for (int i=0;i<x;i++) {
        sumaArreglo[i]=arreglo1[i]+arreglo2[i];
    }
}

int *restaArreglo(int *restaArreglo,int *arreglo1, int *arreglo2,int x){
    for (int i=0;i<x;i++) {
        restaArreglo[i]=arreglo1[i]-arreglo2[i];
    }
}


int productoEscalar(int productoArreglo,int *arreglo1, int *arreglo2,int x){
    for (int i=0;i<x;i++) {
        productoArreglo+=arreglo1[i]*arreglo2[i];
    }
    return productoArreglo;
}

int promedioArreglo(int *arreglo1, int x){
    int sumaT=0;
    for (int i=0;i<x;i++) {
        sumaT+=arreglo1[i];
    }
    return sumaT/x;
}


int desviacionEstandar(int *arreglo1, int x){
    int promedio = promedioArreglo(arreglo1,x);
    int sumaT=0;
    for (int i=0;i<x;i++) {
        sumaT+= (arreglo1[i]-promedio)*(arreglo1[i]-promedio);

    }
    return sqrt(sumaT/x);
}


//COMILLAS AQUI
int main(){
    
    int contador=10;
    int numero;
    
    cin >> numero;
    cout << "Este es el numero:" << numero << endl;

    while(contador>=1){
        cout << "Wenas noches x" << contador << endl;
        contador--;
    }
	
	do{
        cout << "Wenas noches x" << contador << endl;
        contador--;
    } while(contador>=1);
    // conio.h getch() hace qe no cierre el programa
    
    int j=0;
    for (int i = 0; i <= 10; i++) {
        cout << "El numero es:" << endl;
        cout << ++j << endl;
	}
	
   int numerito;
   cout << "Digite un numero" << endl;
   cin >> numerito ;
   cout << "Tabla de multiplicar del numero: " << numerito << endl;
    for (int i = 0; i <= 20; ++i) {
        cout << numerito << " x " << i << " = "<< i*numerito <<endl;
    }

   //int numero=0;
   //int contador=0;
    do {
        cout << "Digite el valor:" << endl;
        cin >> numero;
        if(numero>0){
            contador++;
        }
    } while (numero!=0);
    cout << "El numero de valores mayores a 0 son: " << contador << endl;
    
    int arreglo1[n];
    int arreglo2[n];



    randomArreglo(arreglo1,n);

    randomArreglo(arreglo2,n);


    cout << "Arreglo 1" << endl;
    imprimirArreglo(arreglo1,n);
    cout << endl;
    cout << "Arreglo 2" << endl;
    imprimirArreglo(arreglo2,n);
    cout << endl;

    int sArreglo[n];
    int rArreglo[n];

    sumaArreglo(sArreglo,arreglo1,arreglo2,n);

    cout << "Suma Arreglo" << endl;
    imprimirArreglo(sArreglo,n);
    cout << endl;

    restaArreglo(rArreglo,arreglo1,arreglo2,n);

    cout << "Resta Arreglo" << endl;
    imprimirArreglo(rArreglo,n);
    cout << endl;

    int productoPunto=0;

    productoPunto=productoEscalar(productoPunto,arreglo1,arreglo2,n);

    cout << "Producto Punto" << endl;
    cout << "El producto punto es: " << productoPunto;
    cout << endl;

    int promedio=0;

    promedio=promedioArreglo(arreglo1,n);

    cout << "Promedio del Arreglo 1 es:" << endl;
    cout << "El promedio del arreglo es: " << promedio;
    cout << endl;

    int desviacion=0;

    desviacion= desviacionEstandar(arreglo1,n);

    cout << "Desviacion Estandar del Arreglo 1 es:" << endl;
    cout << "La desviacion estandar del arreglo es: " << desviacion;
    cout << endl;


    int arreglo3[m][n];

    cout << "Ponemos numeros random en el arreglo:" << endl;

    for (int i = 0; i < m ; i++) {
        randomArreglo(arreglo3[i],n);
    }

    cout << "Imprimir arreglos" << endl;


    for (int i = 0; i < m ; i++) {
        imprimirArreglo(arreglo3[i],n);
        cout << endl;
    }

    cout << "Aqui va la desviacion estandar" << endl;

    int desviacionVector[m];

    for (int i = 0; i < m ; i++) {
        desviacionVector[i]=desviacionEstandar(arreglo3[i],n);
    }

    cout << "Vector de la desviacion estandar" << endl;

    imprimirArreglo(desviacionVector,m);

 }

