// Peliculas.h
#ifndef PELICULAS_H
#define PELICULAS_H

/* El uso de #ifndef, #define, y #endif en archivos de encabezado (header) es para prevenir la inclusión múltiple del mismo archivo, esto no debería ser un problema ya que los archivos terminan en .h pero nunca se sabe */

#include "Reviews.h"
#include <iostream>
#include <string>

class Pelicula {
private:
  std::string titulo;
  int anio;
  Review review;

public:
  Pelicula(std::string titulo, int anio);
  Pelicula();
  void setTitulo(std::string nuevoTitulo);
  std::string getTitulo() const;
  void setAnio(int nuevoAnio);
  int getAnio() const;
  void setReview(const Review& nuevaReview);
  Review getReview() const;
  void mostrarInformacion() const;
};

// Implementaciones
Pelicula::Pelicula(std::string titulo, int anio) : titulo(titulo), anio(anio) {}

Pelicula::Pelicula() : titulo(""), anio(0) {}

void Pelicula::setTitulo(std::string nuevoTitulo) {
  titulo = nuevoTitulo;
}

std::string Pelicula::getTitulo() const {
  return titulo;
}

void Pelicula::setAnio(int nuevoAnio) {
  anio = nuevoAnio;
}

int Pelicula::getAnio() const {
  return anio;
}

void Pelicula::setReview(const Review& nuevaReview) {
  review = nuevaReview;
}

Review Pelicula::getReview() const {
  return review;
}

void Pelicula::mostrarInformacion() const {
  std::cout << "Pelicula: " << titulo << " (" << anio << ")" << std::endl;
  review.mostrarReview();
}

#endif // PELICULAS_H
