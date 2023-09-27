#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  float tempo_Gasto, velocidade_Media_Trecho;
  const int distance_Trecho = 50, velocidade_Maxima_Permitida = 80;

  cout << "Por favor, insira o tempo gasto para deslocar de [a] a [b] em (min): ";
  cin >> tempo_Gasto;

  velocidade_Media_Trecho = distance_Trecho / (tempo_Gasto/60);

  cout << "\nA sua velocidade média durante o trecho foi igual a " << velocidade_Media_Trecho << "km/h." << endl;

  if (velocidade_Media_Trecho > velocidade_Maxima_Permitida) {

    cout << "Tome cuidado, você andou acima da velocidade máxima permitida!" << endl;

  } else {

    cout << "Fique tranquilo, você não ultrapassou a velocidade máxima permitida!";
  }


 
 
  cout << endl << endl;
  return 0;
}