#include<iostream>

class fecha {
public:
	fecha(int mes, int anio, int dia)
	: Anio(anio),Dia(dia)
	{
		if (mes>=1 && mes<=12){
			Mes=mes;
		}
	}
	void setMes(int mes){
		Mes=mes;
	}
	void setDia(int dia){
		Dia=dia;
	}
	void setAnio(int anio){
		Anio=anio;
	}
	int getDia()const{
		return Dia;
	}
	int getMes()const{
		return Mes;
	}
	int getAnio()const{
		return Anio;
	}
	void displayDate(){
		std::cout<<Dia<<"/"<<Mes<<"/"<<Anio;
	}
private:
	int Mes{1};
	int Anio;
	int Dia;
};


