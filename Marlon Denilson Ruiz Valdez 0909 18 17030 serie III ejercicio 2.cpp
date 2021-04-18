//declaracion de librerias
#include <iostream>
#include <conio.h>

using namespace std;

// Declaramos los vectores
int vectorA[3], vectorB[3], vectorC[3]; 
float prom_C; 
//Declaramios las variables
int pointer, sum_C; 

// Ingresamos vector A estructura
void ingresoDatosA(){
	for ( pointer = 0; pointer <= 2; pointer++ ){ 
		cout << "Ingrese el dato " << pointer + 1 << " del Vector A = "; 
		cin >> vectorA[pointer]; // Ingresamos los datos 
	}
}

// Ingresamos al vector B estructura
void ingresoDatosB(){
	for ( pointer = 0; pointer <= 2; pointer++ ){ 
		cout << "Ingrese el dato " << pointer + 1 << " del Vector B = "; 
		cin >> vectorB[pointer]; // Ingresamos los de Datos
	}
}

// resta de vector A y B estructura
void restaVector(){
	for ( pointer = 0; pointer <= 2; pointer++ ){ 
		vectorC[pointer] = vectorA[pointer] - vectorB[pointer];
	}
}

// ingreso del vector A estructura
void promedioVectorC(){
	for ( pointer = 0; pointer <= 2; pointer++ ){ 
		sum_C += vectorC[pointer];
	}
	prom_C = sum_C / 3;
}

#include <stdlib.h>

int main(){	
	cout << "Bienvenidos al programa Resta de Vectores" << endl << endl;
	//llamamos a la funcion del vector a para ingresar datos
	ingresoDatosA();
	//llamamos a la funcion del vector a para ingresar datos
	ingresoDatosB(); 
	//llamamos a la funcion para la resta del vector
	restaVector(); 
	//llamamos a la funcion promedio del vector
	promedioVectorC(); 
		
	cout << endl;
	cout << "   Vector A" << endl;
	cout << "  " << vectorA [0] << "  " << vectorA [1] << "  " << vectorA [2] << endl << endl;
	
	cout << "   Vector B" << endl;
	cout << "  " << vectorB [0] << "  " << vectorB [1] << "  " << vectorB [2] << endl << endl;
	
	cout << "   Vector C" << endl;
	cout << "  " << vectorC [0] << "  " << vectorC [1] << "  " << vectorC [2] << endl << endl;
	
	cout << "\nPromedio del Vector C = " << prom_C;
	
	
	getch();
}

