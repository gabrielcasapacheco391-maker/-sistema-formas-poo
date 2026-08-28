#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"


class Circle : public Shape
{
    public:
        /** Default constructor */
        Circle(std::string n,double r);
        /** Default destructor */
        virtual ~Circle();

        /** Access radius
         * \return The current value of radius
         */
        double Getradius() { return radius; }

    protected:

    private:
        double radius; //!< Member variable "radius"
};

#endif // CIRCLE_H
