#include <string>
#include <iomanip>
#include "Persona.h"
#include "Paciente.h"

using namespace std;

Paciente::Paciente(std::string Nombre,std::string Apellido,int Edad,std::string Genero,
            int Peso, float Altura, std::string EnfermedadC)
: Persona(Nombre,Apellido,Edad,Genero),peso(Peso), altura(Altura), enfermedad_c(EnfermedadC)
{};
Paciente::Paciente(){};
void Paciente::setPeso(int nuevoPeso){
    peso=nuevoPeso;
}
void Paciente::setAltura(float nuevaAltura){
    altura=nuevaAltura;
}
void Paciente::setEnfermedadC(std::string nuevaEnfemerdadC){
    enfermedad_c=nuevaEnfemerdadC;
}

int Paciente::getPeso()const{
    return peso;
}
float Paciente::getAltura()const{
    return altura;
}
std::string Paciente::getEnfermedadC()const{
    return enfermedad_c;
}
void Paciente::print()const{
	std::cout <<static_cast<char>(186)<<setw(8)<<left<<getNombre()<<setw(4)<<""<<setw(8)<<left<<getApellido()
		<<setw(8)<<""<<setw(8)<<left<<getEdad()<<setw(4)<<""<<setw(6)<<left<<getGenero()
		<<setw(5)<<""<<setw(5)<<left<<getPeso()<<setw(4)<<""<<setw(5)<<left<<getAltura()
		<<setw(5)<<""<<setw(6)<<left<<getEnfermedadC()<<setw(5)<<right<<static_cast<char>(186)<< std::endl;
}
void Paciente::mostrarDatos(Paciente v[],int k)
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
		for(int i=0;i<=89;i++)	{
			if(i!=89)
				cout<<static_cast<char>(205);
			else{
				cout<<static_cast<char>(187);
				cout<<endl;}
		}
		cout <<static_cast<char>(186)<<setw(6)<<left<<"Nombre"<<setw(6)<<""<<setw(6)<<left<<"Apellido"
			<<setw(6)<<""<<setw(6)<<left<<"Edad"<<setw(4)<<""<<setw(4)<<left<<"Genero"
			<<setw(6)<<""<<setw(6)<<left<<"Peso"<<setw(6)<<""<<setw(6)<<left<<"Altura"
			<<setw(6)<<""<<setw(7)<<left<<"Padecimiento"<<setw(6)<<right<<static_cast<char>(186)<< endl;
		for(int i=0;i<k;i++)
			cout <<static_cast<char>(186)<<setw(11)<<left<<v[i].getNombre()<<setw(1)<<""<<setw(13)<<left<<v[i].getApellido()
			<<setw(1)<<""<<setw(9)<<left<<v[i].getEdad()<<setw(1)<<""<<setw(11)<<left<<v[i].getGenero()
			<<setw(1)<<""<<setw(11)<<left<<v[i].getPeso()<<setw(1)<<""<<setw(11)<<left<<v[i].getAltura()
			<<setw(1)<<""<<setw(17)<<left<<v[i].getEnfermedadC()<<setw(1)<<right<<static_cast<char>(186)<< endl;
		cout<<static_cast<char>(200);
		for(int i=0;i<=89;i++)	{
			if(i!=89)
				cout<<static_cast<char>(205);
			else{
				cout<<static_cast<char>(188);
				cout<<endl;}
		}
		system("pause");
	}
}
void Paciente::ingresoDatos(Paciente v[],int k){
	string nom,ap,gen,enfermedad;
	int edad,peso;
	float altura;
	std::system("CLS");
	std::cout << "Ingrese el nombre: "; std::cin >> nom;
	v[k].setNombre(nom);
	std::cout << "Ingrese el apellido: "; std::cin >>ap; 
	v[k].setApellido(ap);
	std::cout << "Ingrese la edad: "; std::cin >> edad;
	v[k].setEdad(edad);
	std::cout << "Ingrese el genero: "; std::cin >> gen;
	v[k].setGenero(gen);
	std::cout << "Ingrese peso: "; std::cin >> peso;
	v[k].setPeso(peso);
	std::cout << "Ingrese altura: "; std::cin >> altura;
	v[k].setAltura(altura);
	std::cout << "Ingrese padecimiento: "; std::cin >> enfermedad;
	v[k].setEnfermedadC(enfermedad);
	
	
	std::cout << std::endl;
	std::system("pause");
}
