#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	int movJug;
	
	
	cout <<"\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260 \n";
	
	
	
	cout << "Alumno:Diego Galdamez GF100516 \nJuguemos a piedra, papel o tijera, selecciona tu movimiento \n";
	cout <<"1.Piedra \n2.Papel \n3.Tijera \n: ";
	cin >> movJug;
	srand(time(0));
	string movComp;
	int numMov = rand () % 3 + 1;
	switch(numMov){
		case 1:
			movComp = "Piedra";
			break;
		case 2:
			movComp = "Papel";
			break;
		case 3:
			movComp = "Tijera";
			break;
			
	}
	cout <<"La computadora escogio: " << movComp << endl;
	if(movJug == numMov){
		cout <<"Empate \n";
	} else if( (movJug ==1)	&& (numMov == 3) ){
		cout <<"Ganaste \n";
	} else if( (movJug ==2) && (numMov == 1) ) {
		cout <<"Ganaste \n";
	} else if( (movJug ==3) && (numMov == 2) ){
		cout <<"Ganaste \n";
	} else{
		cout<<"Perdiste \n";
	}
	
	cout << "!!!"	
	
	cout <<"\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260 \n";
	return 0;
	}

