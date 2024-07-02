#ifndef ARCHIVOPUBLICACIONES_H_INCLUDED
#define ARCHIVOPUBLICACIONES_H_INCLUDED

class ArchivoPublicaciones{
    private:
        char _nombre[30];
    public:
    ArchivoPublicaciones(const char *n);
    Publicacion leerRegistro(int pos);
    int contarRegistros();
    bool grabarRegistro(Publicacion obj);
};


#endif // ARCHIVOPUBLICACIONES_H_INCLUDED
