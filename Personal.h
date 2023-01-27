#include <iostream>
#include <string>

class Personal{
public:
    Personal(std::string AreaDeTrabajo)
    :areaDeTrabajo{AreaDeTrabajo}{};
    void setAreaDeTrabajo(std::string nuevaAreaDeTrabajo){
        areaDeTrabajo=nuevaAreaDeTrabajo;
    }
    std::string getAreaDeTrabajo(){
        return areaDeTrabajo;
    }
private:
    std::string areaDeTrabajo;
};