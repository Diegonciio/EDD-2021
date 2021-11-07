#include <iostream>
#include <string>
#include <regex>
#include <conio.h>
#include "pila.hpp"
// Diego Galdámez GF100516
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::regex;
//: "(<\w+>|</\w+>)”
	
int main(){
	
	Pila<string> tag;
//Regex para la expresión
	string expresion;
	cout <<"Ingrese una expresi\242n en lenguaje de etiquetado HTML: "<< endl;
	cin >> expresion;
	const regex expReg("<\\w+>|</\\w+>");
	const regex apertura("<\\w+>");
	const regex cierre("</\\w+>");
	std::smatch m;
	string y;
	while(regex_search(expresion,m,expReg)){
		for(auto x:m) cout << x << " ";
		cout << endl;
		
		if(regex_match(expresion,apertura))
		{
		tag.push(expresion);	
		}
		else if (
		regex_match(expresion,cierre)&&tag.top()==expresion)
		{
		
		tag.pop();
		}
		//if(std::regex_match(x,"<\\w+>"))
		
		//tag.pop();}
		tag.pilaComoCadena();
		expresion = m.suffix().str();
		
	//	cout<< endl <<tag.top() << endl;
	}
	

	
	if(tag.estaPilaVacia()){
		cout << "Todo Ok. ";
	}else{
		cout<<"Este documento HTML no es valido ";
	}
	
	
return 0;
}
