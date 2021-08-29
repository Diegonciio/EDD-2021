#include <iostream>

using namespace std;

namespace Computadora {
	int x = 5;
	void printX() {
		//esta es una función
		std::cout << x << std::endl;

	}
}


namespace Telefono {
	int x=10;
	void printx() {
		//Esta es otra fucnioón en otro namespace
		std::cout << x << std::endl;
	}
}

int main () {
	cout << "Hola Mundo" << endl;
	Computadora::printX();
	Telefono::printx();


	return 0;
}
