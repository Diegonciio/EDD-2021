
#include <iostream> // Entrada/salida
#include <array> // Arreglos
#include <cstdlib> // Random
#include <ctime> // Inicializar random
#include <cctype> // Funciones para caracteres
#include <string> // Funciones para cadenas

using namespace std;

/////////////////////////////////////////

class Personaje{
	
	public:
		//Constructor
	Personaje(string name, int pVida);
		//Destructor
	~Personaje();
	
	//Otros Metodos
	int recibirGolpe(int puntosPerdidos); 
	bool estaVivo();
	int comer(int puntosGanados);
	
	//Getters
	
	int getPuntosVida();
	string getNombre();
	
	//Setters
	
	void setPuntosVida(int pVida); /// para modificar los puntos de vida

	
	private:
	string nombre;
	int puntosVida;
		
};
/// Constructor
Personaje::Personaje(string name, int pVida){
	
	this->nombre = name;
	this->puntosVida = pVida;
	
}

// Destructor //////

Personaje::~Personaje(){}

//// Getters ///////
string Personaje::getNombre(){
	return this->nombre;
}

int Personaje::	getPuntosVida(){
	return this->puntosVida;
}

//// Setter ///////

void Personaje::setPuntosVida(int pVida){
	pVida= this->puntosVida;
}

///// Metodos /////

bool Personaje::estaVivo(){
	
	if(this->puntosVida>0)
	{
		return true;
	}
		return false;
}

int Personaje::recibirGolpe(int puntosPerdidos){
	
	this->puntosVida= this->puntosVida - puntosPerdidos;
	
}

int Personaje::comer(int puntosGanados){
	
	this->puntosVida = this->puntosVida + puntosGanados;
}


//////// Main ////////

int main(){
	
	int pVida =100;
	string name;
	int opcion;
	
	cout << "Bienvenido Jugador! \nIngrese el nombre de su personaje: ";
	cin >> name;
	
	Personaje player1 (name, pVida);
	
	cout << "\nSu personaje: " +player1.getNombre()+ "\nPuntos de vida actuales: " + std::to_string(player1.getPuntosVida());
	
	cout <<"\nQue desea hacer? \n 1. Golpear \n 2. Alimentar \n 0. Salir \n Elija una opicion: ";
	cin >> opcion;
	
	int danio=25;
	int comida=25;
	
	while(opcion>=1 && opcion<=2 || player1.estaVivo() )
	{
		switch(opcion)
		{
			case 1:
				
				player1.recibirGolpe(danio);
				break;
				
			case 2:
				
				player1.comer(comida);
				break;
			default:
				break;	
		}
		
		cout << "\n Puntos de vida restantes: " +std::to_string(player1.getPuntosVida());
		if(player1.estaVivo())
		{
			cout << "\n \nDesea hacer otra accion?: ";
		
		cin >> opcion;
		}
		else{
			cout << "\n Su personaje murio! :(";
			break;
		}
		
	}
	
	player1.~Personaje();
	
	return 0;
		
	
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
}






//////////////////////////////////////////////////


