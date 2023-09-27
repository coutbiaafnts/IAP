
#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  int idade, condicao, quantid_Mulher_Menor = 0, quantid_Total_Menor = 0, quantid_Homem_Adulto = 0, genero;
  string name;

  do {
    
    cout << "Este é o último perfil a ser cadastrado? (1- sim | 2- não) --->  ";
    cin >> condicao;

    cout << "\nDigite o nome: ";
    cin >> name;

    cout << "\nAgora preciso da idade: ";
    cin >> idade;

    cout << "\nMe diga o gênero (1- Feminino | 2- Masculino): ";
    cin >> genero;

    if (genero == 1 && idade < 18){

        quantid_Mulher_Menor = quantid_Mulher_Menor + 1;

    } else if (idade < 18 && genero != 1){
        
        quantid_Total_Menor = quantid_Mulher_Menor + quantid_Total_Menor + 1;

    } else if (idade >= 18 && genero == 2){

        quantid_Homem_Adulto = quantid_Homem_Adulto + 1;

    } else {

      cout << endl;

    }

  } while (condicao != 1);

  cout << "De acordo com os perfis cadastrado, fizemos a seguinte análise: " << endl << endl;
  cout << "Número de mulheres menores de idade: " << quantid_Mulher_Menor << endl;
  cout << "Número total de pessoas menores de idade: " << quantid_Total_Menor << endl;
  cout << "Número de homens adultos: " << quantid_Homem_Adulto << endl;
 
 
  cout << endl << endl;
  return 0;
}