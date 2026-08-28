#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
    public:
        /** Default constructor */
        Shape(std::string n);
        /** Default destructor */
        virtual ~Shape();

        /** Access name
         * \return The current value of name
         */
        std::string Getname() { return name; }

    protected:

    private:
        std::string name; //!< Member variable "name"
};

#endif // SHAPE_H
