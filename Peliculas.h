// Peliculas.h
#ifndef PELICULAS_H
#define PELICULAS_H

/* El uso de #ifndef, #define, y #endif en archivos de encabezado (header) es para prevenir la inclusión múltiple del mismo archivo, esto no debería ser un problema ya que los archivos terminan en .h pero nunca se sabe */

#include "Audiovisual.h"
#include <string>
#include <iostream>

class Pelicula : public AudioVisual {
private:
  int anio;

public:
  Pelicula(std::string titulo, int anio, const Review& review); // Composición: Pelicula 
  Pelicula(std::string titulo, int anio); // Constructor para main.cpp
  Pelicula();
  void setAnio(int nuevoAnio);
  int getAnio() const;
  void mostrarInformacion() const override; // Override indica que este método sobrescribe el método virtual de la clase base
};
// Implementaciones
// Definiciones de métodos de la clase Pelicula
// Constructor de la clase Pelicula que implementa la composición.
// Aquí también se crea un objeto Review dentro del constructor,
// lo cual indica que Review es parte esencial de la Pelicula y no puede existir sin ella.

Pelicula::Pelicula(std::string titulo, int anio, const Review& review)
  : AudioVisual(titulo, review), anio(anio) {}

Pelicula::Pelicula(std::string titulo, int anio)
: AudioVisual(titulo, Review()), anio(anio) {}

Pelicula::Pelicula() : AudioVisual(), anio(0) {}

void Pelicula::setAnio(int nuevoAnio) {
  anio = nuevoAnio;
}
int Pelicula::getAnio() const {
  return anio;
}
void Pelicula::mostrarInformacion() const {
  AudioVisual::mostrarInformacion();
  std::cout << "Pelicula: " << getTitulo() << " (" << anio << ")" << std::endl;
  review.mostrarReview();
}
#endif // PELICULAS_H
