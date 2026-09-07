#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
    public:
  
        Shape(std::string n);
    
        virtual ~Shape();

        std::string Getname() { return name; }

  virtual  double calcularArea(); 

    private:
        std::string name;
};

#endif // SHAPE_H
