#include "Rectangle.h"

Rectangle::Rectangle(std::string n, double b, double a) : Shape(n) {
    base = b;
    altura = a;
}

Rectangle::~Rectangle() {
}


double Rectangle::calcularArea() {
    return base * altura;
}
