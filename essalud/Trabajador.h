#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include <iostream>
#include <string>
#include "Persona.h"
class Trabajador:public Persona{
public:
	Trabajador(std::string,std::string ,int ,std::string ,
			   int ,std::string ,std::string );
	Trabajador();
	void setSueldo(int);
	void setOficio(std::string);
	void setHorario(std::string);
	int getSueldo()const;
	std::string getOficio()const;
	std::string getHorario()const;
	void ingresoDatos(Trabajador*,int);
	void mostrarDatos(Trabajador*,int);
	virtual void print() const override;
private:
	int sueldo{0};
	std::string oficio,horario;
};
#endif
