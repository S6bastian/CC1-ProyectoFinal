#include <iostream>
#include <string>

class Trabajador{
public:
    Trabajador(int Sueldo,std::string Oficio,std::string Horario)
    : oficio{Oficio}, horario{Horario}{
        sueldo=Sueldo;
    }
    void setSueldo(int nuevoSueldo){
        sueldo=nuevoSueldo;
    }
    void setOficio(std::string nuevoOficio){
        oficio=nuevoOficio;
    }
    void setHorario(std::string nuevoHorario){
        horario=nuevoHorario;
    }
    int getSueldo(){
        return sueldo;
    }
    std::string getOficio(){
        return oficio;
    }
    std::string getHorario(){
        return horario;
    }
private:
    std::string oficio,horario;
    int sueldo;
};