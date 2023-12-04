#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define C_BLACK "\033[30m"
#define C_RED "\033[31m"
#define C_GREEN "\033[32m"
#define C_YELLOW "\033[33m"
#define C_BLUE "\033[34m"
#define C_MAGENTA "\033[35m"
#define C_CYAN "\033[36m"
#define C_GRAY "\033[37m"

#define numero 50

float arr[numero];

int maiorEmenor(float a[],int tam)
{
    printf(C_GREEN "\nos tres maiores numero do array sao:\n" C_GRAY);
    for (int i = tam - 1; i > tam - 4; i--)
    {
        printf(" %.f\n", a[i]);
    }

    printf(C_RED "\nos tres menores numero do array sao:\n" C_GRAY);
    for (int r = 0; r < 3; r++)
    {
        printf(" %.f\n", a[r]);
    }
}

int MediaMedianaeModa(float a[],int tam)
{
    float media = 0.0;
    int indexMediana = tam / 2;
    float indexDamoda = 0;
    float RepeticaoDaModa = 0;
    float moda[numero] = {0};
    float numaux = 0;
    float numaux2 = 0;
    for (int i = tam; i > 0; i--)
    {
        media += a[i];
    }
    media = media / tam;

    for (int i = 0; i < tam; i++)
    {
        numaux = (media - a[i]) * (media - a[i]);
        numaux2 += numaux;
    }

    printf("\n\na media e " C_GREEN "%.3f\n\n" C_GRAY, media);
    printf("\n\na mediana e" C_GREEN " %.f\n\n" C_GRAY, a[indexMediana]);
    printf("\n\no desvio padrao e" C_GREEN " %.3f\n\n" C_GRAY, sqrt(numaux2 / tam));
}

int informacoes(float a[],int tam)
{

    printf(C_MAGENTA "informacoes do array:" C_GRAY);
    float aux = 0.0;
    float auxanterior = -1.0;
    int quantidadedevezes = 0;
    for (int i = 0; i < tam; i++)
    {
        if (auxanterior != a[i])
        {

            aux = a[i];
            for (int j = 0; j < tam; j++)
            {
                if (aux == a[j])
                {
                    quantidadedevezes++;
                }
            }
            printf("\no numero %.f se repete %i vez(es) e ocupa o index %i", aux, quantidadedevezes, i);
            quantidadedevezes = 0;
            auxanterior = aux;
        }
    }
}

int novoarray()
{
    printf(C_RED"\n\n\n\naqui esta um novo array feito sob medida"C_GRAY);
    float aux = 0.0;
    float auxanterior = 0.0;
    int quantidadedevezes = 0;
    int tamanhodonovoarray = 0;
    for (int i = 0; i < numero; i++)
    {
        if (auxanterior != arr[i])
        {

            tamanhodonovoarray++;

            auxanterior = arr[i];
        }
    }
    float novoarray[tamanhodonovoarray];

    int index = 0;
    for (int i = 0; i < numero; i++)
    {
        if (auxanterior != arr[i])
        {

            novoarray[index] = arr[i];

            auxanterior = arr[i];

            index++;
        }
    }

    for (int i = 0; i < tamanhodonovoarray; i++)
    {
        printf("\nindex %i, --> %.f", i, novoarray[i]);
    }


    printf(C_BLUE"\n\n\n\n\n\nAGORA TE MOSTRAREI TODDAS AS INFORMACOES COM O NOVO ARRAY FEITO SOB MEDIDA"C_GRAY);
    maiorEmenor(novoarray, tamanhodonovoarray);

    MediaMedianaeModa(novoarray, tamanhodonovoarray);

   // informacoes(novoarray, tamanhodonovoarray);
}

int main()
{

    
    float auxnumberforarr = 0.0;

    int inde = 0;
    for (int i = 0; i < numero; i++)
    {;
        arr[i] = rand() % numero;
    };

    printf("\n\n o array gerado aleatoriamente:\n");
    for (int i = 0; i < numero; i++)
    {
        printf("\n %.f\n", arr[i]);
    }

    float auxordenacao = 0.0;
    for (int i = 0; i < numero - 1; i++)
    {
        for (int j = numero - 2; j >= 0; j--)
        {

            if (arr[j] > arr[j + 1])
            {
                auxordenacao = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = auxordenacao;
            }
        }
    }

    printf("\n\n o array ordenado:\n");

    for (int i = 0; i < numero; i++)
    {
        printf("\n index %i valor" C_RED " %.f\n" C_GRAY, i, arr[i]);
    }
    printf("\n");

    maiorEmenor(arr, numero);

    MediaMedianaeModa(arr, numero);

    informacoes(arr, numero);

    novoarray();

    int pergunta = 0;
    int validacao = 1;

 

    return 0;
}
