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

    virtual ~AudioVisual() = default;  // Make the destructor virtual.
};

#endif // AUDIOVISUAL_H
