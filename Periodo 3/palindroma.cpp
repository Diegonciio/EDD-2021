#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <ctype.h>  //sirve para utilizar la funcion isalpha()
#include "pila.hpp"
#include "cola.hpp"

using std::string;
using namespace std;


int main(){
	Pila<char> pInvertida;
	Cola<char> pOriginal;
	string palabra;   // sirve para almacenar la palabra ingresada por el usuario
	
	cout << "Verificacion de palabras palindromas. \nFavor ingrese la palabra:  ";
	cin >> palabra;
	cout << endl;
	
	for(size_t i=0; i < palabra.length(); i++){
		char caracter = palabra[i];
		cout << caracter; // esto se puede borra despues
		if (caracter == '{'){
			pInvertida.push(caracter);
			cout<< pInvertida.pilaComoCadena() << endl;
		} else if(caracter == '}'){
			if(pInvertida.estaPilaVacia()){
				return false;
			}
			pInvertida.pop();
			cout << pInvertida.pilaComoCadena() << endl;
		}
	}
	return pInvertida.estaPilaVacia();
/*
/*	while(letra!='.'){			//validación de finalización de palabra
		if(isalpha(letra)){ 	// validación de char
			S.push(letra);		// almacena en pila letra ingresada
		}
		cin >> letra;
	}
	
	stack <char> palabra;		//almacena la palabra ingresada en pila para compararla
	palabra = S;				// con el resultado invertido posteriormente

	while(!S.empty()){
		Q.push(S.top());		//convierte a cola la pila e invierte el orden
		S.pop();
	}
		
	cout<<endl<<"Palabra invertida: ";
	
	while(!Q.empty()){
		cout<<Q.front();
		S.push(Q.front());		//se devuelve la palabra invertida a la pila inicial
		Q.pop();
	}
	
	cout<<endl<< "Palabra Original: ";
	stack<char> s1;
	s1 = S;						//se almacena en s1 la pila invertida para la impresión
	
	while(!s1.empty()){
		cout<<s1.top();
		s1.pop();
	} 
	
	if(palabra==S){				//Se realiza la validación de la palabra inicial vs la invertida S
		cout<<"\n\nLa palabra ES palindroma!!! :O";
	}
	else{
		cout<<"\n\nLa palabra NO es palidroma :(";
	}
	
	return 0;
*/	
}

