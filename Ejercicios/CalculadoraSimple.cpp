#include <iostream>

using namespace std;

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
