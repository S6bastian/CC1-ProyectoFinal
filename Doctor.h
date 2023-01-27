#include <iostream>
#include <string>

class Doctor{
public:
    Doctor(std::string Especialidad, std::string GradoDeEspecialidad, int AñosDeExp)
    :especialidad{Especialidad},gradoDeEspecialidad{GradoDeEspecialidad}{
        añosDeExp=AñosDeExp;
    }
    void setEspecialidad(std::string nuevaEspecialidad){
        especialidad=nuevaEspecialidad;
    }
    void setGradoDeEspecialidad(std::string nuevoGradoDeEspecialidad){
        gradoDeEspecialidad=nuevoGradoDeEspecialidad;
    }
    void setAñosDeExp(int nuevoAñosDeExp){
        añosDeExp=nuevoAñosDeExp;
    }
    std::string getEspecialidad(){
        return especialidad;
    }
    std::string getGradoDeEspecialidad(){
        return  gradoDeEspecialidad;
    }
    int getAñosDeExp(){
        return añosDeExp;
    }
private:
    std::string especialidad,gradoDeEspecialidad;
    int añosDeExp;
};