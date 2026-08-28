#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"


class Rectangle : public Shape
{
    public:
        /** Default constructor */
        Rectangle();
        /** Default destructor */
        virtual ~Rectangle();

        /** Access width
         * \return The current value of width
         */
        double Getwidth() { return width; }
        /** Access height
         * \return The current value of height
         */
        double Getheight() { return height; }

    protected:

    private:
        double width; //!< Member variable "width"
        double height; //!< Member variable "height"
};

#endif // RECTANGLE_H
