#include <iostream>
#include <cmath>
int main (void)
{
  int valor1=0, valor2=0;
  std::cout <<"Hola, ingrese dos valores\n";
  std::cin >>valor1;
  std::cin >>valor2;
  std::cout <<"suma\n";
  std::cout <<valor1+valor2<< "\n";
  std::cout <<"resta\n";
  std::cout <<valor1-valor2<< "\n";
  std::cout <<"multiplicación\n";
  std::cout <<valor1*valor2<< "\n";
	    if (valor1>valor2){
	      std::cout << "El primer valor es mayor\n";
		}
	    if (valor1==valor2){
	      std::cout << "Son iguales\n";
	        }
	    if (valor1<valor2) {
	      std::cout << "El segundo valor es mayor\n";
	    }
  return 0;
}
