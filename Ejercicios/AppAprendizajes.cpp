#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>

//Portotipos
int obtenerOpc();
//Prototipos para triangulo
void calculoTriangulo();
float obtenerLado(int i);
float calculoAreaT(float l1, float l2, float l3);
//Prototipos para calcular número mayor
void calculoMayor();
//Prototipos para calcular pormedios de x números
void calculoPromedio();

void borde();

//////////////////////////////////////////////////////////////////////////
int main()
{
	using namespace std;
	borde();
	cout << "Bienvenido Usuario! Te saluda Diego Gald\240mez GF100516 \2"<< endl;
		int opc = obtenerOpc();
	
	switch(opc){
		case 1:
			calculoTriangulo();
			break;
		case 2:
			calculoMayor();
			break;
		case 3:
			calculoPromedio();
			break;
	}
	return 0;
}
////////////////////////////////////////////////////////////////////////////

int obtenerOpc(){		
	using namespace std;
	int opcion;
	
	do{
		cout <<"Eliga un proceso a realizar:\n" ;
	cout <<"1.\265rea de un tri\240ngulo \n2.N\243mero mayor \n3.Promedio de n\243meros \n\n\20 " ;
	
	cin >> opcion;
		
	}
	while(!(opcion >0 && opcion <=3));
			
	return opcion;
}
///////////////////////////////////////////////////////////////////////////

void calculoTriangulo(){
	using namespace std;
	int i=1;
	float lado1, lado2, lado3, area;
	string tipo;
	borde();
	cout << "C\240lculo de \265rea y Tipo de Tri\240ngulo \36\n\n";
	lado1= obtenerLado(i);
	i++;
	lado2= obtenerLado(i);
	i++;
	lado3= obtenerLado(i);
	
	area = calculoAreaT(lado1, lado2, lado3);
	if(!(area>=0))
	{
		cout << "\nEste tri\240ngulo no existe... \n";
	}
	else
	{
		i=1;
		if(lado1 == lado2 && lado2 == lado3){
					tipo="Equilatero";
		}
		else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
			tipo="Isosceles";
		}
		else{
			tipo="Escaleno";
		}
	
		cout <<"\nEl tri\240ngulo es: " << tipo << endl;
		cout << "\n\265rea es: " << area << endl;
	}
	borde();

}
//////////////////////////////////////////////////////////////////////////

float obtenerLado(int i){
	using namespace std;
	float lado;
	
	cout <<"Ingresa el lado " << i << ": ";
	cin >> lado;
	
	while (lado<=0)
	{
	cout <<"\n \nError, favor ingresar un valor válido, ingresan nuevamente el lado " << i << ": ";
	cin >> lado;
	}
	return lado;
}

//////////////////////////////////////////////////////////////////////////////
float calculoAreaT(float l1, float l2, float l3){
	using namespace std;
	float a,p,s;	// Utilizaremos la formula de Herón
	
	p= l1 + l2 + l3;	//Calcularemos el perimetro
	s= p/2; 			//calculamos el semiperimtreo
	
	a= sqrt((s*(s-l1)*(s-l2)*(s-l3))); // fórmula de heron
	
	return a;	
}

////////////////////////////////////////////////////////////////////////////////
void calculoMayor(){
	using namespace std;
	int x1, x2, x3, x4, x5, mayor;
	borde();
	cout<<"Determinar N\243mero Mayor \30\n";
	cout <<"Ingrese 5 n\243meros: \n\20 ";
	cin >> x1;
	cout <<"\20 ";
	cin >> x2;
	cout <<"\20 ";
	cin >> x3;
	cout <<"\20 ";
	cin >> x4;
	cout <<"\20 ";
	cin >> x5;
	
	if(x1>x2){
		mayor=x1;
	}else{
		mayor=x2;
	}
	if(x3>mayor){
		mayor=x3;
	} 
	if(x4>mayor){
		mayor=x4;
	}
	if(x5>mayor){
		mayor=x5;
	}
	cout<<"\nEl n\243mero mayor es: \32  " << mayor << endl;
	borde();
}
////////////////////////////////////////////////////////////////////////////////
void calculoPromedio(){
	using namespace std;
	
	float x;
	int i=0;
	float suma=0;
	float promedio;
	borde();
	cout <<"C\240culo de Promedio \376"<< endl;
	cout<<"\nIngrese n\243mero para calcular promedio, escriba 0 para terminar de ingresar"<<endl;
	do{
		cout <<"\20 ";
		cin >> x;
		suma=suma+x;
		i++;
		}while(!(x==0));
	
	promedio=suma/(i-1);
	cout <<"\nIngresaste: " << i-1 << " n\243meros";
	cout<<"\nEl Promedio es: " << promedio << endl;
	borde();
}
////////////////////////////////////////////////////////////////////////////////
void borde(){
	using namespace std;
	
	cout <<"\n\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260";
    cout <<"\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260";
    cout <<"\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260";
    cout <<"\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260";
    cout <<"\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260 \n";
 }
