#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape
{
public:
    Rectangle(std::string n, double b, double a);
    virtual ~Rectangle();

    double calcularArea()override;

    double Getbase() { return base; }
    double Getaltura() { return altura; }

protected:

private:
    double base;
    double altura;
};

#endif // RECTANGLE_H
