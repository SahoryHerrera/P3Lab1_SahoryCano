#include <iostream>

// Sahory Herrera - 11941262
using std:: endl;	
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
			{// imprima un tablero de ajedrez
				int n = 0;
				cout << "Ingrese un numero: ";
			   	cin >> n;
			   	
			   	for (int i = 0; i < n; i++) {
       			 for (int j = 0; j < n; j++) {
           			 if(i % 2 == 0){
               	 if(j % 2 == 0){
                    cout << "0 ";
                } else{
                    cout << "1 ";
                }//fin else
          		  } else{
                 if(j % 2 == 0){
                    cout << "1 ";
                } else{
                    cout << "0 ";
                }//fin else
          	  }//fin else
       		 }//fin for
       		 cout << "\n";
    		}//fin for
		
			
				break;
			}
				
			case 2:
			{//Dado el valor de n por el usuario, calcule:
			
			       double n = 0;
					cout<< "Ingrese limite: ";
					int lim = 0;
					cin >> lim;
					while(lim < 0){
					cout<< "Ingrese limite: ";
					cin >> lim;
					}
					
		  			for(int i = 1; i <= lim;i++){
					int j = i - 1;
					int k = i * 2;
					int l = j * k;
					n += l;
				
			}
			cout<< "El resultado es: " << n <<endl;
	
				break;	
			}//Fin case 2
			
				case 3:
			{//Ejercicios de las interaciones
			
			double n = 0;
			int t = 0;
			
				cout << "Ingrese el valor de Numero 1: ";
			    cin >> n;
			    cout << endl;
			    cout << "Ingrese el valor de Numero 2: ";
			    cin >> t;
			
			double max = n, mitad = 0.0, fin = n, inicio = 0.0;
    mitad =((fin - inicio) / 2) + inicio;
    for (int i = 1; i < t; i++) {
        if (mitad * mitad > n) {
            max = mitad;
            fin = max;
        } else {
            fin = max;
            inicio = mitad;
        }
        cout << "max " << max << endl;
        cout << "fin " << fin << endl;
        cout << "inicio " << inicio << endl;
        cout << "mitad " << mitad << endl << endl;
        mitad = ((fin - inicio) / 2) + inicio;
    }

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
