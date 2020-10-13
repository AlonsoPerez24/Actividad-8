#include "Laboratorio.h"

Laboratorio::Laboratorio(){
    cont=0;
};

void Laboratorio::agregarFinal(const Computadora &p){
    if(cont<10){
        equipo[cont] = p;
        cont++;
    }else{
        std::cout<<"Esta lleno" << std::endl;
    }
};

void Laboratorio::mostrar(){
    for(size_t i=0; i<cont; i++){
        Computadora &p = equipo[i];
        std::cout<<"Equipo "<<i+1<<": "<<p.getUsuario();
        std::cout<<"Sistema operativo: "<<p.getSistemaOperativo();
        std::cout<<"Ram: "<<p.getRam();
        std::cout<<"Almacenamiento: "<<p.getAlmacenamiento();
    }
};