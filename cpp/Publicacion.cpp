#include <iostream>
#include "../headers/Publicacion.h"
using namespace std;

Publicacion::Publicacion(const char *titulo, const char *autor, int anio){
    setTitulo(titulo);
    setAutor(autor);
    setAnio(anio);
}
Publicacion::Publicacion(){
    strcpy(_titulo,"Hola");
    strcpy(_autor,"Carlos");
    _anio=0;
}

void Publicacion::mostrar(){
    cout<<"            Publicacion             "<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"Titulo: "<<_titulo<<endl;
    cout<<"Autor: "<<_autor<<endl;
    cout<<"Anio: "<<_anio<<endl;
    cout<<"------------------------------------"<<endl;
}

void Publicacion::setTitulo(const char *titulo){strcpy(_titulo,titulo);}
void Publicacion::setAutor(const char *autor){strcpy(_autor,autor);}
void Publicacion::setAnio(int anio){_anio=anio;}
const char* Publicacion::getTitulo(){return _titulo;}
const char* Publicacion::getAutor(){return _autor;}
int Publicacion::getAnio(){return _anio;}
