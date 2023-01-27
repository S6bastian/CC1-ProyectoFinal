#include <string>

class Paciente{
    public:
        Paciente(int Peso, float Altura, std::string EnfermedadC)
		: peso(Peso), altura(Altura), enfermedad_c(EnfermedadC)
		{};
        void setPeso(int nuevoPeso){
            peso=nuevoPeso;
        }
        void setAltura(float nuevaAltura){
            altura=nuevaAltura;
        }
        void setEnfermedadC(std::string nuevaEnfemerdadC){
            enfermedad_c=nuevaEnfemerdadC;
        }

        int getPeso(){
            return peso;
        }
        float getAltura(){
            return altura;
        }
        std::string getEnfermedadC(){
            return enfermedad_c;
        }
    private:
        int peso;
		float altura;
        std::string enfermedad_c;    
};
