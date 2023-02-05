#ifndef DOCTOR_H
#define DOCTOR_H
#include "Trabajador.h"
class Doctor:public Trabajador{
public:
	Doctor(std::string,std::string,int,std::string,
		   int,std::string,std::string,
		   std::string,std::string); 
	Doctor();
	void setEspecialidad(std::string);
	void setGradoEsp(std::string);
	std::string getEspecialidad()const;
	std::string getGradoEsp()const;
	void ingresoDatos(Doctor*,int);
	void mostrarDatos(Doctor*,int);
	virtual void print()const override;
private:
	std::string especialidad,gradoDeEspecialidad;
};
#endif
