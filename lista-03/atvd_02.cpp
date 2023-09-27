#include <iostream>
#include <windows.h>
#include <iomanip>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  float vetor_A[5];
  float vetor_B[5];

  // Lendo os valores do vetor_A, calculando e armazenando seus quadrados no vetor_B
  for (int i = 0; i < 5; i++) {
    cout << "Insira o " << i + 1 << "° valor: ";
    cin >> vetor_A[i];
    vetor_B[i] = vetor_A[i] * vetor_A[i];
  }
 
  system("cls");

  // Imprimindo os valores inseridos no vetor_A
  cout << "Valores inseridos: ";
  for (int i = 0; i < 5; i++) {
    cout << vetor_A[i] << "\t\t";
  }

  // Imprimindo os quadrados do vetor_A que foram armazenados no vetor_B
  cout << endl << endl << "Os quadrados dos valores inseridos são: ";
  for (int i = 0; i < 5; i++) {
    cout <<  setprecision(2) << fixed << vetor_B[i] << "\t\t";
  }
 
  cout << endl << endl;
  return 0;
}