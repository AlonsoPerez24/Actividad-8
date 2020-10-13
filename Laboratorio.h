#ifndef LABORATORIO_H
#define LABORATORIO_H
#include <Computadora.h>

class Laboratorio{
    Computadora equipo[5];
    size_t cont;
public:
    Laboratorio();
    void agregarFinal(const Computadora &p);
    void mostrar();
};
#endif