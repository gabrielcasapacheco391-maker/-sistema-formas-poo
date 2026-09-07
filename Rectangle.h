#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape
{
public:
    Square(std::string n, double l);
    virtual ~Square();

    double calcularArea()override;

    double Getlado() { return lado; }

protected:

private:
    double lado;
};

#endif // SQUARE_H
