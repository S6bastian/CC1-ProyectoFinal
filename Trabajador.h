#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include <iostream>
#include <string>
#include "personaosi.h"
class Trabajador:public Persona{
public:
    Trabajador(std::string Nombre,std::string Apellido,int Edad,std::string Genero,int Sueldo,std::string Oficio,std::string Horario)
	:Persona(Nombre,Apellido,Edad,Genero),sueldo(Sueldo),oficio(Oficio), horario(Horario){}
    void setSueldo(int nuevoSueldo){
        sueldo=nuevoSueldo;
    }
    void setOficio(std::string nuevoOficio){
        oficio=nuevoOficio;
    }
    void setHorario(std::string nuevoHorario){
        horario=nuevoHorario;
    }
    int getSueldo()const{
        return sueldo;
    }
    std::string getOficio()const{
        return oficio;
    }
    std::string getHorario()const{
        return horario;
    }
private:
	int sueldo{0};
    std::string oficio,horario;
};
#endif
