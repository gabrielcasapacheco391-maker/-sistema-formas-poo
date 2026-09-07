#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h" 

class Circle : public Shape
{
public:

    Circle(std::string n, double r);


    virtual ~Circle();


    double calcularArea()override; 


    double Getradius() { return radius; }

protected:

private:
    double radius;
};

#endif // CIRCLE_H
