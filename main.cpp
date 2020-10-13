#include <iostream>
#include <Computadora.h>

using namespace std;

class Laboratorio{
    Computadora equipos[5];
    size_t cont;
public:
    void agregarFinal(const Computadora &p);
    void mostrar();
};

int main(){

    return 0;
}