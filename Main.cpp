#include <iostream>

// Sahory Herrera - 11941262
	
using std:: cout;
using std:: cin;
using namespace std;

int main() {
	//variables 
	int opcion;	//para el switch
	bool seguir = true;	//para salir
	
	while (seguir){
		
		cout << "+-------[MENU]-------+" << endl;
		cout << "1) Ejercicio ------[1]"<< endl;
		cout << "2) Ejercicio ------[2]"<< endl;
		cout << "3) Ejercicio ------[3]" << endl;
		cout << "4) Salir     ------[4]" << endl;
		cout << "+--------------------+" << endl;
		
		cout<< "Ingrese una opcion: "  ;
		cin >> opcion;	//lee la opcion del usuario
		cout << endl;
		
		switch (opcion){
			case 1:
			{		
		
			
				break;
			}
				
			case 2:
			{
			
				
				break;	
			}
			
				case 3:
			{
			
				
				break;	
			}
			
							
			case 4:
			{				
				cout << "Saliendo..." << endl;
				seguir = false;				
				break;
			}
			
			default: cout << "¡La opción que usted ingreso no es valida!" << endl;		
			
		}//fin del switch	
	}//fin de resp
	
	
	return 0;	
}
