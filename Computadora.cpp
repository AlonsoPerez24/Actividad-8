#include "Computadora.h"

Computadora(int ram, int almacenamiento, std::string sistemaOperativo, std::string usuario){
    this->ram=ram;
    this->almacenamiento=almacenamiento;
    this->sistemaOperativo=sistemaOperativo;
    this->usuario=usuario;
};

Computadora();

int Computadora::getRam(){
    return ram;
};
int Computadora::getAlmacenamiento(){
    return almacenamiento;
};
std::string Computadora::getSistemaOperativo(){
    return sistemaOperativo;
};
std::string Computadora::getUsuario(){
    return usuario;
};

void Computadora::setRam(int ram){
    this->ram=ram;
};
void Computadora::setAlmacenamiento(int almacenamiento){
    this->almacenamiento=almacenamiento;
};
void Computadora::setSistemaOperativo(std::string sistemaOperativo){
    this->sistemaOperativo=sistemaOperativo;
};
void Computadora::setUsuario(std::string usuario){
    this->usuario=usuario;
};
