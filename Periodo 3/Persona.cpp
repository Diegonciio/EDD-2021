#include <iostream> // Entrada/salida
#include <array> // Arreglos
#include <cstdlib> // Random
#include <ctime> // Inicializar random
#include <cctype> // Funciones para caracteres
#include <string> // Funciones para cadenas
using namespace std;

///////////////////////////////////////////////////////////////////
class Persona{
	private :
		string nombre, apellido;
		int anioNacimiento;
	public:
		//Constructor
		Persona(string nombre,string apellido, int  anioNacimiento);
		//Setters
		void setNombre(string nombre);
		void setApellido(string apellido);
		void setAnioNacimiento(int anio);
		//Getters
		string getNombre();
		string getApellido();
		int getAnioNacimiento();
		//Other Methods
		string getNombreCompleto();
		int getEdad();
		//Destructor
		~Persona();
};
//Constructor
Persona :: Persona(string nombre, string apellido, int anioNacimiento){
	this->nombre = nombre;
	this->apellido = apellido;
	this->anioNacimiento = anioNacimiento;
}
//Dettructor
Persona :: ~Persona(){
}
//Setters
void Persona :: setNombre(string nombre){
	this->nombre = nombre;
}
void Persona :: setApellido(string apellido){
	this->apellido = apellido;
}
void Persona :: setAnioNacimiento(int anio){
	this->anioNacimiento = anio;
}
//Getters
string Persona::getNombre(){
	return this->nombre;
}
string Persona::getApellido(){
	return this->apellido;
}
int Persona::getAnioNacimiento(){
	return this->anioNacimiento;
}
//Other Methods
string Persona::getNombreCompleto(){
	return ""+this->getNombre()+" "+this->getApellido()+"";
}
int Persona::getEdad(){
	int edad;
	std::time_t tiempo_actual;
	tiempo_actual = std::time(nullptr);
	edad =  1970 + tiempo_actual / 31537970 - this->anioNacimiento; 
	return edad;
	
	}
	
///////////////////////////Main Funnction//////////////////////////////
int main (){
Persona myPerson("Diego","Galdamez",1997);
cout << myPerson.getNombreCompleto() << endl;
cout << myPerson.getEdad();
};



