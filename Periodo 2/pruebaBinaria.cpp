#include <iostream>
#include <array>
#include <string>
using namespace std;

int main()
{
	
	string franquicias[] = {
	"Assassin's Creed", "Battlefield", "Call of Duty",
	"Diablo", "Dragon Quest", "Fallout", "Final Fantasy",
	"Gran Turismo", "Grand Theft Auto", "Halo", "Just Dance",
	"Metal Gear", "Minecraft", "Need for Speed", "Resident Evil",
	"Star Wars", "Street Fighter", "Super Mario", "Super Smash Bros",
	"Tetris", "The Elder Scrolls", "The Legend of Zelda",
	"The Sims", "Tomb Raider", "Uncharted" };
	
	
	int inf =0;
	int sup =  25 - 1;
	int med;
	string valor="Tetris"; 
	int indice = -1, n=0;
	
	while (inf <= sup){
		n++;
		cout <<"Pase: #" << n << endl;
		cout << "inf: " << inf << " sup: " << sup;
		med = inf + (sup - inf)/2;
		cout << " med: " << med;
		if 		(valor < franquicias[med]) 
		{
			sup = med - 1;
			cout <<" Izquierda" << endl;
		}
		else if (valor > franquicias[med]) 
		{
			inf = med + 1;
			cout <<" Derecha" << endl <<endl << endl;
		}
		
		else {
			indice = med;
			break;
		}
		
	}
	
	cout << endl << endl  <<"El valor " << valor << " esta en el indice: " << indice << endl;
	
	return 0;
}
