#include <iostream>

using namespace std;

struct Tmanga
{
    int id = 0;
    int qntd;
    string nome;
    float preco;
    string genero;
    string autor;
};

int main()
{
    int opcao, pos = 0, quebrar;
    Tmanga manga, colecao[10];
    bool existeManga = false;

    do
    {
        manga.id = 0;
        cout << "\t\t\t MENU PRINCIPAL" << endl;
        cout << "\t 1 - Incluir Manga" << endl;
        cout << "\t 2 - Buscar Manga" << endl;
        cout << "\t 3 - Alterar um manga" << endl;
        cout << "\t 4 - Excluir um manga" << endl;
        cout << "\t 5 - Listar os manga existentes" << endl;
        cout << "\t 6 - Sair do sistema" << endl;
        cin >> opcao;
        cout << "\e[H\e[2J";

        switch (opcao)
        {
        case 1:
            cout << "\t\t\t CADASTRO DE MANGA" << endl;
            do
            {
                cout << "\tID: ";
                cin >> manga.id;
                existeManga = false;
                for (int i = 0; i < 10; i++)
                {
                    if (manga.id == colecao[i].id)
                    {
                        existeManga = true;
                        break;
                    }
                }

            } while (existeManga);
            getchar();
            cout << "\n\tNOME: ";
            getline(cin, manga.nome);
            cout << "\n\tGENERO: ";
            getline(cin, manga.genero);
            cout << "\n\tAUTOR: ";
            getline(cin, manga.autor);
            cout << "\n\tQUANTIDADE: ";
            cin >> manga.qntd;
            cout << "\n\tPREÇO UNIDADE: ";
            cin >> manga.preco;

            colecao[pos] = manga;
            pos++;
            cout << "\e[H\e[2J";
            break;
        case 2:
            cout << "\t\t\t BUSCA DE MANGA" << endl;
            cout << "\n\tPelo oque deseja buscar?" << endl;
            cout << "\t1 - ID" << endl;
            cout << "\t2 - NOME" << endl;
            cout << "\t3 - GENERO" << endl;
            cout << "\t4 - AUTOR" << endl;
            cout << "\t0 - VOLTAR" << endl;
            cin >> opcao;
            getchar();
            switch (opcao)
            {
            case 1:
                cout << "Digite o id do manga:" << endl;
                cin >> manga.id;
                for (int i = 0; i < pos; i++)
                {
                    if (manga.id == colecao[i].id)
                    {
                        if (colecao[i].id > 0)
                        {
                            cout << "\t\t\t MANGA ENCONTRADO" << endl;
                            cout << "\tID: " << colecao[i].id << endl;
                            cout << "\tNOME: " << colecao[i].nome << endl;
                            cout << "\tGENERO: " << colecao[i].genero << endl;
                            cout << "\tAUTOR: " << colecao[i].autor << endl;
                            cout << "\tQUANTIDADE: " << colecao[i].qntd << endl;
                            cout << "\tPREÇO UNIDADE: " << colecao[i].preco << endl
                                 << endl;
                            cout << "0 - sair" << endl;
                            cin >> quebrar;
                            cout << "\e[H\e[2J";
                        }
                        break;
                    }
                }
                break;
            case 2:
                cout << "Digite o nome do manga:" << endl;
                getline(cin, manga.nome);
                cout << "\e[H\e[2J";
                for (int i = 0; i < pos; i++)
                {
                    if (colecao[i].id > 0)
                    {
                        if (manga.nome == colecao[i].nome)
                        {
                            cout << "\t\t\t MANGA ENCONTRADO" << endl;
                            cout << "\tID: " << colecao[i].id << endl;
                            cout << "\tNOME: " << colecao[i].nome << endl;
                            cout << "\tGENERO: " << colecao[i].genero << endl;
                            cout << "\tAUTOR: " << colecao[i].autor << endl;
                            cout << "\tQUANTIDADE: " << colecao[i].qntd << endl;
                            cout << "\tPREÇO UNIDADE: " << colecao[i].preco << endl
                                 << endl;
                        }
                    }
                }
                cout << "0 - sair" << endl;
                cin >> quebrar;
                cout << "\e[H\e[2J";
                break;
            case 3:
                cout << "Digite o genero do manga: " << endl;
                getline(cin, manga.genero);
                cout << "\e[H\e[2J";
                for (int i = 0; i < pos; i++)
                {
                    if (colecao[i].id > 0)
                    {
                        if (manga.genero == colecao[i].genero)
                        {
                            cout << "\t\t\t MANGA ENCONTRADO" << endl;
                            cout << "\tID: " << colecao[i].id << endl;
                            cout << "\tNOME: " << colecao[i].nome << endl;
                            cout << "\tGENERO: " << colecao[i].genero << endl;
                            cout << "\tAUTOR: " << colecao[i].autor << endl;
                            cout << "\tQUANTIDADE: " << colecao[i].qntd << endl;
                            cout << "\tPREÇO UNIDADE: " << colecao[i].preco << endl
                                 << endl;
                        }
                    }
                }
                cout << "0 - sair" << endl;
                cin >> quebrar;
                break;
            case 4:
                cout << "Digite do autor do manga: " << endl;
                getline(cin, manga.genero);
                cout << "\e[H\e[2J";
                for (int i = 0; i < pos; i++)
                {
                    if (colecao[i].id > 0)
                    {
                        if (manga.autor == colecao[i].autor)
                        {
                            cout << "\t\t\t MANGA ENCONTRADO" << endl;
                            cout << "\tID: " << colecao[i].id << endl;
                            cout << "\tNOME: " << colecao[i].nome << endl;
                            cout << "\tGENERO: " << colecao[i].genero << endl;
                            cout << "\tAUTOR: " << colecao[i].autor << endl;
                            cout << "\tQUANTIDADE: " << colecao[i].qntd << endl;
                            cout << "\tPREÇO UNIDADE: " << colecao[i].preco << endl
                                 << endl;
                        }
                    }
                }
                cout << "0 - sair" << endl;
                cin >> quebrar;
                break;
            case 6:
                break;
            default:
                break;
            }
            cout << "\e[H\e[2J";
            break;
        case 3:
            cout << "\t\t\t ALTERAR UM MANGA" << endl;
            cout << "\n\tQual manga deseja alterar? " << endl;
            cout << "\t0 - sair" << endl;
            for (int i = 0; i < pos; i++)
            {
                if (colecao[i].id > 0)
                {
                    cout << "\tID: " << colecao[i].id << " | NOME: " << colecao[i].nome << endl;
                }
            }
            do
            {
                cin >> manga.id;
            } while (manga.id > pos || manga.id < 0);
            cout << "\e[H\e[2J";
            if (manga.id == 0)
            {
                break;
            }
            do
            {
                cout << "O que deseja alterar?" << endl;
                cout << "1 - nome" << endl;
                cout << "2 - genero" << endl;
                cout << "3 - autor" << endl;
                cout << "4 - quantidade" << endl;
                cout << "5 - preco unidade" << endl;
                cout << "6 - sair" << endl;
                cin >> quebrar;
                getchar();
                cout << "\e[H\e[2J";
                for (int i = 0; i < pos; i++)
                {
                    if (colecao[i].id == manga.id)
                    {
                        switch (quebrar)
                        {
                        case 1:
                            cout << "Digite o novo nome:" << endl;
                            getline(cin, manga.nome);
                            colecao[i].nome = manga.nome;
                            break;
                        case 2:
                            cout << "Digite o novo genero: " << endl;
                            getline(cin, manga.genero);
                            colecao[i].genero = manga.genero;
                            break;
                        case 3:
                            cout << "Digite o novo autor" << endl;
                            getline(cin, manga.autor);
                            colecao[i].autor = manga.autor;
                            break;
                        case 4:
                            cout << "Digite a nova quantidade:" << endl;
                            cin >> manga.qntd;
                            getchar();
                            colecao[i].qntd = manga.qntd;
                            break;
                        case 5:
                            cout << "Digite o novo preco da unidade" << endl;
                            cin >> manga.preco;
                            getchar();
                            colecao[i].preco = manga.preco;
                            break;
                        default:
                            break;
                        }
                        cout << "\e[H\e[2J";
                        break;
                    }
                }
            } while (quebrar != 6);
            break;
        case 4:
            do
            {
                cout << "\tQual manga deseja excluir? (escolha o id)" << endl;
                for (int i = 0; i < pos; i++)
                {
                    if (colecao[i].id > 0)
                    {
                        cout << "\tID: " << colecao[i].id << " | NOME: " << colecao[i].nome << endl;
                    }
                }
                cout << "\t0 - sair" << endl;
                cin >> quebrar;
                for (int i = 0; i < pos; i++)
                {
                    if (quebrar == colecao[i].id)
                    {
                        colecao[i].id = 0;
                    }
                }
            } while (quebrar != 0);
            cout << "\e[H\e[2J";
            break;
        case 5:
            cout << "\t\t\t LISTA DE MANGA" << endl;
            for (int i = 0; i < pos; i++)
            {
                if (colecao[i].id > 0)
                {
                    cout << "\tID: " << colecao[i].id << endl;
                    cout << "\tNOME: " << colecao[i].nome << endl;
                    cout << "\tGENERO: " << colecao[i].genero << endl;
                    cout << "\tAUTOR: " << colecao[i].autor << endl;
                    cout << "\tQUANTIDADE UNIDADE: " << colecao[i].qntd << endl;
                    cout << "\tPREÇO: " << colecao[i].preco << endl
                         << endl;
                }
            }
            cin >> opcao;
            cout << "\e[H\e[2J";
            break;
        default:
            break;
        }
    } while (opcao != 6);
}