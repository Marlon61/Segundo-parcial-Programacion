//DECLARACION DE LIBRERIAS
#include <iostream>
#include <conio.h>

using namespace std;

// Declaracion de Variables y Vectores
int alfa[3][3]; 
int total[3]; 
// Declaracion de Variables
int f, c, op; 

// Ingreso de datos al curso estructura
void ingresoDatos(){
	for ( f = 0; f <= 2; f++ ){ 
		for ( c = 0; c <= 2; c++ ){ 
			cout << "Ingreso dato en la fila " << f + 1 << " columna " << c + 1 << " = "; 
			cin >> alfa[f][c]; // Ingreso de Datos
		}
	}
}

// Debemos Sumar las filas de la matriz Estructura
void sumaTotal(){
	total[0] = alfa[0][0] + alfa[1][1] + alfa[2][2];
	total[1] = alfa[2][0] + alfa[2][1] + alfa[2][2];
	total[2] = alfa[2][0] + alfa[1][1] + alfa[0][2];
}

// debemos mostrar el total de la estructura y la matriz
void mostrarMatrizVector(){
	cout << " Matriz ALFA " << endl;
	for ( f = 0; f <= 2; f++ ){ 
		cout << "  " << alfa[f][0] << "  " << alfa[f][1] << "  " << alfa[f][2] << endl;
	}

	cout << endl << endl << endl << endl << endl; 
	
	cout << "Vector TOTAL" << endl;
	cout << "  " << total[0] << "  " << total[1] << "  " << total[2] << endl;
}

#include <stdlib.h>
int main(){	
	do{
		// Mostrar en Pantalla
		cout << "Bienvenidos al programa Vector Curso" << endl;
		cout << "1. Ingresar datos a la matriz ALFA" << endl;
		cout << "2. Calculo de sumas de filas de la matriz" << endl;
		cout << "3. Mostrar la matriz ALFA y el vector TOTAL" << endl;
		cout << "4. Finalizar" << endl;
		// Ingresar la Opcion
		cout << "Elija Una Opcion --> "; cin >> op; 
		cout << endl << endl;

		switch ( op ){ 
			case 1: 
			//llamos a la funcion de ingresar datos
				ingresoDatos(); 
				system ("cls");  // Limpiamos pantalla
				break; // Salimos de la estructura
			case 2: 
			//Llamamos a la funcion sumar filas 
				sumaTotal(); 
				cout << "Las operaciones se han realizado con exito" << endl;
				system ("pause"); 
				system ("cls"); 
				break;
			case 3: 
			//Llamamos a la funcion de visualizar o mostrar la Matriz
				mostrarMatrizVector(); 
				getch(); 
				system ("cls"); 
				break; 
			case 4: break; 
			default: 
				cout << "\nEsta Opcion no esta disponible" << endl;
				system ("pause"); 
				system ("cls"); 
		}
	} while ( op != 4 ); // Mientras  la opcion que elijan que tiene como variable op sea diferente del 1 al 4 seguir con la estructura de do While
}

