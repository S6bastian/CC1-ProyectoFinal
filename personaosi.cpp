#include "personaosi.h"
#include "Trabajador.h"
#include "Menu.h"
#include "Doctor.h"
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	string nom,ap,gen;
	int edad,k{0};
	Trabajador roro("RORO","OSI",17,"MUJER",900,"NOSE","8 a 9");
	roro.displayDatos();
	cout<<endl;
	Doctor wasa("antoni","Ono",17,"onvre",2190,"sise","8 a 9","cardio","bachiller",18);
	wasa.displayDatos();
	cout<<endl;
	Persona v[10];
	cout << "Ingrese el nombre: "; cin >> nom;
	v[k].setNombre(nom);
	cout << "Ingrese el apellido: "; cin >>ap; 
	v[k].setApellido(ap);
	cout << "Ingrese la edad: "; cin >> edad;
	v[k].setEdad(edad);
	cout << "Ingrese el genero: "; cin >> gen;
	v[k].setGenero(gen);
	cout << endl;
	
	//Aqui tienen que crear en un disco de su PC (C o D) un bloc de notas o un archivo txt.
	//Cuando lo hayan creado, pongan la direccion de ese archivo y listo xd. 
	//pa comprobar, corren el programa normal y cuando se acabe van a revisar el txt y listo.
	//reciben "K" porque taba pensando en hacerlo bucle pa guardar mas datos d personas xd.
	string filename("d:\\programitas\\Prueba\\Prueba.txt");//Aca ponen la direccion del archivo txt.
	fstream file;  
	
	file.open(filename, std::ios_base::out); 
	if (file.is_open())
	{
		file << k << endl;
		for(int i=0;i<=k;i++)
		{
			file << v[i].getNombre() << " ";
			file << v[i].getApellido() << " ";
			file << v[i].getEdad() << " ";
			file << v[i].getGenero() << " ";
			cout << endl;
		}
		cout << "\n Los datos se grabaron con exito \n";	
	}
	else
	{
		cout << " \n!Error al abrir el archivo. \n";
	}
	file.close(); 
	
	
}

