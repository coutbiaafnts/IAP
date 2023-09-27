#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  // Declarando vetor_A com 6 números inteiros armazenados
  int vetor_A [6] {1, 0, 5, -2, -5, 7};
  
  // Armazenando a soma dos valores das posições 0, 1 e 5 do vetor_A
  int soma = vetor_A[0] + vetor_A[1] + vetor_A[5];
  
  // Imprimindo na tela o resultado da soma
  cout << "A soma entre os valores da posição 0, 1 e 5 é igual a: " << soma << endl << endl;

  // Atribuindo 100 ao vetor_A na posição 4
  vetor_A[4] = 100;

  // Imprimindo na tela o valor de cada posição no vetor_A
  cout << "Todos os valor armazenados no vetor_A: " << endl;
  cout << vetor_A[0] << "\t" << vetor_A[1] << "\t" << vetor_A[2] << "\t" << vetor_A[3] << "\t" << vetor_A[4] << "\t" << vetor_A[5] <<endl;

 
 
  cout << endl << endl;
  return 0;
}