#include "Circle.h"



Circle::Circle(std::string n, double r) : Shape(n) {
    radius = r;
}

// Destrutor
Circle::~Circle() {
}

// Implementação do cálculo da área (Pi * Raio ao quadrado)
double Circle::calcularArea() {
    return 3.14159 * std::pow(radius, 2);
}
