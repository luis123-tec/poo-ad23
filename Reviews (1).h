// Review.h
/* No utilice "using namespace std" porque cuando lo usaba ocasionaba errores con los headers de este archivo en especifico */
    
#ifndef REVIEW_H
#define REVIEW_H

#include <string>
#include <iostream>

class Review {
private:
    std::string comentario;
    int calificacion;
public:
    Review(std::string comentario, int calificacion);

    void setComentario(std::string nuevoComentario);

    std::string getComentario() const;

    void setCalificacion(int nuevaCalificacion);

    int getCalificacion() const;

    void mostrarReview();
};
// Implementación de los métodos en el mismo archivo
Review::Review(std::string comentario, int calificacion) :

comentario(comentario), calificacion(calificacion) {}
void Review::mostrarReview() {
    std::cout << "Review: " << comentario << " | Calificación: " << calificacion << std::endl;
}
void Review::setComentario(std::string nuevoComentario) {
    comentario = nuevoComentario;
}
std::string Review::getComentario() const {
    return comentario;
}
void Review::setCalificacion(int nuevaCalificacion) {
    calificacion = nuevaCalificacion;
}
int Review::getCalificacion() const {
    return calificacion;
}
#endif // REVIEW_H
