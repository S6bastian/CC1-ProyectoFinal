#include<iostream>
#include<iomanip>
#include<string>
class Menu {
public:
	Menu(){};
	void limp(){
		system("CLS");
	}
	void displayBordeA(int tam){
		std::cout<<static_cast<char>(201);
		for(int i=0;i<=tam;i++)	{
			if(i!=tam)
				std::cout<<static_cast<char>(205);
			else{
			std::cout<<static_cast<char>(187);
			std::cout<<std::endl;}
		}
	}
	void displayBordeD(int tam){
		std::cout<<static_cast<char>(200);
		for(int i=0;i<=tam;i++)	{
			if(i!=tam)
				std::cout<<static_cast<char>(205);
			else{
				std::cout<<static_cast<char>(188);
				std::cout<<std::endl;}
		}
	}
	void displayInfo(int tam,std::string a){
		std::cout<<static_cast<char>(186)<<a<<std::setw(tam-a.length()+1)<<static_cast<char>(186)<<std::endl;		
	}
	void getOpc(int tam){
		int opc;
		std::cout<<"Ingrese una opcion:";std::cin>>opc;
		if(opc==1){
			limp();
			displayBordeA(tam);
			displayInfo(tam,"No hay pacientes registrados.");
			displayBordeD(tam);
			return;
		}
		else
		   return;
	}
	void displayMenu(int tam){
	displayBordeA(tam);
	displayInfo(tam,"Bienvenido");
	displayInfo(tam,"Seleccione una opcion:");
	displayInfo(tam,"1.Ver paciente");
	displayInfo(tam,"2.Salir");
	displayBordeD(tam);
	getOpc(tam);
	
	}
	
private:
	
};


