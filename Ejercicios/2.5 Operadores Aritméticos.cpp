#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	int x = 5;
	
	cout << x << ";" << "\t" << bitset<8>(x) << endl;
	cout << "3:" << "\t" << bitset<8>(3) << endl;
	cout << x << " AND 3 ( & ) = \n";
	
	
	
	
	return 0;
}
