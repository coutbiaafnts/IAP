#include <iostream>
#include <windows.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    string frase;

    // leitura da frase
    cout << "Digite uma frase: ";
    cin >> frase;

    // remove espaços em branco e converte para letras minúsculas
    frase.erase(remove_if(frase.begin(), frase.end(), ::isspace), frase.end());
    transform(frase.begin(), frase.end(), frase.begin(), ::tolower);

    // verifica se a frase é palíndromo
    bool palindromo = true;
    int tam = frase.size();
    for (int i = 0; i < tam / 2; i++)
    {
        if (frase[i] != frase[tam - i - 1])
        {
            palindromo = false;
            break;
        }
    }

    // exibição do resultado
    if (palindromo)
    {
        cout << "A frase '" << frase << "' e palindromo." << endl;
    }
    else
    {
        cout << "A frase '" << frase << "' nao e palindromo." << endl;
    }

    cout << endl
         << endl;
    return 0;
}