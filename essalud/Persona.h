#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
class Persona {
public:
	Persona(std::string,std::string,int,std::string);
	Persona();
	void setNombre(std::string);
	std::string getNombre()const;
	void setApellido(std::string);
	std::string getApellido()const;
	void setEdad(int);
	int getEdad()const;
	void setGenero(std::string);
	std::string getGenero()const;
	virtual void print()const = 0;
private:
	std::string personaNombre;
	std::string personaApellido;
	unsigned int personaEdad{1};
	std::string personaGenero;
};

#endif
