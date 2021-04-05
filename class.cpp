#include "header.hpp"
#include <math.h>

Quadrado:: Quadrado()
{
    this->altura = 0.0;
    this->largura = 0.0;
}

Quadrado:: Quadrado(float altura, float largura)
{
    this->altura = altura;
    this->largura = largura;
}

float Quadrado:: calculaArea()
{
    return  this->altura * this->largura;
}

float Quadrado:: calculaPerimetro()
{
    return this->largura * 4;
}

ostream& operator>>(ostream& os, Quadrado &quad)
{
    os<<"Altura: "<<quad.altura<< endl<<"Largura: "<<quad.largura<< endl;
}

Circulo:: Circulo()
{
    this->raio = 0.0;
}

Circulo:: Circulo(float raio)
{
    this->raio = raio;
}

float Circulo:: calculaAreaCirculo()
{
    return pi * pow(this->raio, 2);
}

Retangulo:: Retangulo(float altura, float largura)
{
    this->altura = altura;
    this->largura = largura;
}

Triangulo:: Triangulo(float altura, float base)
{
    this->altura = altura;
    this->base = base;
}

float Triangulo:: calculaAreaT()
{
    return (this->base * this->altura) / 2;
}

Cubo:: Cubo(float altura, float largura, float comprimento)
{
    this->altura = altura;
    this->largura = largura;
    this->comprimento = comprimento;
}

float Cubo:: calculaVolumeCubo()
{
    return pow(altura, 3);
}

float Cubo:: calculaAreaCubo()
{
    float temp = calculaArea();
    return temp * 6;
}

ostream& operator<<(ostream& os, Cubo &cub)
{
    os<<"Altura: "<<cub.altura<< endl<<"Largura: "<<cub.largura<< endl<<"Comprimento: "<<cub.comprimento<<endl;
}


Cone:: Cone(float altura, float raio)
{
    this->altura = altura;
    this->raio = raio;
}

float Cone:: calculaVolumeCone()
{
    return (pi * pow(this->raio, 2) * this->altura) / 3;
}

ostream& operator==(ostream& os, Cone &con)
{
    os<<"Raio: "<<con.raio<< endl<<"Altura: "<<con.altura<< endl;
}

Cilindro:: Cilindro(float altura, float raio)
{
    this->altura = altura;
    this->raio = raio;
}

float Cilindro:: calculaVolumeCilindro()
{
    return (pi * pow(this->raio, 2) * this->altura);
}

float Cilindro:: calculaAreaCilindro()
{
    return (2 * pi * pow(this->raio, 2)) + (2 * pi * this->raio * this->altura);
}
