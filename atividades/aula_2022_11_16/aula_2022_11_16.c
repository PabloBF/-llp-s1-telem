#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void mostrar_tela02()
{
    char opcao;
    system("cls");
    wprintf(L"Tela 02\n");
    scanf("%c", &opcao);
    fflush(stdin);
}

void mostrar_tela03()
{
    char opcao;
    system("cls");
    wprintf(L"Tela 03\n");
    scanf("%c", &opcao);
    fflush(stdin);
}

void mostrar_tela01()
{
    char opcao;
    do
    {
        system("cls");
        wprintf(L"Cadastro de alunos\n");
        wprintf(L"------------------\n");
        wprintf(L"1 - Inserir aluno\n");
        wprintf(L"2 - Mostrar lista\n");
        wprintf(L"3 - Fim\n");
        wprintf(L"\n\n");
        wprintf(L"Entre opção -> ");
        scanf("%c", &opcao);
        fflush(stdin);
        switch (opcao)
        {
            case '1':
                mostrar_tela02();
                break;
            case '2':
                mostrar_tela03();
                break;
            case '3':
                wprintf(L"FIM.\n");
                break;
        }
    } while (opcao != '3');
}

int main() {
    char opcao;
    setlocale(LC_ALL, "Portuguese");
    mostrar_tela01();
    return 0;
}
