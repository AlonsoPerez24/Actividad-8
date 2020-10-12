#include <iostream>

using namespace std;

class Computadora{
    int ram;
    int almacenamiento;
    string sistemaOperativo;
    string usuario;
public:
    Computadora::Computadora();
    Computadora::Computadora(int ram, int almacenamiento, string sistemaOperativo, string usuario);
    int getRam();
    int getAlmacenamiento();
    string getSistemaOperativo();
    string getUsuario();

    void setRam(int ram);
    void setAlmacenamiento(int almacenamiento);
    void setSistemaOperativo(string sistemaOperativo);
    void setUsuario(string usuario);
};

Computadora::Computadora(){};
Computadora::Computadora(int ram, int almacenamiento, string sistemaOperativo, string usuario){
    this->ram=ram;
    this->almacenamiento=almacenamiento;
    this->sistemaOperativo=sistemaOperativo;
    this->usuario=usuario;
};

int Computadora::getRam(){
    return ram;
};
int Computadora::getAlmacenamiento(){
    return almacenamiento;
};
string Computadora::getSistemaOperativo(){
    return sistemaOperativo;
};
string Computadora::getUsuario(){
    return usuario;
};

void Computadora::setRam(int ram){
    this->ram=ram;
};
void Computadora::setAlmacenamiento(int almacenamiento){
    this->almacenamiento=almacenamiento;
};
void Computadora::setSistemaOperativo(string sistemaOperativo){
    this->sistemaOperativo=sistemaOperativo;
};
void Computadora::setUsuario(string usuario){
    this->usuario=usuario;
};

int main(){

    return 0;
}