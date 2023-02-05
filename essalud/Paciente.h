#ifndef PACIENTE_H
#define PACIENTE_H
#include <string>
#include "Persona.h"
class Paciente:public Persona{
    public:
        Paciente(std::string ,std::string,int ,std::string,
				 int , float , std::string);
		Paciente();
        void setPeso(int);
        void setAltura(float nuevaAltura);
        void setEnfermedadC(std::string nuevaEnfemerdadC);
        int getPeso()const;
        float getAltura()const;
        std::string getEnfermedadC()const;
		void ingresoDatos(Paciente*,int);
		void mostrarDatos(Paciente*,int);
		virtual void print() const override;
    private:
        int peso;
		float altura;
        std::string enfermedad_c;    
};
#endif
