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
void procesarEntradaJugadorLagarto(std::string computadora);
void procesarEntradaJugadorSpock(std::string computadora);
void borde();

int main(){
	using namespace std;
    
    borde();
	cout <<"\nBienvenido Jugador!!" << endl <<"Este programa ha sido realizado por Diego Galdamez GF100516" <<endl<<endl;
	cout<< "Juguemos \ \nEscribe tu elecci\242n "<< endl;
	string movimientoComputadora;
	string movimientoJugador;
	
	movimientoJugador = obtenerMovimientoJugador();
	if(movimientoJugador == "Salir"|| movimientoJugador == "salir"){
		borde();
		return 0;
	}
	else{
		
	movimientoComputadora = generarMovimientoComputadora();
	determinarGanador(movimientoComputadora, movimientoJugador);
	borde();
	return 0;
	}
}

// Implementación
std::string generarMovimientoComputadora(){
	std::string movimiento;
	int numeroAleatorio;
	
	//Genero numero aleatorio
	srand(time(0));
	numeroAleatorio = rand() % 5 + 1;
	
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
		case 4:
			movimiento = "Lagarto";
			break;
		case 5:
			movimiento = "Spock";
			break;
	}
	
	std::cout << "\nComputadora eligi\242: " << movimiento << "\n \n";
	
	return movimiento;
}

std::string obtenerMovimientoJugador(){
	using namespace std;
	string movimiento;
	
	cout <<"Piedra, Papel, Tijera, Lagarto o Spock (para terminar el juego, escriba Salir):" <<endl<<"\20 ";
	cin >> movimiento;
	cout <<endl;
	
	return movimiento;
}

void determinarGanador(std::string computadora, std::string jugador){
	if(computadora ==jugador ){
		std::cout << "Empate! :O \n";
	}
	else if(jugador == "Piedra"|| jugador == "piedra"){
		procesarEntradaJugadorPiedra(computadora);
	}
	else if(jugador == "Papel"|| jugador == "papel"){
		procesarEntradaJugadorPapel(computadora);
	}
	else if(jugador == "Tijera"|| jugador == "tijera"){
		procesarEntradaJugadorTijera(computadora);
	}
	else if(jugador == "Lagarto"|| jugador == "lagarto"){
		procesarEntradaJugadorLagarto(computadora);
	}
	else if(jugador == "Spock"|| jugador == "spock"){
		procesarEntradaJugadorSpock(computadora);	
	}
	else{
		std::cout << "Entrada no valida. Ingrese Piedra, Papel, Tijera, Lagarto o Spock. \n";
	}	
}

////////////////////////////////////////////////////////////////////////
void procesarEntradaJugadorPiedra(std::string computadora){
	if(computadora == "Papel"){
		std::cout <<"\236 La computadora gana \236. Papel cubre Piedra. \n";
	}
	else if(computadora == "Spock"){
		std::cout <<"\236 La computadora gana \236. Spock desintegra Piedra. \n";
		}
	else if(computadora == "Tijera"){
		std::cout <<"Usted Gana!!. Piedra aplasta Tijera. \n";
	}
	else if(computadora == "Lagarto"){
		std::cout <<"Usted Gana!!. Piedra aplasta Lagarto. \n";
	}
}

///////////////////////////////////////////////////////////////////////
void procesarEntradaJugadorPapel(std::string computadora){
	if(computadora == "Tijera"){
		std::cout <<"\236 La computadora gana \236. Tijera corta Papel. \n";
	}
	else if(computadora == "Lagarto"){
		std::cout <<"\236 La computadora gana \236. Lagarto devora Papel. \n";
	}
	else if(computadora == "Piedra"){
		std::cout <<"Usted Gana!!. Papel cubre Piedra. \n";
	}
	else if(computadora == "Spock"){
		std::cout <<"Usted Gana!!. Papel desaprueba Spock. \n";
	}
}

////////////////////////////////////////////////////////////////////////
void procesarEntradaJugadorTijera(std::string computadora){
	if(computadora == "Piedra"){
		std::cout <<"\236 La computadora gana \236. Piedra aplasta Tijera. \n";
	}
	else if(computadora == "Spock"){
		std::cout <<"\236 La computadora gana \236. Spock aplasta Tijera. \n";
	}
	else if(computadora == "Papel"){
		std::cout <<"Usted Gana!!. Tijera corta Papel. \n";
	}
	else if(computadora == "Lagarto"){
		std::cout <<"Usted Gana!!. Tijera decapita Lagarto. \n";
	}
}

		
////////////////////////////////////////////////////////////////////////		
void procesarEntradaJugadorLagarto(std::string computadora){
	if(computadora == "Piedra"){
		std::cout <<"\236 La computadora gana \236. Piedra aplasta Lagarto. \n";
	}
	else if(computadora == "Tijera"){
		std::cout <<"\236 La computadora gana \236. Tijera decapita Lagarto. \n";
	}
	else if(computadora == "Spock"){
		std::cout <<"Usted Gana!!. Lagarto envenena Spock. \n";
	}
	else if(computadora == "Papel"){
		std::cout <<"Usted Gana!!. Lagarto devora Papel. \n";
	}
}
////////////////////////////////////////////////////////////////////////		
void procesarEntradaJugadorSpock(std::string computadora){
	if(computadora == "Lagarto"){
		std::cout <<"\236 La computadora gana \236. Lagarto envenena Spock. \n";
	}
	else if(computadora == "Papel"){
		std::cout <<"\236 La computadora gana \236. Papel desaprueba Spock. \n";
	}
	else if(computadora == "Tijera"){
		std::cout <<"Usted Gana!!. Spock aplasta Tijera. \n";
	}
	else if(computadora == "Piedra"){
		std::cout <<"Usted Gana!!. Spock desintegra Piedra. \n";
	}
}
		
void borde(){
	using namespace std;
	
	cout <<"\n\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260";
    cout <<"\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260";
    cout <<"\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260";
    cout <<"\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260";
    cout <<"\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260 \n";
    
}
		
		
		
		
		
		
		
		
		
		
		
		

