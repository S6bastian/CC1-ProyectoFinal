#ifndef DOCTOR_H
#define DOCTOR_H
#include <iostream>
#include <string>
#include "Trabajador.h"
class Doctor:public Trabajador{
public:
    Doctor(std::string Nombre,std::string Apellido,int Edad,std::string Genero,int Sueldo,std::string Oficio,std::string Horario,
		   std::string Especialidad, std::string GradoDeEspecialidad, int AniosDeExp)
    :Trabajador(Nombre,Apellido,Edad,Genero,Sueldo,Oficio,Horario),especialidad{Especialidad},gradoDeEspecialidad{GradoDeEspecialidad}{
        aniosDeExp=AniosDeExp;
    }
    void setEspecialidad(std::string nuevaEspecialidad){
        especialidad=nuevaEspecialidad;
    }
    void setGradoDeEspecialidad(std::string nuevoGradoDeEspecialidad){
        gradoDeEspecialidad=nuevoGradoDeEspecialidad;
    }
    void setAniosDeExp(int nuevoAniosDeExp){
        aniosDeExp=nuevoAniosDeExp;
    }
    std::string getEspecialidad(){
        return especialidad;
    }
    std::string getGradoDeEspecialidad(){
        return  gradoDeEspecialidad;
    }
    int getAniosDeExp(){
        return aniosDeExp;
    }
private:
    std::string especialidad,gradoDeEspecialidad;
    unsigned int aniosDeExp;
};
#endif
