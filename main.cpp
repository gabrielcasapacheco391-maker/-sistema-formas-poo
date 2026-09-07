#include <iostream>
#include <vector>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

int main() {
    std::vector<Shape*> formas;
    formas.push_back(new Circle("Círculo", 5));
    formas.push_back(new Rectangle("Retângulo", 4, 6));
    formas.push_back(new Square("Quadrado", 3));

    for (Shape* f : formas) {
        std::cout << f->Getname() << " - Área: " << f->calcularArea() << std::endl;
    }

    for (Shape* f : formas) delete f;
    return 0;
}
