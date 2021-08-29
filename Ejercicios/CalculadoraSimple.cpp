#include <iostream>

using namespace std;

int main() {
	float x; // el primer número
	float y; //el segundo número
	float r; // el resultado
	char op; //operador matermático a usar
	
	cout <<"Calculadora sencilla" << endl;
	cout <<"Numero 1: ";
	cin >> x;
	cout << "\nNumero 2: ";
	cin >> y;
	cout << "Operacion ( + | - | * | / ):    ";
	cin >> op;
	
	switch(op)
	{
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
	cout <<endl <<" x " << op << " y = "<< r << endl;
		
	return 0;
		
		
}
