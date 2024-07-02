#include <iostream>
#include <cstring>
#include "../headers/Publicacion.h"
using namespace std;

class Libro: public Publicacion
{
    private:
        int _nroPaginas;
        char _editorial[30];
    public:
        void setNroPaginas(int nroPaginas){_nroPaginas=nroPaginas;}
        void setEditorial(const char *editorial){strcpy(_editorial,editorial);}
        int getNroPaginas(){return _nroPaginas;}
        const char *getEditorial(){return _editorial;};
        void mostrar(){
            cout<<"------------------------------------"<<endl;
            cout<<"Nro paginas: "<<_nroPaginas<<endl;
            cout<<"Editorial: "<<_editorial<<endl;
            cout<<"------------------------------------"<<endl;
        }
};

class Revista: public Publicacion{
    private:
        int _nroEdicion;
        int _mesPublicacion;
    public:
        Revista():Publicacion(){
            _nroEdicion=1;
            _mesPublicacion=0;
        }
        void setNroEdicion(int nroEdicion){_nroEdicion=nroEdicion;}
        void setMesPublicacion(int mesPublicacion){_mesPublicacion=mesPublicacion;}
        int getNroEdicion(){return _nroEdicion;}
        int getMesPublicacion(){return _mesPublicacion;}
        void mostrar(){
            Publicacion::mostrar();
            cout<<"               Revista              "<<endl;
            cout<<"------------------------------------"<<endl;
            cout<<"Nro edicion: "<<_nroEdicion<<endl;
            cout<<"Mes de publicacion: "<<_mesPublicacion<<endl;
            cout<<"------------------------------------"<<endl;
        }
};
class Libreria{
    private:
        Libro _libros;
        Revista _revistas;
    public:
        void agregarPublicacion(Publicacion obj){

        }
        void mostrar(){
            _libros.mostrar();
            _revistas.mostrar();
        }


};
int main()
{
   Libreria obj;
   Publicacion reg;
   obj::agregarPublicacion()
}
