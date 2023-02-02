#include "Persona.h"
#include "Trabajador.h"
#include "Doctor.h"
#include <vector>
#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;
Persona v[10];
int k=0;
int menu()
{
	system("CLS");
	int op;
	cout << endl;
	cout << "(1) Ingreso de datos.\n";
	cout << "(2) Visualizacion de datos.\n";	
	cout << "(3) Grabar datos.\n";
	cout << "(4) Leer datos.\n";
	cout << "(5) Salir.\n";
	cout << "Ingrese una opcion: "; cin >> op;
	return op;
}
void leerDatos()
{
	string filename("d:\\programitas\\Prueba\\Prueba.txt");
	fstream file;  
	
	file.open(filename, std::ios_base::in);
	if (file.is_open())
	{
		file >> k;
		for(int i=0;i<k;i++)
		{
			string nombre,apellido,genero;
			int edad;
			file>>nombre>>apellido>>edad>>genero;
			v[i].setNombre(nombre);
			v[i].setApellido(apellido);
			v[i].setEdad(edad);
			v[i].setGenero(genero);
		}
		cout << "\n Los datos se leyeron con exito \n";	
		system("pause");
	}
	else
	{
		cout << " \n!Error al leer el archivo. \n";
		system("pause");
	}
	file.close(); 
}
void ingresoDatos(){
	string nom,ap,gen;
	int edad;
	system("CLS");
	cout << "Ingrese el nombre: "; cin >> nom;
	v[k].setNombre(nom);
	cout << "Ingrese el apellido: "; cin >>ap; 
	v[k].setApellido(ap);
	cout << "Ingrese la edad: "; cin >> edad;
	v[k].setEdad(edad);
	cout << "Ingrese el genero: "; cin >> gen;
	v[k].setGenero(gen);
	cout << endl;
	k++;
	system("pause");
}
void grabarDatos()
{
	string filename("d:\\programitas\\Prueba\\Prueba.txt");
	fstream file;  
	
	file.open(filename, std::ios_base::out); 
	if (file.is_open())
	{
		file<<k<<endl;
		for(int i=0;i<k;i++)
		{
			file << v[i].getNombre() << " ";
			file << v[i].getApellido() << " ";
			file << v[i].getEdad() << " ";
			file << v[i].getGenero() << " ";
			file << endl;
		}
		cout << "\n Los datos se grabaron con exito \n";
		system("pause");
	}
	else{
		cout << " \n!Error al abrir el archivo. \n";
		system("pause");}
	file.close(); 		
}
void mostrarDatos()
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
		for(int i=0;i<=50;i++)	{
			if(i!=50)
				cout<<static_cast<char>(205);
			else{
				cout<<static_cast<char>(187);
				cout<<endl;}
		}
		cout <<static_cast<char>(186)<<setw(8)<<left<<"Nombre"<<setw(4)<<""<<setw(8)<<left<<"Apellido"<<setw(8)<<""<<setw(8)<<left<<"Edad"
			<<setw(4)<<""<<setw(6)<<left<<"Genero"<<setw(5)<<right<<static_cast<char>(186)<< endl;
		for(int i=0;i<k;i++)
			cout <<static_cast<char>(186)<<setw(8)<<left<<v[i].getNombre()<<setw(4)<<""<<setw(8)<<left<<v[i].getApellido()<<setw(8)<<""<<setw(8)<<left<<v[i].getEdad()
			<<setw(4)<<""<<setw(6)<<left<<v[i].getGenero()<<setw(5)<<right<<static_cast<char>(186)<< endl;
		cout<<static_cast<char>(200);
		for(int i=0;i<=60;i++)	{
			if(i!=50)
				cout<<static_cast<char>(205);
			else{
				cout<<static_cast<char>(188);
				cout<<endl;}
		}
		system("pause");
	}
}
int main() {
	int opc;
	int resp;
	for(;;){
		opc=menu();
		if(opc==5)
			break;
		else if(opc==1) 
		{
			ingresoDatos();
		}
		else if(opc==2)
		{
			mostrarDatos();	
		}
		else if(opc==3)
		{
			cout << "\nEsta seguro de grabar los datos...\n";
			cout << "(1) Si.\n";
			cout << "(2) No.\n";
			cout << "Respuesta: "; cin >> resp;
			if (resp==1)			
				grabarDatos();
		}		
		else if(opc==4)
		{
			cout << "\nEsta seguro de leer los datos...\n";
			cout << "(1) Si.\n";
			cout << "(2) No.\n";
			cout << "Respuesta: "; cin >> resp;
			if (resp==1)			
				leerDatos();
		}
	}	
}
	
	
