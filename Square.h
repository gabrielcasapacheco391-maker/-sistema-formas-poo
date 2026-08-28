#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"


class Square : public Rectangle
{
    public:
        /** Default constructor */
        Square(std::string n, double w,double h);
        /** Default destructor */
        virtual ~Square();

    protected:

    private:
};

#endif // SQUARE_H
