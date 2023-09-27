#include <iostream>
#include <windows.h>
#include <iomanip>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);

    
  const int tamanho_Vetor = 10;
  float vetor_A[tamanho_Vetor]{1, -9, -0.5, 87, -2, 12, 5.55, 6, 32, -3.2};
  float quant_Negativ = 0, soma_Positiv = 0;

  // Verificando se é negativo ou positivo, se for negativo soma a quantidade de números, se for positivo soma todos os positivos.
  for (int i = 0; i < tamanho_Vetor; i++) {

    if (vetor_A[i] < 0){
        quant_Negativ = quant_Negativ + 1;
    } 
    else {
        soma_Positiv = soma_Positiv + vetor_A[i];
    }
  }


  // Imprimindo os valores que estão no vetor_A
  cout << "Valores armazenados no vetor: ";
  for (int i = 0; i < tamanho_Vetor; i++) {

    cout << vetor_A[i] << " "; 

  }

  // Imprimindo a quantidade de números negativos
  cout << endl << endl << "Quantidade de números negativos: " << quant_Negativ;

  // Imprimindo a soma entre os números positivos
  cout << endl << endl << "Soma dos números positivos: " << setprecision(2) << fixed << soma_Positiv;


 
 
  cout << endl << endl;
  return 0;
}