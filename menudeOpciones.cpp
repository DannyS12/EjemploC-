#include <iostream>
#include <conio.h>

using namespace std;

int main(){    
		char opcion;
		do{    
			cout<<"1. Suma"<<endl;
			cout<<"2. Multiplicacion"<<endl;
			cout<<"3. Salir"<<endl;
			cout<<"Ingrese una opcion: ";
			cin>>opcion;
			switch(opcion){
			case '1':				
				//opcion1
                break;  
			case '2':
				//opcion2
				break;
			case '3':
                //opcion3
				cout<<"Saliendo..."<<endl;
				break;
			default:
				cout<<"Opcion no valida"<<endl;
				break;
			}
		}while(opcion!='3');
		getch();   
	}
