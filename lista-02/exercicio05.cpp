#include <iostream>
#include <windows.h>
#include <math.h> // Para utilizar sqrt()
#include <iomanip> // Para utilizar o std::setprecision(2) **para duas casas decimais**
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

  using namespace std;
 
  float delta, a, b, c, x1, x2;

  // Inserção dos dados necessários por meio do usuário
  cout << "Qual o valor de a? ";
  cin >> a;

  cout << endl << "E de b? ";
  cin >> b;

  cout << endl << "E por último c? ";
  cin >> c;

  // Calculando o valor de delta utilizando os dodos fornecidos
  delta =  b * b - 4 * a * c;
  

  // Atendendo a condição do enuciado, se o valor de delta for maior que 0 executa o cálculo de x1 e x2
  if (delta > 0){

    // calculando x1 e x2
    x1 = (-b + sqrt(delta)) / (2 * a); // sqrt(delta), para calcular a raiz de delta
    x2 = (-b - sqrt(delta)) / (2 * a); // sqrt(delta), para calcular a raiz de delta

    // imprimindo x1 e x2 (com 02 casas decimais)
    cout << endl << "Dados os valores a = " << a << ", b = " << b << " e c = " << c;
    std::cout << endl << std::fixed << "x1 = " << std::setprecision(2)  << x1 << " e x2 = " << std::setprecision(2)  << x2;

  } else { 
    
    cout << "Delta é menor que 0!";

  }
  
  cout << endl << endl;
  return 0;
}