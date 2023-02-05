#include <iostream>
#include "Persona.h"   

Persona::Persona(std::string Nombre,std::string Apellido,int Edad,std::string Genero)
:personaNombre(Nombre),personaApellido(Apellido),personaGenero(Genero){
if (Edad>1 && Edad<100)
	personaEdad=Edad;
}
Persona::Persona(){};
void Persona::setNombre(std::string Nombre){
	personaNombre=Nombre;
}
std::string Persona::getNombre()const{
		return personaNombre;
}
void Persona::setApellido(std::string Apellido){
	personaApellido=Apellido;
}
std::string Persona::getApellido()const{
	return personaApellido;
}
void Persona::setEdad(int Edad){
	personaEdad=Edad;
}
int Persona::getEdad()const{
	return personaEdad;
}
void Persona::setGenero(std::string Genero){
	personaGenero=Genero;
}
std::string Persona::getGenero()const{
	return personaGenero;
}
