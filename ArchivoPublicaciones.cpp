#include <iostream>
#include "headers/Publicacion.h"
#include "headers/ArchivoPublicaciones.h"

ArchivoPublicaciones::ArchivoPublicaciones(const char *n){
    strcpy(_nombre, n);
}
Publicacion ArchivoPublicaciones::leerRegistro(int pos){
    Publicacion obj;
    FILE *p;
    p=fopen(_nombre,"rb");
    if(p==nullptr){
        std::cout<<"Error al abrir el archivo"<<std::endl;
        exit(-1);
    }
    fseek(p,sizeof(Publicacion)*pos,SEEK_SET);
    fread(&obj,sizeof(Publicacion),1,p);
    fclose(p);
    return obj;
}
int ArchivoPublicaciones::contarRegistros(){
    FILE *p;
    p=fopen(_nombre,"rb");
    if(p==nullptr){
        std::cout<<"Error al abrir el archivo"<<std::endl;
        return -1;
    }
    fseek(p,0,SEEK_SET);
    int tam=ftell(p);
    fclose(p);
    return tam/sizeof(Publicacion);
}

bool ArchivoPublicaciones::grabarRegistro(Publicacion obj){
    bool escribio=false;
    FILE *p;
    p=fopen(_nombre,"ab");
    if(p==nullptr){
        std::cout<<"Error al abrir el archivo"<<std::endl;
        return escribio;
    }
    escribio=fwrite(&obj,sizeof (Publicacion),1,p);
    fclose(p);
    return escribio;
}
