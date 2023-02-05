#ifndef PERSONAL_H
#define PERSONAL_H
#include <iostream>
#include <string>
#include "Trabajador.h"

class Personal:public Trabajador{
public:
    Personal(std::string Nombre,std::string Apellido,int Edad,std::string Genero,int Sueldo,std::string Oficio,std::string Horario
			 ,std::string AreaDeTrabajo)
    :Trabajador(Nombre,Apellido,Edad,Genero,Sueldo,Oficio,Horario),areaDeTrabajo{AreaDeTrabajo}{};
    void setAreaDeTrabajo(std::string nuevaAreaDeTrabajo){
        areaDeTrabajo=nuevaAreaDeTrabajo;
    }
    std::string getAreaDeTrabajo(){
        return areaDeTrabajo;
    }
private:
    std::string areaDeTrabajo;
};
#endif
