// Series.h
#ifndef SERIES_H
#define SERIES_H

/* Lo que investigue sobre el uso de const es que permite que la variable sea constante y no cambie, esto hace que un tipo de dato no cambie a otro*/

#include "Audiovisual.h"
#include <string>
#include <iostream>

class Serie : public AudioVisual {
private:
  int temporadas;

public:
  Serie(std::string titulo, int temporadas, const Review& review);
  Serie(std::string titulo, int temporadas); // Constructor de main.cpp
  Serie();
  void setTemporadas(int nuevasTemporadas);
  int getTemporadas() const;
  void mostrarInformacion() const override; // Override indica que este método sobrescribe el método virtual de la clase base
};

// Implementaciones

// Constructor de la clase Serie que implementa la composición.
// Esto es porque estamos creando un objeto Review dentro de este constructor,
// lo que significa que el Review es parte integral de la Serie y su ciclo de vida.

Serie::Serie(std::string titulo, int temporadas, const Review& review)
  : AudioVisual(titulo, review), temporadas(temporadas) {}

Serie::Serie(std::string titulo, int temporadas)
: AudioVisual(titulo, Review()), temporadas(temporadas) {}

Serie::Serie() : AudioVisual(), temporadas(0) {}

void Serie::setTemporadas(int nuevasTemporadas) {
  temporadas = nuevasTemporadas;
}
int Serie::getTemporadas() const {
  return temporadas;
}
void Serie::mostrarInformacion() const {
  AudioVisual::mostrarInformacion();
  std::cout << "Serie: " << getTitulo() << " (" << temporadas << " temporadas)" << std::endl;
  review.mostrarReview();
}
#endif // SERIES_H
