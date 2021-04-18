//Declaramos las Librerias 

#include <iostream>
#include <conio.h>


using namespace std;

// declaracion de los Vectores 
// Estudiante
int curso[2][5]; 
// Curso
int sumCurso[2]; 
// Suma de curso
float promCurso[2]; 
//declaracion de las variables
int c, e, op; 

// estructura de ingreso al curso
void ingresoDatos(){

	for ( c = 0; c <= 1; c++ ){ 

		for ( e = 0; e <= 4; e++ ){ 
			cout << "Ingreso de nota en la clase " << c + 1 << " del estudiante " << e + 1 << " = "; 

			cin >> curso[c][e]; 
		}
	}
}

// calculo del promedio de la  estructura
void calculoPromedio(){
	for ( c = 0; c <= 1; c++ ){ 
		for ( e = 0; e <= 4; e++ ){ 
			sumCurso[c] += curso[c][e];
		}
		promCurso[c] = sumCurso[c] / 5; 
	}
}

// visualizacion de vectores y los promedios estructura
void mostrarVectores(){
	cout << "Vector Curso 1"; 
	for ( e = 0; e <= 4; e++ ){ 
		cout << "     " << curso[0][e];
	}
	// muestrar el promedio
	cout << "\nEl promedio del curso es:  " << promCurso[0]; 
	
	cout << "Vector Curso 2";
	for ( e = 0; e <= 4; e++ ){ 
		cout << "     " << curso[1][e];
	}
	cout << "\nEl promedio del curso es:  " << promCurso[1]; 
}
#include <stdlib.h>
// ver la  estructura
int main(){	
	do{
	
		cout << "Bienvenidos al programa Vector Curso" << endl;
		cout << "Opcion 1:   Ingresar datos de todos los cursos." << endl;
		cout << "Opcion 2:   Mostrar la primera nota del Vector 1" << endl;
		cout << "Opcion 3:   Mostrar la última nota del Vector 2" << endl;
		cout << "Opcion 4:   Calcule el promedio de los cursos." << endl;
		cout << "Opcion 5:   Mostrar los dos Vectores, y el resultado Promedio de cada curso." << endl;
		cout << "Opcion 6:   Finalizar." << endl;
		// Ingreso de las Opciones
		cout << "Ingrese Una Opcion "; cin >> op; 
		cout << endl << endl;
		
		// declaracion de switch para toma de deciones 
		switch ( op ){ 
			case 1: 
			//debemos llamamar la funcion de ingresar datos
				ingresoDatos(); 
				//Limpeamos pantalla
				system ("cls");  
				//salimos de la estructura
				break; 
			case 2: 
				cout << "La primera nota del Vector 1 es de: " << curso[0][0];  
				getch(); // Detenemos la funcionalida del Programa
				//limpeamos pantalla
				system ("cls"); 
				//salimos de la estructura
				break;
			case 3: 
				cout << "La ultima nota del Vector 2 es de: " << curso[1][4]; 
				getch(); // Detenemos la funcionalida del Programa
				//limpeamos pantalla
				system ("cls"); 
				//salimos de la estructura
				break; 
			case 4: 
				calculoPromedio();
				cout << "El calculo se ha Realizado" << endl;
				system ("pause"); //  Detenemos la funcionalida del Programa
				//limpeamos pantalla
				system ("cls"); 
				//salimos de la estructura
				break; 
			case 5: 
				mostrarVectores();
				cout << "precione enter" << endl;
				//este es para limpiar la pantalla
				system ("cls"); 
				//salimos de la estructura
				break; 
				//salimos de la estructura
			case 6: break; 
			default: 
				cout << "\nEsta Opcion no esta disponible" << endl;
				system ("pause"); // pausar o detener el Programa
				system ("cls"); //limpeamos  la pantalla
		}
	} while ( op != 6 ); // Mientras que la opcion es diferente a las opciones del 1 al 6 sea seguira con la estructura do While
}

