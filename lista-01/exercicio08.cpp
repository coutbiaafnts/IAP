#include <iostream>
#include <windows.h>
#include <iomanip>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  float preco_Custo, lucro, porcent, preco_Venda;

  cout << "Digite o valor que foi necessário para fabricar o produto: R$ ";
  cin >> preco_Custo;

  cout << "Qual a margem de lucro desejada? %";
  cin >> porcent;

  lucro = (porcent/100) * preco_Custo;
  preco_Venda = preco_Custo + lucro;

  std::cout << "Preço de custo: R$ " << std::fixed << std::setprecision(2) << preco_Custo << endl;
  std::cout << "Porcentagem de lucro: % " << std::fixed << std::setprecision(2) << porcent << endl;
  std::cout << "Preço de venda: R$ " << std::fixed << std::setprecision(2) << preco_Venda << endl;
  std::cout << "Lucro obtido: R$ " << std::fixed << std::setprecision(2) << lucro << endl;

  cout << endl << endl;
  return 0;
}