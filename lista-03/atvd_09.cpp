#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int k;
    string mensagem;


    cout << "Digite o valor de k: ";
    cin >> k;
    cin.ignore(); 
    cout << "Digite a mensagem a ser criptografada: ";
    getline(cin, mensagem);

    
    for (char &c : mensagem)
    {
        if (isalpha(c))
        {                                       
            char base = isupper(c) ? 'A' : 'a'; 
            c = (c - base + k) % 26 + base;     
        }
    }

   
    cout << "Mensagem criptografada: " << mensagem << endl;

    return 0;
}
