#include<iostream> //Diego Galdámez GF100516
#include<stack>

using namespace std;

void imprimir(stack<double> mystack){
	stack <double> segundaPila = mystack;
	cout<< "_TOP_" <<endl;
	while(!segundaPila.empty()){
		cout << "|" <<segundaPila.top()<<"|"<<endl;
		segundaPila.pop();
	}
	cout << "_BOT_" << endl << endl;
}

int main(){
	
	stack <double> mystack;
	
	mystack.push(12);
	imprimir(mystack);
	mystack.push(25);
	imprimir(mystack);
	mystack.push(78);
	imprimir(mystack);
	mystack.push(14);
	imprimir(mystack);
	mystack.push(95);
	imprimir(mystack);
	mystack.push(85);
	imprimir(mystack);
	mystack.push(13);
	imprimir(mystack);
	mystack.push(24);
	imprimir(mystack);
	mystack.push(35);
	imprimir(mystack);
	
	cout <<"Tamanio de la pila: ";
	cout << mystack.size() << endl;
	
	cout << " *** inicia proceso de extracion: ***" << endl;
	
	while(!mystack.empty()){
		imprimir(mystack);
		mystack.pop();
	}
	return 0;
}
