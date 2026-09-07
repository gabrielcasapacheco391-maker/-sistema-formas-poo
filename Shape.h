#ifndef SHAPE_H
#define SHAPE_H

#include <string>
class Shape
{
    public:
  
        Shape(std::string n);
    
        virtual ~Shape();

        std::string Getname() { return name; }

  virtual  double calcularArea()=0; 

    private:
        std::string name;
};

#endif // SHAPE_H
