#include <iostream> // Entrada/salida
#include <array> // Arreglos
#include <cstdlib> // Random
#include <ctime> // Inicializar random
#include <cctype> // Funciones para caracteres
#include <string> // Funciones para cadenas

using namespace std;
///////////////////////////////////////////////////////
class CuentaBancaria
{
	public:
	CuentaBancaria(int nCuenta, string nTitular, float sald);				//constructor
	float getSaldo(); 				// devuelve el saldo disponible en la cuenta banacaria
	string getNombreTitular(); 		// devuelve el nombreTitualr asociado a la cuenta bancaria
	int getNumeroCuenta();	// devuelve el nombreTitualr asociado a la cuenta bancaria
	
	void depositar(float importeDeposito);
	void retirar(float importeRetiro);		

	void setSaldo(float x);
			
	~CuentaBancaria();				//destructor			




		
	private:
		
		
int numeroCuenta;
string nombreTitular;
float saldo;

};

CuentaBancaria::CuentaBancaria(int nCuenta, string nTitular, float sald)
{
	this->numeroCuenta = nCuenta;
	this->nombreTitular = nTitular;
	this->saldo = sald;
}


CuentaBancaria::	~CuentaBancaria(){}


int CuentaBancaria::	getNumeroCuenta(){
	return this->numeroCuenta;
}

string CuentaBancaria::	getNombreTitular(){
	return this->nombreTitular;
}

float CuentaBancaria::getSaldo(){
	return this->saldo;
}

void CuentaBancaria::setSaldo(float x){
	saldo=x;
}


void CuentaBancaria::depositar(float importeDeposito){
	int total= importeDeposito+this->saldo;
	
	this->	setSaldo(total);
}


void CuentaBancaria::retirar(float importeRetiro){
	int total = this->saldo - importeRetiro;
		this->	setSaldo(total);
}


////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
	int nCuenta; 
	int opcion = 1;
	string nTitular;
	float sald=-1;
	cout << "Ingrese el numero de cuenta: ";
	cin >> 	nCuenta;
	cout << "\n Ingrese el nombre del titular: ";
	cin >> nTitular;
	
	while (sald<0)
	{
		cout << endl << "Ingresa el valor a saldo(mayor a cero): ";
		cin >> sald;
	}
		
	
	CuentaBancaria cuentaD (nCuenta, nTitular, sald);
	
	string resultado = "Nueva cuenta  creada\n Numero de cuenta : " + std::to_string(cuentaD.	getNumeroCuenta()) + "\n Nombre de cuenta: " + cuentaD.	getNombreTitular() + "\n Saldo de cuenta: " +std::to_string(cuentaD.getSaldo());// concatenar
	cout << endl << resultado;
	
	
	
	while(opcion!=0)
	{
		cout<< endl << "\n Que transaccion desea realizar? \n1. Deposito \n2.Retiro \n0. Salir \n Elija su opción: ";
		cin >> opcion;
		float mDeposito=-1;
		float mRetiro=-1;

		switch (opcion){
			case 1:
				
				while(mDeposito<=0)
				{
					cout << endl <<"Ingrese el monto a depositar(Mayor a cero): ";
					cin >> mDeposito;
				}
				cuentaD.depositar(mDeposito);
				cout <<"\n Su saldo actual es: " + std::to_string(cuentaD.getSaldo());
			break;
			
			
			case 2:
				float saldoactual;
				saldoactual = cuentaD.getSaldo();
				while(mRetiro<=0||mRetiro>saldoactual) 
				{
					cout << endl <<" Ingrese le monto a retirar(mayor a cero y menor o igual al saldo actual): ";
					cin >> mRetiro;
					
				}
				cuentaD.retirar(mRetiro);
				cout <<"\n Su saldo actual es: " + std::to_string(cuentaD.getSaldo());
				
			break;
				
			default:
				cuentaD.~CuentaBancaria();
			break;				
		}
		cout << "\n Desea hacer otra transaccion?: ";
		cin >> opcion;
		
	
		
	}
	return 0;
	
	

}




















