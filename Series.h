// Series.h
#ifndef SERIES_H
#define SERIES_H

/* Lo que investigue sobre el uso de const es que permite que la variable sea constante y no cambie, esto hace que un tipo de dato no cambie a otro*/

#include "Reviews.h"
#include <iostream>
#include <string>

class Serie {
private:
  std::string titulo;
  int temporadas;
  Review review;

public:
  Serie(std::string titulo, int temporadas);
  Serie();
  void setTitulo(std::string nuevoTitulo);
  std::string getTitulo() const;
  void setTemporadas(int nuevasTemporadas);
  int getTemporadas() const;
  void setReview(const Review& nuevaReview);
  Review getReview() const;
  void mostrarInformacion() const;
};

// Implementaciones
Serie::Serie(std::string titulo, int temporadas) : titulo(titulo), temporadas(temporadas) {}

Serie::Serie() : titulo(""), temporadas(0) {}

void Serie::setTitulo(std::string nuevoTitulo) {
  titulo = nuevoTitulo;
}

std::string Serie::getTitulo() const {
  return titulo;
}

void Serie::setTemporadas(int nuevasTemporadas) {
  temporadas = nuevasTemporadas;
}

int Serie::getTemporadas() const {
  return temporadas;
}

void Serie::setReview(const Review& nuevaReview) {
  review = nuevaReview;
}

Review Serie::getReview() const {
  return review;
}

void Serie::mostrarInformacion() const {
  std::cout << "Serie: " << titulo << " (" << temporadas << " temporadas)" << std::endl;
  review.mostrarReview();
}

#endif // SERIES_H
