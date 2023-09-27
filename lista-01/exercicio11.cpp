#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  float custo_Novo, custo_Fabrica, result_percent_Dist, result_Impost;
  const float percent_Dist = 28 , Impost = 39;

  cout << "Por favor, informe o custo para fabricar o carro: R$ ";
  cin >> custo_Fabrica;

  result_percent_Dist = (percent_Dist/100) * custo_Fabrica;
  result_Impost = (result_Impost/100) * custo_Fabrica;

  custo_Novo = custo_Fabrica + result_percent_Dist + result_Impost;

  cout << "\nO valor final para comprar o carro é equivalente a: R$ " << custo_Novo;
 
 
  cout << endl << endl;
  return 0;
}