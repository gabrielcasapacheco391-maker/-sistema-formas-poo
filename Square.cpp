#include "Square.h"
#include <cmath> 

Square::Square(std::string n, double l) : Shape(n) {
    lado = l;
}

Square::~Square() {
}


double Square::calcularArea() {
    return std::pow(lado, 2);
}
