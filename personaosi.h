#include <iostream>
class personaosi {
public:
	personaosi(std::string Nombre,std::string Apellido,int Edad,std::string Genero)
		:personaNombre(Nombre),personaApellido(Apellido),personaGenero(Genero){
		if (Edad>1 && Edad<100)
			personaEdad=Edad;
	}
	void setNombre(std::string Nombre){
		personaNombre=Nombre;
	}
	std::string getNombre()const{
		return personaNombre;
	}
	void setApellido(std::string Apellido){
		personaApellido=Apellido;
	}
	std::string getApellido()const{
		return personaApellido;
	}
	void setEdad(int Edad){
		personaEdad=Edad;
	}
	int getEdad()const{
		return personaEdad;
	}
	void setGenero(std::string Genero){
		personaGenero=Genero;
	}
	std::string getGenero()const{
		return personaGenero;
	}
	void displayDatos(){
		std::cout<<getNombre()<<std::endl<<getApellido()<<std::endl<<getEdad()<<std::endl<<getGenero();
	}	
private:
	std::string personaNombre;
	std::string personaApellido;
	int personaEdad{1};
	std::string personaGenero;
};

