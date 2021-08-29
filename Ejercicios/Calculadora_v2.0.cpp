#include <iostream>

using namespace std;

float operar (float x, float y, char op){
	float r=0;
	switch(op)	{
		case '+':
			r = x + y;
			break;
		case '-':
			r = x - y;
			break;
		case '*':
			r = x * y;
			break;
		case '/':
			r = x / y;
			break;
		default:
			cout <<"Operador no valido" <<endl;
		}
	return r;
}

int main() {
	float x; // el primer n�mero
	float y; //el segundo n�mero
	float r; // el resultado
	char op; //operador materm�tico a usar
	
	cout <<"Calculadora sencilla" << endl;
	cout <<"Numero 1: ";
	cin >> x;
	cout << "\nNumero 2: ";
	cin >> y;
	cout << "Operacion ( + | - | * | / ):    ";
	cin >> op;
	
	r=operar(x,y,op);
	
	cout <<endl <<" x " << op << " y = "<< r << endl;
		
	return 0;
}
