#include <iostream>
using namespace std;

class rectangulo {

private:
  double base, altura;

public:
  rectangulo(double b, double h) {
    base = b;
    altura = h;
  }

  double area() { return base * altura; }
};

int main() {

  double b_temp, h_temp;

  cout << "Introduce la medida de la base y la la altura: ";
  cin >> b_temp >> h_temp;

  rectangulo calculo(b_temp, h_temp);

  cout << "El area del rectangulo es: " << calculo.area() << endl;

  return 0;
}
