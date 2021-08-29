#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

//Prototipos
std::string generarMovimientoComputadora();
std::string obtenerMovimientoJugador();
void determinarGanador (std::string computadora, std::string jugador);
void procesarEntradaJugadorPiedra(std::string computadora);
void procesarEntradaJugadorPapel(std::string computadora);
void procesarEntradaJugadorTijera(std::string computadora);

int main(){
	using namespace std;
cout <<"\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260 \n";
	cout <<"Bienvenido Jugador!!" << endl <<"Este programa ha sido realizado por Diego Galdamez GF100516" <<endl<<endl;
	cout<< "Juguemos Piedra, Papel o Tijera!! \2  Escribe tu elecci\242n"<< endl;
	string movimientoComputadora;
	string movimientoJugador;
	
	movimientoJugador = obtenerMovimientoJugador();
	if(movimientoJugador == "Salir"){
		return 0;
	}
	else{
		
	movimientoComputadora = generarMovimientoComputadora();
	determinarGanador(movimientoComputadora, movimientoJugador);
	
	return 0;
	}
}

// Implementación
std::string generarMovimientoComputadora(){
	std::string movimiento;
	int numeroAleatorio;
	
	//Genero numero aleatorio
	srand(time(0));
	numeroAleatorio = rand() % 3 + 1;
	
	switch(numeroAleatorio)
	{
		case 1:
			movimiento = "Piedra";
			break;
		case 2:
			movimiento = "Papel";
			break;
		case 3:
			movimiento = "Tijera";
			break;
	}
	
	std::cout << "Computadora: " << movimiento << "\n";
	
	return movimiento;
}

std::string obtenerMovimientoJugador(){
	using namespace std;
	string movimiento;
	
	cout <<"Piedra, Papel o Tijera (para terminar el juego, escriba Salir)? ";
	cin >> movimiento;
	
	return movimiento;
}

void determinarGanador(std::string computadora, std::string jugador){
	if(computadora ==jugador ){
		std::cout << "Empate! \n";
	}
	else if(jugador == "Piedra"){
		procesarEntradaJugadorPiedra(computadora);
	}
	else if(jugador == "Papel"){
		procesarEntradaJugadorPapel(computadora);
	}
	else if(jugador == "Tijera"){
		procesarEntradaJugadorTijera(computadora);
	}
	else{
		std::cout << "Entrada no valida. Ingrese Piedra, Papel o Tijera. \n";
	}	
}

void procesarEntradaJugadorPiedra(std::string computadora){
	if(computadora == "Papel"){
		std::cout <<"La computadora gana. Papel cubre Piedra. \n";
	}
	else if(computadora == "Tijera"){
		std::cout <<"Usted Gana. Piedra rompe Tijera. \n";
	}
}

void procesarEntradaJugadorPapel(std::string computadora){
	if(computadora == "Tijera"){
		std::cout <<"La computadora gana. Tijera corta Papel. \n";
	}
	else if(computadora == "Piedra"){
		std::cout <<"Usted Gana. Papel cubre Piedra. \n";
	}
}

void procesarEntradaJugadorTijera(std::string computadora){
	if(computadora == "Piedra"){
		std::cout <<"La computadora gana. Piedra rompe Tijera. \n";
	}
	else if(computadora == "Papel"){
		std::cout <<"Usted Gana. Tijera corta Papel. \n";
	}
}

		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

