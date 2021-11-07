#include <iostream>
#include <string>
#include "pila.hpp"
// Diego Galdámez GF100516
using std::string;
using std::cin;
using std::cout;
using std::endl;

bool estanLlavesBalanceadas(string expresion){
	Pila<char> unaPila;
	for(size_t i=0; i < expresion.length(); i++){
		char caracter = expresion[i];
		cout << caracter << endl; // esto se puede borra despues
		if (caracter == '{'){
			unaPila.push(caracter);
			cout<< unaPila.pilaComoCadena() << endl;
		} else if(caracter == '}'){
			if(unaPila.estaPilaVacia()){
				return false;
			}
			unaPila.pop();
			cout << unaPila.pilaComoCadena() << endl;
		}
	}
	return unaPila.estaPilaVacia();
}

int main(){
	string cadena;
	cout <<"Ingrese una expresi\242n: "<< endl;
	cin >> cadena;
	if(estanLlavesBalanceadas(cadena)){
		cout << "Las llaves estan balanceadas. ";
	}else{
		cout<<"Las llavez no estan balanceadas. ";
	}
	return 0;
}
