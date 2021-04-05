#include <iostream>
#include "header.hpp"

using namespace std;

int main()
{
    // Exemplo Quadrado
    Quadrado quad1(4,4);

    float areaQuadrado = quad1.calculaArea();
    float perimetroQuadrado = quad1.calculaPerimetro();

    cout<<"-------------------------------- Exemplo Quadrado ---------------------------------\n"<< endl;
    cout<<areaQuadrado<< endl;
    cout<<perimetroQuadrado<< endl;

    // Exemplo Circulo
    Circulo circ1(3);

    float areaCirculo = circ1.calculaAreaCirculo();

    cout<<"-------------------------------- Exemplo Circulo ---------------------------------\n"<< endl;
    cout<<areaCirculo<< endl;

    // Exemplo Retangulo
    Retangulo ret1(2, 6);

    float areaRetangulo = ret1.calculaArea();
    float perimetroRetangulo = ret1.calculaPerimetro();

    cout<<"-------------------------------- Exemplo Retangulo ---------------------------------\n"<< endl;
    cout<<areaRetangulo<< endl;
    cout<<perimetroRetangulo<< endl;

    // Exemplo Triangulo
    Triangulo tri1(8, 3);

    float areaTriangulo = tri1.calculaAreaT();

    cout<<"-------------------------------- Exemplo Triangulo ---------------------------------\n"<< endl;
    cout<<areaTriangulo<< endl;

    // Exemplo Cubo
    Cubo cub1(3,3,3);

    float areaCubo = cub1.calculaAreaCubo();
    float volCubo = cub1.calculaVolumeCubo();

    cout<<"-------------------------------- Exemplo Cubo ---------------------------------\n"<< endl;
    cout<<areaCubo<< endl;
    cout<<volCubo<< endl;

    //Exemplo Cone
    Cone con1(8, 4);

    float volCone = con1.calculaVolumeCone();
    cout<<"-------------------------------- Exemplo Cone ---------------------------------\n"<< endl;
    cout<<volCone<< endl;

    //Exemplo Cilindro
    Cilindro cil1(10, 2);

    float areaCilindro = cil1.calculaAreaCilindro();
    float volCilindro = cil1.calculaVolumeCilindro();

    cout<<"-------------------------------- Exemplo Cilindro ---------------------------------\n"<< endl;
    cout<<areaCilindro<< endl;
    cout<<volCilindro<< endl;
}
