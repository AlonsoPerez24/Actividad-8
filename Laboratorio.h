#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "Computadora.h"

class Laboratorio{
    Computadora equipo[5]={{16, 120, "Ubuntu", "Jesus"},{4, 256, "Linux", "Cesar"},{2, 16, "Mac", "Rafa"},{32, 1000, "Fedora", "Victor"},{8, 500, "Windows", "Alonso"}};
    size_t cont;
public:
    Laboratorio();
    void agregarFinal(const Computadora &p);
    void mostrar();
};

#endif