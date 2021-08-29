#include <iostream>
#include <limits>

using namespace std;

int main()
{
	
	int imin = numeric_limits<int>::min(); // Valor m�nimor que puede tener un entero
	int imax = numeric_limits<int>::max(); // valor m�ximo que puede tener un entero

	cout << "imin = " << imin << endl;
	cout << "imax = " << imax << "\n";
	cout << "tamanio de int: " << sizeof(int) << endl;

	float fmin = std::numeric_limits<float>::min();
	float fmax = std::numeric_limits<float>::max();
	
	cout << "fmin = " << fmin << endl;
	cout << "fmax = " << fmax << "\n";
	cout << "tamanio de float: " << sizeof(float) << endl;		
	
	char cmin = numeric_limits<char>::min();
	char cmax = numeric_limits<char>::max();
	
	cout << "cmin = " << cmin << endl;
	cout << "cmax = " << cmax << "\n";
	cout << "tamanio de char: " << sizeof(char) << endl;		
	
	return 0;	
}



