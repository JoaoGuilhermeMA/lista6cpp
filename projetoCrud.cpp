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
    int opcao, pos = 0;
    Tmanga manga, colecao[10];
    bool existeManga=false;

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
                for (int  i = 0; i < 10; i++)
                {
                    if(manga.id == colecao[i].id){
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
            cout << "\t5 - QUANTIDADE" << endl;
            cout << "\t6 - PREÇO UNIDADE" << endl;
            cout << "\t0 - VOLTAR" << endl;
            cin >> opcao;
            switch (opcao) 
            {
            case 1:
                cout << "Digite o id do manga" << endl;
                cin >> manga.id;

                for (int i = 0; i < pos; i++){
                    
                }
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            default:
                break;
            }
            
            break;
        case 5:
            cout << "\t\t\t LISTA DE MANGA" << endl;
            for (int i = 0; i < 10; i++)
            {
                cout << "\tID: " << colecao[i].id << endl;
                cout << "\tNOME: " << colecao[i].nome << endl;
                cout << "\tGENERO: " << colecao[i].genero << endl;
                cout << "\tAUTOR: " << colecao[i].autor << endl;
                cout << "\tQUANTIDADE UNIDADE: " << colecao[i].qntd << endl;
                cout << "\tPREÇO: " << colecao[i].preco << endl << endl;
            }
            cin >> opcao;
            cout << "\e[H\e[2J";
            break;
        default:
            break;
        }
    } while (opcao != 6);
}