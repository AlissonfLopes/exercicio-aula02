#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>;

using namespace std;

class Quadrado
{
// Valores para altura e largura ser�o protegidos para que os filhos dessa classe possam acessar
protected:
    float altura;
    float largura;

public:
// P�blico apenas os m�todos
    Quadrado(); // Default
    Quadrado(float altura, float largura); // Construtor da minha classe
    float calculaArea();
    float calculaPerimetro();
    friend ostream& operator>>(ostream& os, Quadrado &quad);
};

class Circulo
{
// Valores para altura e largura ser�o protegidos para que os filhos dessa classe possam acessar
protected:
    float raio;

public:
    Circulo(); // Default
    Circulo(float raio); // Construtor da minha classe
    double pi = 3.1415;
    float calculaAreaCirculo();
} ;

// Herda de Quadrado pois usam a mesmas caracter�sticas
class Retangulo: public Quadrado
{
public:
    Retangulo(float altura, float largura); // Sobrecarrego construtor
};

// Herda de Quadrado pois podemos usar algumas carater�sticas
class Triangulo: public Quadrado
{
protected: // Posso criar mais heren�as com vari�n�as sobre os tipos de tri�ngulo, por isso est� como protected
    float base;

public:
    Triangulo(float altura, float base); // Sobrecarrego construtor
    float calculaAreaT();
};

// Herda de Quadrado pois usam a mesmas caracter�sticas
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

// Herda de c�rculo por terem caracter�sticas semelhantes
class Cone: public Circulo
{
protected:
    float altura;

public:
    Cone(float altura, float raio); // Sobrecarrego construtor
    float calculaVolumeCone();
    friend ostream& operator==(ostream& os, Cone &con);
};

// Herda de c�rculo por terem caracter�sticas semelhantes
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
