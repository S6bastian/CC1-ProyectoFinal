#include <iostream>
#include <string>
#include <iomanip>
#include "Persona.h"
#include "Trabajador.h"

using namespace std;

Trabajador::Trabajador(std::string Nombre,std::string Apellido,int Edad,
						std::string Genero,int Sueldo,std::string Oficio,
						std::string Horario)
:Persona(Nombre,Apellido,Edad,Genero),sueldo(Sueldo),oficio(Oficio),horario(Horario){}
Trabajador::Trabajador(){};
void Trabajador::setSueldo(int nuevoSueldo){
	sueldo=nuevoSueldo;
}
void Trabajador::setOficio(std::string nuevoOficio){
	oficio=nuevoOficio;
}
void Trabajador::setHorario(std::string nuevoHorario){
	horario=nuevoHorario;
}
int Trabajador::getSueldo()const{
	return sueldo;
}
std::string Trabajador::getOficio()const{
	return oficio;
}
std::string Trabajador::getHorario()const{
	return horario;
}
void Trabajador::ingresoDatos(Trabajador v[],int k){
	string nom,ap,gen,of,hora;
	int edad,sueldo;
	std::system("CLS");
	std::cout << "Ingrese el nombre: "; std::cin >> nom;
	v[k].setNombre(nom);
	std::cout << "Ingrese el apellido: "; std::cin >>ap; 
	v[k].setApellido(ap);
	std::cout << "Ingrese la edad: "; std::cin >> edad;
	v[k].setEdad(edad);
	std::cout << "Ingrese el genero: "; std::cin >> gen;
	v[k].setGenero(gen);
	std::cout << "Ingrese Oficio: "; std::cin >> of;
	v[k].setOficio(of);
	std::cout << "Ingrese Horario: "; std::cin >> hora;
	v[k].setHorario(hora);
	std::cout << "Ingrese sueldo: "; std::cin >> sueldo;
	v[k].setSueldo(sueldo);
	
	std::cout << std::endl;
	std::system("pause");
}
void Trabajador::mostrarDatos(Trabajador v[],int k)
{
	if (k==0)
	{
		system("CLS");
		cout << endl;
		cout << "No existen datos !!!\n";
		cout << endl;
		system("pause");
	}
	else
	{
		system("CLS");
		cout<<static_cast<char>(201);
		for(int i=0;i<=84;i++)	{
			if(i!=84)
				cout<<static_cast<char>(205);
			else{
				cout<<static_cast<char>(187);
				cout<<endl;}
		}
		cout <<static_cast<char>(186)<<setw(6)<<left<<"Nombre"<<setw(6)<<""<<setw(6)<<left<<"Apellido"
			<<setw(6)<<""<<setw(6)<<left<<"Edad"<<setw(4)<<""<<setw(4)<<left<<"Genero"
			<<setw(6)<<""<<setw(6)<<left<<"Sueldo"<<setw(6)<<""<<setw(6)<<left<<"Oficio"
			<<setw(6)<<""<<setw(6)<<left<<"Horario"<<setw(6)<<right<<static_cast<char>(186)<< endl;
		for(int i=0;i<k;i++)
			cout <<static_cast<char>(186)<<setw(11)<<left<<v[i].getNombre()<<setw(1)<<""<<setw(13)<<left<<v[i].getApellido()
			<<setw(1)<<""<<setw(9)<<left<<v[i].getEdad()<<setw(1)<<""<<setw(11)<<left<<v[i].getGenero()
			<<setw(1)<<""<<setw(11)<<left<<v[i].getSueldo()<<setw(1)<<""<<setw(11)<<left<<v[i].getOficio()
			<<setw(1)<<""<<setw(12)<<left<<v[i].getHorario()<<setw(1)<<right<<static_cast<char>(186)<< endl;
		cout<<static_cast<char>(200);
		for(int i=0;i<=84;i++)	{
			if(i!=84)
				cout<<static_cast<char>(205);
			else{
				cout<<static_cast<char>(188);
				cout<<endl;}
		}
		system("pause");
	}
}
void Trabajador::print()const{
	std::cout <<static_cast<char>(186)<<setw(8)<<left<<getNombre()<<setw(4)<<""<<setw(8)<<left<<getApellido()
		<<setw(8)<<""<<setw(8)<<left<<getEdad()<<setw(4)<<""<<setw(6)<<left<<getGenero()
		<<setw(5)<<""<<setw(5)<<left<<getSueldo()<<setw(4)<<""<<setw(5)<<left<<getOficio()
		<<setw(5)<<""<<setw(6)<<left<<getHorario()<<setw(5)<<right<<static_cast<char>(186)<< std::endl;
}
