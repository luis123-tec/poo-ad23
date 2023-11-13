// Serie.h
/* Lo que investigue sobre el uso de const es que permite que la variable sea constante y no cambie, esto hace que un tipo de dato no cambie a otro*/
#ifndef SERIE_H
#define SERIE_H

#include <string>
#include <iostream>

using namespace std;

class Serie {
private:
    string titulo;
    int temporadas;

public:
    Serie(string titulo, int temporadas);
    void setTitulo(string nuevoTitulo);
    string getTitulo() const;
    void setTemporadas(int nuevasTemporadas);
    int getTemporadas() const;
    void mostrarInformacion();
};

// Implementación de los métodos en el mismo archivo
Serie::Serie(string titulo, int temporadas) : titulo(titulo), temporadas(temporadas) {}

void Serie::mostrarInformacion() {
    cout << "Serie: " << titulo << " | Temporadas: " << temporadas << endl;
}

void Serie::setTitulo(string nuevoTitulo) {
    titulo = nuevoTitulo;
}

string Serie::getTitulo() const {
    return titulo;
}

void Serie::setTemporadas(int nuevasTemporadas) {
    temporadas = nuevasTemporadas;
}

int Serie::getTemporadas() const {
    return temporadas;
}

#endif // SERIE_H
