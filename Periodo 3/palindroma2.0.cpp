#include <iostream>
#include <string>
#include <ctype.h>  //sirve para utilizar la funcion isalpha()
#include "pila.hpp"
#include "cola.hpp"
// Creado por Diego Galdamez GF100516
using std::string;
using namespace std;

int main(){
	Pila<char> pOriginal; // donde se almacenará la palabra original
	Pila<char> pConvertir; // donde se almacenará la palabra a convertir (invertir)
	Cola<char> pInvertida; // cola donde se invierte la palabra convertida

	string palabra;   // sirve para almacenar la palabra ingresada por el usuario
	
	cout << "Verificacion de palabras palindromas. \nFavor ingrese la palabra:  ";
	cin >> palabra;
	cout << endl << "Almacenando palabra en Pila...";
	
	for(size_t i=0; i < palabra.length(); i++){
		char caracter = palabra[i];
		if(isalpha(caracter)){ 	//sirve como validación para evitar que se almacenen espacios o signos
		pOriginal.push(caracter);
		pConvertir.push(caracter);
		}
	}
	
	cout << endl << endl  <<  "Invirtiendo palabra pasando a Cola..." << endl;	
		
	while(!pConvertir.estaPilaVacia()){
		pInvertida.enqueue(pConvertir.top());
		cout << pInvertida.colaComoCadena() << endl;
		pConvertir.pop();		
	}
	
	cout << endl << endl << endl << "Pasando de Cola a Pila..." << endl << endl;	
	while(!pInvertida.estaColaVacia()){
		pConvertir.push(pInvertida.front());
		pInvertida.dequeue();
	}
	
	string original = pOriginal.pilaComoCadena();
	cout << endl << endl << "La palabra original es: " << original;
	string invertida = pConvertir.pilaComoCadena();
	cout << endl << endl << "La palabra invertida es:" << invertida << endl;
	
	if(original==invertida){				//Se realiza la validación de la palabra inicial vs la invertida S
		cout<<"\n\nES palindroma!!! :O \n \n";
	}
	else{
		cout<<"\n\nNO es palidroma :( \n \n";
	}
	
	return 0;
}

