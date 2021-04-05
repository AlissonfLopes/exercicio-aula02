#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>;

using namespace std;

class Quadrado
{
// Valores para altura e largura serão protegidos para que os filhos dessa classe possam acessar
protected:
    float altura;
    float largura;

public:
// Público apenas os métodos
    Quadrado(); // Default
    Quadrado(float altura, float largura); // Construtor da minha classe
    float calculaArea();
    float calculaPerimetro();
    friend ostream& operator>>(ostream& os, Quadrado &quad);
};

class Circulo
{
// Valores para altura e largura serão protegidos para que os filhos dessa classe possam acessar
protected:
    float raio;

public:
    Circulo(); // Default
    Circulo(float raio); // Construtor da minha classe
    double pi = 3.1415;
    float calculaAreaCirculo();
} ;

// Herda de Quadrado pois usam a mesmas características
class Retangulo: public Quadrado
{
public:
    Retangulo(float altura, float largura); // Sobrecarrego construtor
};

// Herda de Quadrado pois podemos usar algumas caraterísticas
class Triangulo: public Quadrado
{
protected: // Posso criar mais herenças com variânças sobre os tipos de triângulo, por isso está como protected
    float base;

public:
    Triangulo(float altura, float base); // Sobrecarrego construtor
    float calculaAreaT();
};

// Herda de Quadrado pois usam a mesmas características
class Cubo: public Quadrado
{
private:
    float comprimento;

public:
    Cubo(float altura, float largura, float comprimento); // Sobrecarrego construtor
    float calculaVolumeCubo();
    float calculaAreaCubo();
    friend ostream& operator<<(ostream& os, Cubo &cub);
};

// Herda de círculo por terem características semelhantes
class Cone: public Circulo
{
protected:
    float altura;

public:
    Cone(float altura, float raio); // Sobrecarrego construtor
    float calculaVolumeCone();
    friend ostream& operator==(ostream& os, Cone &con);
};

// Herda de círculo por terem características semelhantes
class Cilindro: public Circulo
{
protected:
    float altura;

public:
    Cilindro(float altura, float raio); // Sobrecarrego construtor
    float calculaVolumeCilindro();
    float calculaAreaCilindro();
};
#endif // HEADER_HPP
