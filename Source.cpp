#include <iostream>
#include <conio.h>
#include <math.h>
#include <functional>
using namespace std;
using namespace System;
int main() {
	int n = 5; //Tamaño del arreglo o vector
	int Num[5]; //Es el arreglo en el cual se almacena los numeros
	for (int i = 0; i < n; i++) {  //Estamos validando el recorrido del arreglo
		cout << "Ingrese el numero [" << i + 1 << "]: "; cin >> Num[i]; //Ingresando los Num.
	}
	//Proceder a ordenar de manera ascendente 1+...
	cout << endl << endl;
	for (int i = 0; i < n - 1; i++) {  // Ciclo de 4
		for (int j = 0; j < n - 1; j++) {
			if (Num[j] > Num[j + 1]) {
				int aux = Num[j];
				Num[j] = Num[j + 1];
				Num[j + 1] = aux;
			}
		}
	}
	//Imprimir por pantalla los numeros ordenados
	cout << "Numeros ordenados ->  ";
	for (int i = 0; i < n; i++) {  //Estamos validando el recorrido del arreglo
		cout << Num[i] << "  "; //Imprimiendo los numeros ordenados
	}
	_getch(); return 0;
}