// Audiovisual.h
#ifndef AUDIOVISUAL_H
#define AUDIOVISUAL_H

#include "Reviews.h"
#include <string>
#include <iostream>

// Clase base para Pelicula y Serie
class AudioVisual {
protected:
    std::string titulo;
    Review review;

public:
    AudioVisual(std::string titulo, const Review& review) : titulo(titulo), review(review) {}
    AudioVisual() : titulo(""), review(Review()) {}

    virtual void mostrarInformacion() const {
        std::cout << "Título: " << titulo << std::endl;
    }

    std::string getTitulo() const { return titulo; }
    void setTitulo(const std::string& nuevoTitulo) { titulo = nuevoTitulo; }
    const Review& getReview() const { return review; }
    void setReview(const Review& nuevaReview) { review = nuevaReview; }

    virtual ~AudioVisual() = default;  // La línea asegura que al eliminar una instancia de AudioVisual o cualquiera de sus clases derivadas (como Pelicula o Serie), se llame al destructor adecuado. 
// Esto asegura que la herencia sea correcta, ya que si no existe una la otra tampoco, el destructor es ~AudioVisual()
};

#endif // AUDIOVISUAL_H
