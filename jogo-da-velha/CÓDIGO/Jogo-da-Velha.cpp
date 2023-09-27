#include <iostream>
#include <windows.h>

using namespace std;

// definindo número de linhas do tabuleiro
#define LINHAS 3

// definindo número de colunas do tabuleiro
#define COLUNAS 3

// matriz do tabuleiro, onde recebe os caracteres. Matriz definida pelo tamanho LINHAS e COLUNAS
char tabuleiro[LINHAS][COLUNAS] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

// definindo a quantidade de jogadores
const int num_Jogador = 2;

// vetor para guardar o nome dos jogadores
string nome_Jogador[num_Jogador];

// vetor para guardar o ícone escolhido pelo respectivo jogador
char icon_Jogador[num_Jogador];

// verifica se o jogo foi ganho | empate | determina o jogador da vez
bool win = false, empate, jogador_01 = true, jogador_02 = false, jogar_Novamente = false;

// variável que recebe a opção de jogar ou não, novamente
int new_Game;

// função que imprime o menu e recebe a opção escolhida
int menu()
{
    // variável que recebe o valor respectivo a cada opção do menu
    int op;

    // enquanto opção não for 1 ou 2, pede para inserir uma opção válida
    while (op > 2 || op < 1)
    {
        cout << "--------------------------------------------------------\n\n";
        cout << "\t| -- MENU PRINCIPAL (Jogo da Velha) --\n\t|\n";
        cout << "\t| 1 - Novo Jogo\n";
        cout << "\t| 2 - Sair\n\t|\n";
        cout << "\t| Opção: ";
        cin >> op;

        system("cls");

        // opção inválida para menu, repete
        if (op > 2 || op < 1)
        {
            cout << "--------------------------------------------------------\n\n";
            cout << "\t|Opção inválida!..." << endl;

            Sleep(1000);
            system("cls");

            cout << "--------------------------------------------------------\n\n";
            cout << "\t| -- MENU PRINCIPAL (Jogo da Velha) --\n\t|\n";
            cout << "\t| 1 - Novo Jogo\n";
            cout << "\t| 2 - Sair\n\t|\n";
            cout << "\t| Opção: ";
            cin >> op;

            system("cls");
        }
    }

    // retorna a opção escolhida
    return op;
}

// função para imprimir o tabuleiro do jogo
void cout_Tabuleiro()
{
    cout << "\t\t1   2   3\n";
    cout << endl;
    cout << "\t1\t" << tabuleiro[0][0] << " | " << tabuleiro[0][1] << " | " << tabuleiro[0][2] << endl;
    cout << "\t\t--|---|--\n";
    cout << "\t2\t" << tabuleiro[1][0] << " | " << tabuleiro[1][1] << " | " << tabuleiro[1][2] << endl;
    cout << "\t\t--|---|--\n";
    cout << "\t3\t" << tabuleiro[2][0] << " | " << tabuleiro[2][1] << " | " << tabuleiro[2][2] << endl;
}

// função para cadastrar jogador
void cadastro_Jogador()
{
    // TÍTULO DO MENU DE CADASTRO
    cout << "--------------------------------------------------------\n\n";
    cout << "\t| -- CADASTRO JOGADORES --\n\t|\n";

    // Inserindo nome do jogador
    for (int i = 0; i < num_Jogador; i++)
    {
        cout << "\n\t| • Insira o nome do(a) jogador(a) " << i + 1 << ": ";
        cin >> nome_Jogador[i];
    }

    // Inserindo o ícone do jogador 1
    cout << "\n\t| - " << nome_Jogador[0] << ", você quer (X) ou (O)? ";
    cin >> icon_Jogador[0];
    system("cls");

    // verificando se o caractere inserido é valido | Sim: cadastra o ícone | Não: continua pedindo para inserir um válido até inserir
    if (icon_Jogador[0] == 'X' || icon_Jogador[0] == 'x' || icon_Jogador[0] == 'O' || icon_Jogador[0] == 'o')
    {

        // caractére x, transforma x em X e já atribui O ao jogador 2
        if (icon_Jogador[0] == 'X' || icon_Jogador[0] == 'x')
        {
            icon_Jogador[0] = 'X';
            icon_Jogador[1] = 'O';

            cout << "--------------------------------------------------------\n\n";
            cout << "\t| • " << nome_Jogador[0] << " ficou com: " << icon_Jogador[0] << "\t|" << endl;
            cout << "\t| • " << nome_Jogador[1] << " ficou com: " << icon_Jogador[1] << "\t|" << endl;
            cout << "\n--------------------------------------------------------\n\n";
            Sleep(2000);
            system("cls");
        }

        // caractére o, transforma o em O e já atribui X ao jogador 2
        else
        {
            icon_Jogador[0] = 'O';
            icon_Jogador[1] = 'X';

            cout << "--------------------------------------------------------\n\n";
            cout << "\t| • " << nome_Jogador[0] << " ficou com: " << icon_Jogador[0] << "\t|" << endl;
            cout << "\t| • " << nome_Jogador[1] << " ficou com: " << icon_Jogador[1] << "\t|" << endl;
            cout << "\n--------------------------------------------------------\n\n";
            Sleep(2000);
            system("cls");
        }
    }

    // caractére inválido
    else
    {
        cout << "--------------------------------------------------------\n\n";
        cout << "\t| Opção inválida! ..." << endl;

        cout << "\n\t| - " << nome_Jogador[0] << ", você quer (X) ou (O)? ";
        cin >> icon_Jogador[0];
        system("cls");
    }
}

// função para resetar o tabuleiro
void reseta_tabuleiro()
{
    // transforma todos os espaços em caractére nulo
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            tabuleiro[i][j] = ' ';
        }
    }
}

// função que verifica se alguém ganhou
void verifica_Ganhou()
{
    // verifica se X ganhou
    if (((tabuleiro[0][0] == 'X') && (tabuleiro[0][1] == 'X') && (tabuleiro[0][2] == 'X')) ||
        ((tabuleiro[1][0] == 'X') && (tabuleiro[1][1] == 'X') && (tabuleiro[1][2] == 'X')) ||
        ((tabuleiro[2][0] == 'X') && (tabuleiro[2][1] == 'X') && (tabuleiro[2][2] == 'X')) ||
        ((tabuleiro[0][0] == 'X') && (tabuleiro[1][1] == 'X') && (tabuleiro[2][2] == 'X')) ||
        ((tabuleiro[2][0] == 'X') && (tabuleiro[1][1] == 'X') && (tabuleiro[0][2] == 'X')))
    {
        // se o jogador tiver ícone = X
        if (icon_Jogador[0] == 'X')
        {
            cout << "--------------------------------------------------------\n\n";
            cout << "\t| • Parabéns " << nome_Jogador[0] << ", você ganhou!";
        }
        else if (icon_Jogador[1] == 'X')
        {
            cout << "--------------------------------------------------------\n\n";
            cout << "\t| • Parabéns " << nome_Jogador[1] << ", você ganhou!";
        }
        win = true;
    }

    // verifica se O ganhou
    if (((tabuleiro[0][0] == 'O') && (tabuleiro[0][1] == 'O') && (tabuleiro[0][2] == 'O')) ||
        ((tabuleiro[1][0] == 'O') && (tabuleiro[1][1] == 'O') && (tabuleiro[1][2] == 'O')) ||
        ((tabuleiro[2][0] == 'O') && (tabuleiro[2][1] == 'O') && (tabuleiro[2][2] == 'O')) ||
        ((tabuleiro[0][0] == 'O') && (tabuleiro[1][1] == 'O') && (tabuleiro[2][2] == 'O')) ||
        ((tabuleiro[2][0] == 'O') && (tabuleiro[1][1] == 'O') && (tabuleiro[0][2] == 'O')))
    {
        // se o jogador tiver ícone = O
        if (icon_Jogador[0] == 'O')
        {
            cout << "--------------------------------------------------------\n\n";
            cout << "\t| • Parabéns " << nome_Jogador[0] << ", você ganhou!";
            cout << "\n\n--------------------------------------------------------";
        }
        else if (icon_Jogador[1] == 'O')
        {
            cout << "--------------------------------------------------------\n\n";
            cout << "\t| • Parabéns " << nome_Jogador[1] << ", você ganhou!";
            cout << "\n\n--------------------------------------------------------";
        }
        win = true;
    }

    // verifica empate
    if ((tabuleiro[0][0] != ' ') && (tabuleiro[0][1] != ' ') && (tabuleiro[0][2] != ' ') && (tabuleiro[1][0] != ' ') && tabuleiro[1][1] != ' ' && tabuleiro[1][2] != ' ' &&
        tabuleiro[2][0] != ' ' && tabuleiro[2][1] != ' ' && tabuleiro[2][2] != ' ')
    {
        // mensagem de empate
        cout << "--------------------------------------------------------\n\n";
        cout << "\t| • Velha! (EMPATE)" << endl;
        cout << "\n\n--------------------------------------------------------";
        win = true;
    }
}

// função que executa o jogo
int jogo()
{
    reseta_tabuleiro();
    int linha, coluna;
    win = false;

    do
    {
        // jogador 01
        if (jogador_01)
        {
            if (win)
            {
                continue;
            }

            // verifica se o valor digitado corresponde realmente a uma linha válida, caso contrário pede que insira uma linha até que seja válida
            do
            {
                cout << "--------------------------------------------------------\n\n";
                cout << "\t| -->>\t" << nome_Jogador[0] << ", é a sua vez de jogar!" << endl
                     << endl;

                cout_Tabuleiro();

                cout << "\n\n\t| Indique a linha que quer marcar entre (1 a 3): ";
                cin >> linha;

                if (linha < 1 || linha > 3)
                {
                    cout << "--------------------------------------------------------\n\n";
                    cout << "\t| • Linha inválida, tente novamente!";

                    Sleep(1000);
                    system("cls");
                }

            } while (linha < 1 || linha > 3);

            // verifica se o valor digitado corresponde realmente a uma coluna válida, caso contrário pede que insira uma coluna até que seja válida
            do
            {
                cout << "\n\n\t| Indique a coluna que quer marcar entre (1 a 3): ";
                cin >> coluna;

                if (coluna < 1 || coluna > 3)
                {
                    cout << "--------------------------------------------------------\n\n";
                    cout << "\t| • Coluna inválida, tente novamente!";
                    Sleep(1000);
                    cout << "\n\n";
                }
            } while (coluna < 1 || coluna > 3);

            // verifica se a célula (casa) inserida está prenchida, se estiver retorna uma mensagem de erro e pede que escolha uma célula até que seja válida
            while (tabuleiro[linha - 1][coluna - 1] != ' ')
            {
                // se a célua estiver preenchida, solicia uma nova célula ao usuário
                cout << "--------------------------------------------------------\n\n";
                cout << "\t| A célula selecionada já está ocupada, tente novamente." << endl;
                Sleep(1000);
                system("cls");
                // verifica se o valor digitado corresponde realmente a uma coluna válida, caso contrário pede que insira uma coluna até que seja válida
                do
                {
                    cout << "--------------------------------------------------------\n\n";
                    cout << "\t| -->>\t" << nome_Jogador[0] << ", é a sua vez de jogar!" << endl
                         << endl;

                    cout_Tabuleiro();

                    cout << "\n\n\t| Indique a linha que quer marcar entre (1 a 3): ";
                    cin >> linha;

                    if (linha < 1 || linha > 3)
                    {
                        cout << "--------------------------------------------------------\n\n";
                        cout << "\t| • Linha inválida, tente novamente!";

                        Sleep(1000);
                        system("cls");
                    }
                } while (linha < 1 || linha > 3);

                // verifica se o valor digitado corresponde realmente a uma coluna válida, caso contrário pede que insira uma coluna até que seja válida
                do
                {
                    cout << "\n\n\t| Indique a coluna que quer marcar entre (1 a 3): ";
                    cin >> coluna;

                    if (coluna < 1 || coluna > 3)
                    {
                        cout << "--------------------------------------------------------\n\n";
                        cout << "\t| • Coluna inválida, tente novamente!";

                        Sleep(1000);
                        cout << "\n\n";
                    }
                } while (coluna < 1 || coluna > 3);
            }

            // linpando a tela e atribuindo o ícone do jogador da vez, à célula escolhida
            system("cls");
            tabuleiro[linha - 1][coluna - 1] = icon_Jogador[0];

            jogador_01 = false;
            jogador_02 = true;
            verifica_Ganhou();
        }

        // jogador 02
        if (jogador_02)
        {
            if (win)
            {
                continue;
            }
            // verifica se o valor digitado corresponde realmente a uma linha válida, caso contrário pede que insira uma linha até que seja válida
            do
            {
                cout << "--------------------------------------------------------\n\n";
                cout << "\t| -->>\t" << nome_Jogador[1] << ", é a sua vez de jogar!" << endl
                     << endl;

                cout_Tabuleiro();

                cout << "\n\n\t| Indique a linha que quer marcar entre (1 a 3): ";
                cin >> linha;

                if (linha < 1 || linha > 3)
                {
                    cout << "--------------------------------------------------------\n\n";
                    cout << "\t| • Linha inválida, tente novamente!";

                    Sleep(1000);
                    system("cls");
                }
            } while (linha < 1 || linha > 3);
            // verifica se o valor digitado corresponde realmente a uma coluna válida, caso contrário pede que insira uma coluna até que seja válida
            do
            {
                cout << "\n\n\t| Indique a coluna que quer marcar entre (1 a 3): ";
                cin >> coluna;

                if (coluna < 1 || coluna > 3)
                {
                    cout << "--------------------------------------------------------\n\n";
                    cout << "\t| • Coluna inválida, tente novamente!";

                    Sleep(1000);
                    cout << "\n\n";
                }
            } while (coluna < 1 || coluna > 3);

            // verifica se a célula (casa) inserida está prenchida, se estiver retorna uma mensagem de erro e pede que escolha uma célula até que seja válida
            while (tabuleiro[linha - 1][coluna - 1] != ' ')
            {
                // se a célua estiver preenchida, solicia uma nova célula ao usuário
                cout << "--------------------------------------------------------\n\n";
                cout << "\t| A célula selecionada já está ocupada, tente novamente." << endl;

                Sleep(1000);
                system("cls");

                // verifica se o valor digitado corresponde realmente a uma coluna válida, caso contrário pede que insira uma coluna até que seja válida
                do
                {
                    cout << "--------------------------------------------------------\n\n";
                    cout << "\t| -->>\t" << nome_Jogador[1] << ", é a sua vez de jogar!" << endl
                         << endl;

                    cout_Tabuleiro();

                    cout << "\n\n\t| Indique a linha que quer marcar entre (1 a 3): ";
                    cin >> linha;

                    if (linha < 1 || linha > 3)
                    {
                        cout << "--------------------------------------------------------\n\n";
                        cout << "\t| • Linha inválida, tente novamente!";

                        Sleep(1000);
                        system("cls");
                    }
                } while (linha < 1 || linha > 3);

                // verifica se o valor digitado corresponde realmente a uma coluna válida, caso contrário pede que insira uma coluna até que seja válida
                do
                {
                    cout << "\n\n\t| Indique a coluna que quer marcar entre (1 a 3): ";
                    cin >> coluna;

                    if (coluna < 1 || coluna > 3)
                    {
                        cout << "--------------------------------------------------------\n\n";
                        cout << "\t| • Coluna inválida, tente novamente!";

                        Sleep(1000);
                        cout << "\n\n";
                    }
                } while (coluna < 1 || coluna > 3);
            }

            // linpando a tela e atribuindo o ícone do jogador da vez, à célula escolhida
            system("cls");
            tabuleiro[linha - 1][coluna - 1] = icon_Jogador[1];

            jogador_01 = true;
            jogador_02 = false;
            verifica_Ganhou();
        }
    } while (win == false);
}

void jogo_Novo()
{
    cout << "\n\n";

    // imprime a pergunta até que a opção seja válida
    do
    {
        cout << "--------------------------------------------------------\n\n";
        cout << "\t| ----- >>> Deseja jogar novamente (1- Sim || 2- Não)? ";
        cin >> new_Game;

        if (new_Game < 1 || new_Game > 2)
        {
            cout << "\n\t| • Opção inválida, tente novamente!";
            Sleep(2000);
            system("cls");
        }

        Sleep(2000);
        system("cls");
    } while (new_Game < 1 || new_Game > 2);
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    // variável para receber opção do menu
    int opcao;
    // recebe o valor do menu
    opcao = menu();

    // executa as opções do menu
    switch (opcao)
    {
    case 1:

        do
        {
            // cadastra jogadores
            cadastro_Jogador();

            // executa o jogo
            jogo();

            // imprime a pergunta "jogar novamente", enquanto jogar novamente = true
            jogo_Novo();

            // repete o jogo
            if (new_Game == 1)
            {
                jogar_Novamente = true;
            }

            // sai do jogo
            if (new_Game == 2)
            {
                jogar_Novamente = false;
            }

            // após término do jogo, pergunta se quer jogar novamente
        } while (jogar_Novamente == true);

    case 2:
        break;
    }

    return 0;
}