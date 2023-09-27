#include <iostream>
#include <windows.h>
#include <iomanip>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  float salario_Atual, salario_reajustado, reajust;
  const float salario_Minimo = 1320;
  string name;

  cout << "Por favor informe seu nome: ";
  cin >> name;

  cout << "Olá, " << name << "! Agora preciso que me informe seu salário atual: R$ ";
  cin >> salario_Atual;

  if (salario_Atual <= salario_Minimo) {

    reajust = 0.30 * salario_Atual;
    salario_reajustado = salario_Atual + reajust;
    
    std::cout << name << ", seu salário será reajustado em 30%, a partir de você recebe: R$ " << std::fixed << std::setprecision(2) << salario_reajustado << endl;

  } else if (salario_Atual > salario_Minimo && salario_Atual < 2*salario_Minimo) {

    reajust = 0.20 * salario_Atual;
    salario_reajustado = salario_Atual + reajust;
    
    
    std::cout << name << ", seu salário será reajustado em 20%, a partir de você recebe: R$ " << std::fixed << std::setprecision(2) << salario_reajustado << endl;

  } else if (salario_Atual > 2*salario_Minimo && salario_Atual < 3*salario_Minimo) {

    reajust = 0.15 * salario_Atual;
    salario_reajustado = salario_Atual + reajust;
    
    std::cout << name << ", seu salário será reajustado em 15%, a partir de você recebe: R$ " << std::fixed << std::setprecision(2) << salario_reajustado << endl;

  } else {

    reajust = 0.10 * salario_Atual;
    salario_reajustado = salario_Atual + reajust;
    
    std::cout << name << ", seu salário será reajustado em 10%, a partir de você recebe: R$ " << std::fixed << std::setprecision(2) << salario_reajustado << endl;

  }
 
 
  cout << endl << endl;
  return 0;
}