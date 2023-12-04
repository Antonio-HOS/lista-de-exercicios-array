#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

#define C_BLACK "\033[30m"
#define C_RED "\033[31m"
#define C_GREEN "\033[32m"
#define C_YELLOW "\033[33m"
#define C_BLUE "\033[34m"
#define C_MAGENTA "\033[35m"
#define C_CYAN "\033[36m"
#define C_GRAY "\033[37m"

// AS PALAVRAS VÃO SER:
// UESC
// UNIVERSIDADE
// ATIVIDADE
// POKER
// ALLWIN
// PROGRAMACAO
// BASICAMENTE
   int final=0;
int errou()
{
    printf(C_RED "nao foi dessa vez, tente novamente!" C_GRAY);


}

int acertou()
{
    printf(C_GREEN "BOA VOCE ACERTOU!!" C_GRAY);
        final++;
}

int mostrar(char a[][13], int tam)
{
    printf("\n\n" C_BLUE);
    for (int i = 0; i < tam; i++)
    {
        for (int w = 0; w < 13; w++)
        {
            printf(" %c", a[i][w]);
        }
        printf("\n");
    }
    printf("" C_GRAY);

    printf("dicas:\n 1-->o que os alunos costumam jogar com cartas e fichas");
    printf("\n 2-->o que os professores constumam passar para colocar o conteudo em pratica");
    printf("\n 3-->movimento em que o jogador aposra tudo");
    printf("\n 4-->a materia de agente exercita a -----------");
    printf("\n 5-->Sigla da istituicao que estamos");
    printf("\n 6-->definitivamente nao e uma faculdade e sim uma...");
    printf("\n 7-->vicio de fala que deve-se evitar em apresentacoes");
}

int main()
{

    char arr[13][13];

    for (int i = 0; i < 13; i++)
    {
        for (int w = 0; w < 13; w++)
        {
             arr[i][w] = 176;
           
        }
    }
    // basicamente
    for (int i = 1; i < 12; i++)
    {
        arr[i][11] = '7';
    }
    // universidade
    for (int i = 0; i < 12; i++)
    {
        arr[1][i] = '6';
    }

    // uesc
    for (int i = 1; i < 5; i++)
    {
        arr[i][0] = '5';
    }

    // programacao
    for (int i = 0; i < 10; i++)
    {
        arr[i][5] = '4';
    }
    // allwin
    for (int i = 5; i < 11; i++)
    {
        arr[5][i] = '3';
    }
    // atividade

    for (int i = 1; i < 10; i++)
    {
        arr[i][9] = '2';
    }
    // poker
    for (int i = 4; i < 9; i++)
    {
        arr[10][i] = '1';
    }

    mostrar(arr, 13);

    int nmr;
    int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0, p6 = 0, p7 = 0;
 
    while (final != 7)
    {

        char palavra[6];
        printf("\nescolha um para fazer?[1-7]");
        scanf("%i", &nmr);
        if (nmr == 1)
        {
            if (p1 == 1)
            {
                printf("\n\nA ALTERINATIVA JA FOI RESPONDIDA\n\n");
            }
            else
            {
                printf("\ndigite a palavra que voce esta pensando;\n");
                scanf("%s", palavra);

                if (strcmp(palavra, "poker") == 0)
                {
                    acertou();
                    arr[10][4] = 'p';
                    arr[10][5] = 'o';
                    arr[10][6] = 'k';
                    arr[10][7] = 'e';
                    arr[10][8] = 'r';
                    mostrar(arr, 13);
                    p1 = 1;
                }
                else
                {
                    printf("nao foi dessa vez, tente novamente!");
                    mostrar(arr, 13);
                }
            }
        }
        else if (nmr == 2)
        {
            if (p2 == 1)
            {
                printf("\n\nA ALTERINATIVA JA FOI RESPONDIDA\n\n");
            }
            else
            {
                printf("\ndigite a palavra que voce esta pensando;\n");
                scanf("%s", palavra);

                if (strcmp(palavra, "atividade") == 0)
                {
                    acertou();
                    arr[1][9] = 'a';
                    arr[2][9] = 't';
                    arr[3][9] = 'i';
                    arr[4][9] = 'v';
                    arr[5][9] = 'i';
                    arr[6][9] = 'd';
                    arr[7][9] = 'a';
                    arr[8][9] = 'd';
                    arr[9][9] = 'e';
                    mostrar(arr, 13);
                    p2 = 1;
                }
                else
                {
                    errou();
                    mostrar(arr, 13);
                }
            }
        }
        else if (nmr == 3)
        {
            if (p3 == 1)
            {
                printf("\n\nA ALTERINATIVA JA FOI RESPONDIDA\n\n");
            }
            else
            {
                printf("\ndigite a palavra que voce esta pensando;\n");
                scanf("%s", palavra);

                if (strcmp(palavra, "allwin") == 0)
                {
                    acertou();
                    arr[5][5] = 'a';
                    arr[5][6] = 'l';
                    arr[5][7] = 'l';
                    arr[5][8] = 'w';
                    arr[5][9] = 'i';
                    arr[5][10] = 'n';

                    mostrar(arr, 13);
                    p3 = 1;
                }
                else
                {
                    errou();
                    mostrar(arr, 13);
                }
            }
        }
        else if (nmr == 4)
        {
            if (p4 == 1)
            {
                printf("\n\nA ALTERINATIVA JA FOI RESPONDIDA\n\n");
            }
            else
            {
                printf("\ndigite a palavra que voce esta pensando;\n");
                scanf("%s", palavra);

                if (strcmp(palavra, "programacao") == 0)
                {
                    acertou();
                    arr[0][5] = 'p';
                    arr[1][5] = 'r';
                    arr[2][5] = 'o';
                    arr[3][5] = 'g';
                    arr[4][5] = 'r';
                    arr[5][5] = 'a';
                    arr[6][5] = 'm';
                    arr[7][5] = 'a';
                    arr[8][5] = 'c';
                    arr[9][5] = 'a';
                    arr[10][5] = 'o';
                    mostrar(arr, 13);
                    p4 = 1;
                }
                else
                {
                    errou();
                    mostrar(arr, 13);
                }
            }
        }
        else if (nmr == 5)
        {
            if (p5 == 1)
            {
                printf("\n\nA ALTERINATIVA JA FOI RESPONDIDA\n\n");
            }
            else
            {
                printf("\ndigite a palavra que voce esta pensando;\n");
                scanf("%s", palavra);

                if (strcmp(palavra, "uesc") == 0)
                {
                    acertou();
                    arr[1][0] = 'u';
                    arr[2][0] = 'e';
                    arr[3][0] = 's';
                    arr[4][0] = 'c';

                    mostrar(arr, 13);
                    p5 = 1;
                }
                else
                {
                    errou();
                    mostrar(arr, 13);
                }
            }
        }
        else if (nmr == 6)
        {
            if (p6 == 1)
            {
                printf("\n\nA ALTERINATIVA JA FOI RESPONDIDA\n\n");
            }
            else
            {
                printf("\ndigite a palavra que voce esta pensando;\n");
                scanf("%s", palavra);

                if (strcmp(palavra, "universidade") == 0)
                {
                    acertou();
                    arr[1][0] = 'u';
                    arr[1][1] = 'n';
                    arr[1][2] = 'i';
                    arr[1][3] = 'v';
                    arr[1][4] = 'e';
                    arr[1][5] = 'r';
                    arr[1][6] = 's';
                    arr[1][7] = 'i';
                    arr[1][8] = 'd';
                    arr[1][9] = 'a';
                    arr[1][10] = 'd';
                    arr[1][11] = 'e';
                    mostrar(arr, 13);
                    p6 = 1;
                }
                else
                {
                    errou();
                    mostrar(arr, 13);
                }
            }
        }
        else if (nmr == 7)
        {
            if (p7 == 1)
            {
                printf("\n\nA ALTERINATIVA JA FOI RESPONDIDA\n\n");
            }
            else
            {
                printf("\ndigite a palavra que voce esta pensando;\n");
                scanf("%s", palavra);

                if (strcmp(palavra, "basicamente") == 0)
                {
                    acertou();
                    arr[1][11] = 'e';
                    arr[2][11] = 't';
                    arr[3][11] = 'n';
                    arr[4][11] = 'e';
                    arr[5][11] = 'm';
                    arr[6][11] = 'a';
                    arr[7][11] = 'c';
                    arr[8][11] = 'i';
                    arr[9][11] = 's';
                    arr[10][11] = 'a';
                    arr[11][11] = 'b';

                    mostrar(arr, 13);
                    p6 = 1;
                }
                else
                {
                    errou();
                    mostrar(arr, 13);
                }
            }
        }
        else
        {
            printf("\n\nnumero fora do intervalo 1-7, tente novamanete\n\n\n");
        }
    }

    printf(C_GREEN"\n\nPARABENS VOCE CONCLUIU AS PALAVRAS CRUZADAS\n\n");
    for (int i = 0; i < 13; i++)
    {
        for (int w = 0; w < 11; w++)
        {
            printf(" %c", arr[i][w]);
        }
        printf("\n");
    }
    printf("" C_GRAY);

    return 0;
}
