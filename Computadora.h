#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream>

class Computadora{
    int ram;
    int almacenamiento;
    std::string sistemaOperativo;
    std::string usuario;
public:
    Computadora();
    Computadora(int ram, int almacenamiento, std::string sistemaOperativo, std::string usuario);
    int getRam();
    int getAlmacenamiento();
    std::string getSistemaOperativo();
    std::string getUsuario();

    void setRam(int ram);
    void setAlmacenamiento(int almacenamiento);
    void setSistemaOperativo(std::string sistemaOperativo);
    void setUsuario(std::string usuario);
};
#endif