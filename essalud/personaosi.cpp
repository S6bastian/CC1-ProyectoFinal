#include "Persona.h"
#include "Trabajador.h"
#include "Paciente.h"
#include "Doctor.h"
#include <vector>
#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;
Doctor D[10];
Paciente v[10];
Trabajador T[10];
int k{0},d{0},t{0};
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
int menuMos()
{
	int op;
	cout<<endl;
	cout<<"Seleccione datos a mostrar. \n";
	cout<<"(1) Doctor"<<endl;
	cout<<"(2) Paciente"<<endl;
	cout<<"(3) Trabajador"<<endl;
	cout<<"(4) Salir"<<endl;
	cout<<"Ingrese una opcion:";
	cin>>op;
	return op;
}
int menuIng()
{
	int op;
	cout<<endl;
	cout<<"Seleccione lo que deseea ingresar. \n";
	cout<<"(1) Doctor"<<endl;
	cout<<"(2) Paciente"<<endl;
	cout<<"(3) Trabajador"<<endl;
	cout<<"(4) Salir"<<endl;
	cout<<"Ingrese una opcion:";
	cin>>op;
	return op;
}
void leerDatos()
{
	string filenameP("d:\\programitas\\Prueba\\Pacientes.txt");
	fstream fileP;  
	
	fileP.open(filenameP, std::ios_base::in);
	if (fileP.is_open())
	{
		fileP >> k;
		for(int i=0;i<k;i++)
		{
			string nombre,apellido,genero,enfermedad;
			int edad,peso;
			float altura;
			fileP>>nombre>>apellido>>edad>>genero>>peso>>altura>>enfermedad;
			v[i].setNombre(nombre);
			v[i].setApellido(apellido);
			v[i].setEdad(edad);
			v[i].setGenero(genero);
			v[i].setPeso(peso);
			v[i].setAltura(altura);
			v[i].setEnfermedadC(enfermedad);
		}
		cout << "\n Los datos de los pacientes se leyeron con exito \n";
		system("pause");
	}
	else
	{
		cout << " \n!Error al leer el archivo. \n";
		system("pause");
	}
	fileP.close();
	string filenameD("d:\\programitas\\Prueba\\Doctores.txt");
	fstream fileD;  
	
	fileD.open(filenameD, std::ios_base::in);
	if (fileD.is_open())
	{
		fileD >> d;
		for(int i=0;i<k;i++)
		{
			string nombre,apellido,genero,oficio,horario,especialidad,grado;
			int edad,sueldo;
			fileD>>nombre>>apellido>>edad>>genero>>sueldo>>oficio>>horario>>especialidad>>grado;
			D[i].setNombre(nombre);
			D[i].setApellido(apellido);
			D[i].setEdad(edad);
			D[i].setGenero(genero);
			D[i].setSueldo(sueldo);
			D[i].setOficio(oficio);
			D[i].setHorario(horario);
			D[i].setEspecialidad(especialidad);
			D[i].setGradoEsp(grado);
		}
		cout << "\n Los datos de los doctores se leyeron con exito \n";
		system("pause");
	}
	else
	{
		cout << " \n!Error al leer el archivo. \n";
		system("pause");
	}
	fileD.close();
	string filenameT("d:\\programitas\\Prueba\\Trabajadores.txt");
	fstream fileT;  
	
	fileT.open(filenameT, std::ios_base::in);
	if (fileT.is_open())
	{
		fileT >> t;
		for(int i=0;i<k;i++)
		{
			string nombre,apellido,genero,oficio,horario;
			int edad,sueldo;
			fileT>>nombre>>apellido>>edad>>genero>>sueldo>>oficio>>horario;
			T[i].setNombre(nombre);
			T[i].setApellido(apellido);
			T[i].setEdad(edad);
			T[i].setGenero(genero);
			T[i].setSueldo(sueldo);
			T[i].setOficio(oficio);
			T[i].setHorario(horario);
		}
		cout << "\n Los datos de los trabajadores se leyeron con exito \n";	
		system("pause");
	}
	else
	{
		cout << " \n!Error al leer el archivo. \n";
		system("pause");
	}
	fileT.close();
}
void grabarDatos()
{
	string filenameP("d:\\programitas\\Prueba\\Pacientes.txt");
	fstream fileP;  
	
	fileP.open(filenameP, std::ios_base::out); 
	if (fileP.is_open())
	{
		fileP<<k<<endl;
		for(int i=0;i<k;i++)
		{
			fileP << v[i].getNombre() << " ";
			fileP << v[i].getApellido() << " ";
			fileP << v[i].getEdad() << " ";
			fileP << v[i].getGenero() << " ";
			fileP << v[i].getPeso() << " ";
			fileP << v[i].getAltura() << " ";
			fileP << v[i].getEnfermedadC() << " ";
			fileP << endl;
		}
		cout << "\n Los datos de los pacientes grabaron con exito \n";
		system("pause");
	}
	else{
		cout << " \n!Error al abrir el archivo. \n";
		system("pause");}
	fileP.close();
	string filenameD("d:\\programitas\\Prueba\\Doctores.txt");
	fstream fileD;  
	
	fileD.open(filenameD, std::ios_base::out); 
	if (fileD.is_open())
	{
		fileD<<d<<endl;
		for(int i=0;i<d;i++)
		{
			fileD << D[i].getNombre() << " ";
			fileD << D[i].getApellido() << " ";
			fileD << D[i].getEdad() << " ";
			fileD << D[i].getGenero() << " ";
			fileD << D[i].getSueldo() << " ";
			fileD << D[i].getOficio() << " ";
			fileD << D[i].getHorario() << " ";
			fileD << D[i].getEspecialidad() << " ";
			fileD << D[i].getGradoEsp() << " ";
			fileD << endl;
		}
		cout << "\n Los datos de los doctores se grabaron con exito \n";
		system("pause");
	}
	else{
		cout << " \n!Error al abrir el archivo. \n";
		system("pause");
	}
	fileD.close(); 		
	string filenameT("d:\\programitas\\Prueba\\Trabajadores.txt");
	fstream fileT;  
	
	fileT.open(filenameT, std::ios_base::out); 
	if (fileT.is_open())
	{
		fileT<<t<<endl;
		for(int i=0;i<t;i++)
		{
			fileT << T[i].getNombre() << " ";
			fileT << T[i].getApellido() << " ";
			fileT << T[i].getEdad() << " ";
			fileT << T[i].getGenero() << " ";
			fileT << T[i].getSueldo() << " ";
			fileT << T[i].getOficio() << " ";
			fileT << T[i].getHorario() << " ";
			fileT << endl;
		}
		cout << "\n Los datos de los trabajadores se grabaron con exito \n";
		system("pause");
	}
	else{
		cout << " \n!Error al abrir el archivo. \n";
		system("pause");}
	fileT.close(); 		
}
int main() {
	int opm;
	int resp;
	for(;;){
		opm=menu();
		if(opm==5)
			break;
		else if(opm==1) 
		{
			int oping=menuIng();
			if(oping==1){
				Doctor doc;
				doc.ingresoDatos(D,d);
				d++;
			}
			else if(oping==2){
				Paciente pac;
				pac.ingresoDatos(v,k); 
				k++;
			}
			else if(oping==3){
				Trabajador tra;
				tra.ingresoDatos(T,t);
				t++;
			}
			else{
				continue;
			}
		}
		else if(opm==2)
		{
			int opmos=menuMos();
			if(opmos==1){
				Doctor docm;
				docm.mostrarDatos(D,d);
			}
			else if(opmos==2){
				Paciente pacm;
				pacm.mostrarDatos(v,k);
			}
			else if(opmos==3){
				Trabajador tram;
				tram.mostrarDatos(T,t);
			}
			else{
				continue;
			}
		}
		else if(opm==3)
		{
			cout << "\nEsta seguro de grabar los datos...\n";
			cout << "(1) Si.\n";
			cout << "(2) No.\n";
			cout << "Respuesta: "; cin >> resp;
			if (resp==1)			
				grabarDatos();
		}		
		else if(opm==4)
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
	
	
