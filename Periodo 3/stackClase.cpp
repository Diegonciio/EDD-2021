#include <iostream>
#include <stack>
using namespace std;
int main(){
	//Hciendo uso de la estructura stack == pila
	//Last In First Out - LIFO
	stack<int> s;
	s.push(10);
	s.push(11);
	s.push(12);
	s.push(13);
	s.push(14);
	s.push(15);
	s.push(16);
	s.push(17);
	s.push(18);
	s.push(19);
	s.push(20);
	cout<<"Tamanio de la pila o stack: " << s.size() << endl;
	cout<<"Parte superior o TOP del stack: "<<s.top() << endl;
	stack<int> s1;
	s1 = s;
	while(!s1.empty()){
		cout<<"Pop: " << s1.top()<<endl;
		s1.pop();
	}
	return 0;
}

//Diego Gald�mez GF100516

