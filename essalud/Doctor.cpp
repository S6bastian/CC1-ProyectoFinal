#include <iostream>
#include <string>
#include <iomanip>
#include "Trabajador.h"
#include "Doctor.h"

using namespace std;

Doctor::Doctor(std::string Nombre,std::string Apellido,int Edad,std::string Genero,
                int Sueldo,std::string Oficio,std::string Horario,
                std::string Especialidad,std::string GradoEsp) 
:Trabajador(Nombre,Apellido,Edad,Genero,Sueldo,Oficio,Horario),
	especialidad(Especialidad),gradoDeEspecialidad(GradoEsp){ 
}
Doctor::Doctor(){};
void Doctor::setEspecialidad(std::string nuevaEspecialidad){
    especialidad=nuevaEspecialidad;
}
void Doctor::setGradoEsp(std::string nuevoGradoEsp){
	gradoDeEspecialidad=nuevoGradoEsp;
}
std::string Doctor::getEspecialidad()const{
    return especialidad;
}
std::string Doctor::getGradoEsp()const{
	return gradoDeEspecialidad;
}
void Doctor::ingresoDatos(Doctor v[],int k){
	string nom,ap,gen,of,hora,esp,gradoesp;
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
	std::cout << "Ingrese sueldo: "; std::cin >> sueldo;
	v[k].setSueldo(sueldo);
	std::cout << "Ingrese Oficio: "; std::cin >> of;
	v[k].setOficio(of);
	std::cout << "Ingrese Horario: "; std::cin >> hora;
	v[k].setHorario(hora);
	std::cout << "Ingrese la especialidad del doctor: "; std::cin >> esp;
	v[k].setEspecialidad(esp);
	std::cout << "Ingrese el grado de especialidad del doctor: "; std::cin >> gradoesp;
	v[k].setGradoEsp(gradoesp);
	
	std::cout << std::endl;
	std::system("pause");
}
void Doctor::mostrarDatos(Doctor v[],int k)
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
		for(int i=0;i<=114;i++)	{
			if(i!=114)
				cout<<static_cast<char>(205);
			else{
				cout<<static_cast<char>(187);
				cout<<endl;}
		}
		cout <<static_cast<char>(186)<<setw(6)<<left<<"Nombre"<<setw(6)<<""<<setw(6)<<left<<"Apellido"
			<<setw(6)<<""<<setw(6)<<left<<"Edad"<<setw(4)<<""<<setw(4)<<left<<"Genero"
			<<setw(6)<<""<<setw(6)<<left<<"Sueldo"<<setw(6)<<""<<setw(6)<<left<<"Oficio"
			<<setw(6)<<""<<setw(6)<<left<<"Horario"<<setw(6)<<""<<setw(6)<<left<<"Especialidad"
			<<setw(6)<<""<<setw(6)<<left<<"Grado"<<setw(6)<<right<<static_cast<char>(186)<< endl;
		for(int i=0;i<k;i++)
			cout <<static_cast<char>(186)<<setw(11)<<left<<v[i].getNombre()<<setw(1)<<""<<setw(13)<<left<<v[i].getApellido()
			<<setw(1)<<""<<setw(9)<<left<<v[i].getEdad()<<setw(1)<<""<<setw(11)<<left<<v[i].getGenero()
			<<setw(1)<<""<<setw(11)<<left<<v[i].getSueldo()<<setw(1)<<""<<setw(11)<<left<<v[i].getOficio()
			<<setw(1)<<""<<setw(12)<<left<<v[i].getHorario()<<setw(1)<<""<<setw(17)<<left<<v[i].getEspecialidad()
			<<setw(1)<<""<<setw(11)<<left<<v[i].getGradoEsp()<<setw(1)<<right<<static_cast<char>(186)<< endl;
		cout<<static_cast<char>(200);
		for(int i=0;i<=114;i++)	{
			if(i!=114)
				cout<<static_cast<char>(205);
			else{
				cout<<static_cast<char>(188);
				cout<<endl;}
		}
		system("pause");
	}
}
void Doctor::print()const {
	std::cout <<static_cast<char>(186)<<setw(8)<<left<<getNombre()<<setw(4)<<""<<setw(8)<<left<<getApellido()
		<<setw(8)<<""<<setw(8)<<left<<getEdad()<<setw(4)<<""<<setw(6)<<left<<getGenero()
		<<setw(5)<<""<<setw(5)<<left<<getSueldo()<<setw(4)<<""<<setw(5)<<left<<getOficio()
		<<setw(5)<<""<<setw(6)<<left<<getHorario()<<setw(5)<<""<<setw(6)<<left<<getEspecialidad()
		<<setw(5)<<""<<setw(6)<<left<<getGradoEsp()<<setw(5)<<right<<static_cast<char>(186)<< std::endl;
}
