#include <iostream>
#include <conio.h>

using namespace std;

int main(){ 
    int num1, num2, suma;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    suma = num1 + num2;
    cout << "La suma de los numeros es: " << suma;
    getch();
}