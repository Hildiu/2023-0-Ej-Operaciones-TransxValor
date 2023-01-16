#include <iostream>
using namespace std;

double sumar(double num1, double num2);
double restar(double n1, double n2);
double multiplicar(double numero1, double numero2);

int main()
{
  double n1, n2;

  cout << "Numero 1 : ";
  cin >> n1;
  cout << "Numero 2 : ";
  cin >> n2;

  cout << "La suma es : " << sumar(n1,n2) << "\n";
  cout << "La diferencia es : " << restar(n1,n2) << "\n";
  cout << "El Producto es: " << multiplicar(n1,n2) << "\n";

  return 0;
}

double sumar(double num1, double num2)
{
  return num1 + num2;
}

double restar(double n1, double n2)
{
  return n1-n2;
}

double multiplicar(double numero1, double numero2)
{
  return numero1 * numero2;
}