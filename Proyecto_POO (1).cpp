// Proyecto de programación orientada a objetos
// Luis Fernando Nieto Vega

#include <iostream>
#include "Peliculas.h"
#include "Series.h"
#include "Reviews.h"

using namespace std;

int main() {
  cout << "Bienvenido al programa de películas\n";

  // Crear una película
  Pelicula pelicula("El Padrino", 1972);
  pelicula.mostrarInformacion();

  // Modificar y mostrar la información de la película usando setters y getters
  pelicula.setTitulo("The Godfather");
  pelicula.setAnio(1972);
  cout << "Película modificada: " << pelicula.getTitulo() << " (" << pelicula.getAnio() << ")\n";

  // Crear una reseña para la película
  Review reviewPelicula("Una obra maestra", 5);
  reviewPelicula.mostrarReview();

  // Crear una serie
  Serie serie("Breaking Bad", 5);
  serie.mostrarInformacion();

  // Modificar y mostrar la información de la serie usando setters and getters
  serie.setTitulo("Breaking Bad");
  serie.setTemporadas(5);
  cout << "Serie modificada: " << serie.getTitulo() << " | Temporadas: " << serie.getTemporadas() << "\n";
  
  // Agregar y mostrar la reseña de la serie
  Review reviewSerie("Muy adictiva", 4);
  reviewSerie.mostrarReview();

  return 0;
}
