#include <iostream>
using namespace std;

class triangulo {

private:
  double base, altura;

public:
  triangulo(double b, double h) {
    base = b;
    altura = h;
  }

  double area() { return (base * altura) / 2.0; }
};

int main() {

  double b_temp, h_temp;

  cout << "Introduce la medida de la base y la altura: ";
  cin >> b_temp >> h_temp;

  triangulo calculo(b_temp, h_temp);

  cout << "El area del triangulo es: " << calculo.area() << endl;

  return 0;
}
