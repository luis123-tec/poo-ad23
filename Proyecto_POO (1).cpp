// Proyecto de programación orientada a objetos
// Luis Fernando Nieto Vega

// main.cpp
#include "Peliculas.h"
#include "Series.h"
#include "Reviews.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
  vector<Pelicula> peliculas; // Vector para almacenar películas
  vector<Serie> series; // Vector para almacenar series
  // Películas y series predefinidas
  Pelicula pelicula1("El Padrino", 1972);
  pelicula1.setReview(Review("Un clásico.", 5));
  peliculas.push_back(pelicula1);
  Serie serie1("Breaking Bad", 5);
  serie1.setReview(Review("Una de las mejores series de todos los tiempos.", 5));
  series.push_back(serie1);
  // Añade aquí más películas y series si lo deseas
  // Pelicula pelicula2("Nombre de la Pelicula", Año);
  // pelicula2.setReview(Review("Comentario de la Pelicula", Calificación));
  // peliculas.push_back(pelicula2);

  // Serie serie2("Nombre de la Serie", Temporadas);
  // serie2.setReview(Review("Comentario de la Serie", Calificación));
  // series.push_back(serie2);
  // De esta forma se pueden poner más peliculas desde antes


  // Menú
  int opcion = 0;
  string titulo;
  int anio;
  int temporadas;
  string comentario;
  int calificacion;
  do {
    cout << "\nBienvenido al programa de películas y series" << endl;
    cout << "Menú:" << endl;
    cout << "1 - Mostrar todas las películas y series" << endl;
    cout << "2 - Añadir nueva serie" << endl;
    cout << "3 - Añadir nueva película" << endl;
    cout << "4 - Salir" << endl;
    cout << "Por favor, seleccione una opción: ";
    cin >> opcion;
    switch (opcion) {
      case 1:
        // Mostrar todas las películas y series
        for (const auto &pelicula : peliculas) {
          pelicula.mostrarInformacion();
        }
        for (const auto &serie : series) {
          serie.mostrarInformacion();
        }
        break;
      case 2:
        // Añadir nueva serie
        cout << "Ingrese el título de la serie: ";
        cin.ignore();
        getline(cin, titulo);
        cout << "Ingrese el número de temporadas: ";
        cin >> temporadas;
        cout << "Ingrese el comentario para la serie: ";
        cin.ignore();
        getline(cin, comentario);
        cout << "Ingrese la calificación de la serie: ";
        cin >> calificacion;
        series.push_back(Serie(titulo, temporadas));
        series.back().setReview(Review(comentario, calificacion));
        break;
      case 3:
        // Añadir nueva película
        cout << "Ingrese el título de la película: ";
        cin.ignore();
        getline(cin, titulo);
        cout << "Ingrese el año de la película: ";
        cin >> anio;
        cout << "Ingrese el comentario para la película: ";
        cin.ignore();
        getline(cin, comentario);
        cout << "Ingrese la calificación de la película: ";
        cin >> calificacion;
        peliculas.push_back(Pelicula(titulo, anio));
        peliculas.back().setReview(Review(comentario, calificacion));
        break;
      case 4:
        // Salir
        cout << "Gracias por usar el programa. Adiós." << endl;
        break;
      default:
        cout << "Opción no válida, intente de nuevo." << endl;
        break;
    }
  } while (opcion != 4);
  return 0;
}
