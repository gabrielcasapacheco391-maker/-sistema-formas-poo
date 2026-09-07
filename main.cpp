#include <iostream>
#include <iomanip> 
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"

using namespace std;

int main() {

    cout << fixed << setprecision(2);

 
    Circle circulo("Circulo Verde", 5.0);
    Square quadrado("Quadrado Azul", 4.0);
    Rectangle retangulo("Retangulo Vermelho", 6.0, 3.0);

  
    cout << "Forma: " << circulo.Getname() << endl;
    cout << "-> Raio: " << circulo.Getradius() << endl;
    cout << "-> Area calculada: " << circulo.calcularArea() << endl;


    cout << "Forma: " << quadrado.Getname() << endl;
    cout << "-> Lado: " << quadrado.Getlado() << endl;
    cout << "-> Area calculada: " << quadrado.calcularArea() << endl;


    cout << "Forma: " << retangulo.Getname() << endl;
    cout << "-> Base: " << retangulo.Getbase() << " | Altura: " << retangulo.Getaltura() << endl;
    cout << "-> Area calculada: " << retangulo.calcularArea() << endl;
 

    return 0;
}
