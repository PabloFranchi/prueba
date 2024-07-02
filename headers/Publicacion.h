#ifndef PUBLICACION_H_INCLUDED
#define PUBLICACION_H_INCLUDED

#include <cstring>
class Publicacion{
    protected:
        char _titulo[40];
        char _autor [20];
        int _anio;
    public:
        Publicacion(const char *titulo, const char *autor, int anio);
        Publicacion();
        void mostrar();
        void setTitulo(const char *titulo);
        void setAutor(const char *autor);
        void setAnio(int anio);
        const char* getTitulo();
        const char* getAutor();
        int getAnio();
};


#endif // PUBLICACION_H_INCLUDED
