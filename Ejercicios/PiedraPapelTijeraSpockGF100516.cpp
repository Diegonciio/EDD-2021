#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	int movJug;
	
	
	cout <<"\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260 \n";
	
	
	
	cout << "Alumno:Diego Galdamez GF100516 \nJuguemos a piedra, papel o tijera, selecciona tu movimiento \n";
	cout <<"1.Piedra \n2.Papel \n3.Tijera \n4.Lagarto \n5.Spock: \n\n ";
	cin >> movJug;
	srand(time(0));
	string movComp;
	int numMov = rand () % 5 + 1;
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
		case 4:
			movComp = "Lagarto";
			break;
		case 5:
			movComp = "Spock";
			break;
			
	}
	cout <<"La computadora escogio: " << movComp << endl;
	if(movJug == numMov){
		cout <<"Empate";
	} else if( (movJug ==3)	&& (numMov == 2) ){
		cout <<"\2 Ganaste \2";
	} else if( (movJug ==2) && (numMov == 1) ) {
		cout <<"\2 Ganaste \2";
	} else if( (movJug ==1) && (numMov == 4) ){
		cout <<"\2 Ganaste \2";
	} else if( (movJug ==4) && (numMov == 5) ){
		cout <<"\2 Ganaste \2";
	} else if( (movJug ==5) && (numMov == 3) ){
		cout <<"\2 Ganaste \2";
	} else if( (movJug ==4) && (numMov == 2) ){
		cout <<"\2 Ganaste \2";
	} else if( (movJug ==2) && (numMov == 5) ){
		cout <<"\2 Ganaste \2";
	} else if( (movJug ==5) && (numMov == 1) ){
		cout <<"\2 Ganaste \2";
	} else if( (movJug ==1) && (numMov == 3) ){
		cout <<"\2 Ganaste \2";
	} else if( (movJug ==3) && (numMov == 4) ){
		cout <<"\2 Ganaste \2";
	} else{
		cout<<"\236 Perdiste \236";
	}
	
	cout << "\n";
	
	cout <<"\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260 \n";
	return 0;
	}

