#include <iostream>
#include <windows.h>
#include <iomanip>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  const float valor_Gasolina =  5.00, valor_Etanol = 3;

  float km_Gasolina, km_Etanol, distance, combust, custo_EstimG, custo_EstimE;

  cout << "Por gentileza, quantos km/L seu carro faz com gasolina? ";
  cin >> km_Gasolina;

  cout << endl << "E com etanol? ";
  cin >> km_Etanol;

  cout << endl << "Você pretende percorrer qual distância (km)? ";
  cin >> distance;

  cout << endl << "Vai abastecer com gasolina ou etanol (1- Gasolina | 2- Etanol)? ";
  cin >> combust;

  if (combust == 1) {

    custo_EstimG = valor_Gasolina * (distance/km_Gasolina);
    custo_EstimE = valor_Etanol * (distance/km_Etanol);

    cout << "Abastecendo com Gasolina, seu custo estimado ser igual a R$" << setprecision(2) << fixed << custo_EstimG << endl;
    cout << "Porém, se abastacer com Etanol será igual a R$" << setprecision(2) << fixed << custo_EstimE << endl;
  
  } else if (combust == 2) {

    custo_EstimG = valor_Gasolina * (distance/km_Gasolina);
    custo_EstimE = valor_Etanol * (distance/km_Etanol);

    cout << "Abastecendo com Etanol, seu custo estimado ser igual a R$" << setprecision(2) << fixed << custo_EstimE << endl;
    cout << "Porém, se abastacer com Gasolina será igual a R$" << setprecision(2) << fixed << custo_EstimG << endl;

  } else {

    cout << "Opção inválida, certifique-se de ter inserido (1- Gasolina | 2- Etanol)";

  }
 
 
  cout << endl << endl;
  return 0;
}