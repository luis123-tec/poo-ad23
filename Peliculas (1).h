#ifndef PELICULA_H
#define PELICULA_H

#include <iostream>
#include <string>
/* El uso de #ifndef, #define, y #endif en archivos de encabezado (header) es para prevenir la inclusión múltiple del mismo archivo, esto no debería ser un problema ya que los archivos terminan en .h pero nunca se sabe */


using namespace std;
class Pelicula {
private:
    string titulo;
    int anio;
public:
    Pelicula(string titulo, int anio);
    void setTitulo(string nuevoTitulo);
    string getTitulo() const;
    void setAnio(int nuevoAnio);
    int getAnio() const;
    void mostrarInformacion();
};
// Implementación de los métodos en el mismo archivo
Pelicula::Pelicula(string titulo, int anio) : titulo(titulo), anio(anio) {}

void Pelicula::mostrarInformacion() {
    cout << "Pelicula: " << titulo << " (" << anio << ")" << endl;
}
void Pelicula::setTitulo(string nuevoTitulo) {
    titulo = nuevoTitulo;
}
string Pelicula::getTitulo() const {
    return titulo;
}
void Pelicula::setAnio(int nuevoAnio) {
    anio = nuevoAnio;
}
int Pelicula::getAnio() const {
    return anio;
}
#endif // PELICULA_H