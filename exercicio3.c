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

#define numero 6

float arr[numero][numero];

int maiorEmenor(float a[][numero], int tam)
{
    for (int w = 0; w < numero; w++)
    {

        printf(C_GREEN "\nos tres maiores numero do array de linha %i sao:\n" C_GRAY, w);
        for (int i = tam - 1; i > tam - 4; i--)
        {
            printf(" %.f\n", a[w][i]);
        }

        printf(C_RED "\nos tres menores numero do array de linha %i sao:\n" C_GRAY, w);
        for (int r = 0; r < 3; r++)
        {
            printf(" %.f\n", a[w][r]);
        }
    }
}

int MediaMedianaeModa(float a[][numero], int tam)
{
    for (int w = 0; w < numero; w++)
    {

        float media = 0.0;
        int indexMediana = tam / 2;
        float indexDamoda = 0;
        float RepeticaoDaModa = 0;
        float moda[50] = {0};
        float numaux = 0;
        float numaux2 = 0;
        for (int i = tam; i > 0; i--)
        {
            media += a[w][i];
        }
        media = media / tam;

        for (int i = 0; i < tam; i++)
        {
            numaux = (media - a[w][i]) * (media - a[w][i]);
            numaux2 += numaux;
        }

        printf("\n\na media da linha %i e " C_GREEN "%.3f" C_GRAY, w, media);
        printf("\n\na mediana da linha %i e" C_GREEN " %.f" C_GRAY, w, a[w][indexMediana]);
        printf("\n\no desvio padrao da linha %i e" C_GREEN " %.3f\n\n\n\n" C_GRAY, w, sqrt(numaux2 / tam));
    }
}

int informacoes(float a[][numero], int tam)
{
    for (int w = 0; w < numero; w++)
    {

        printf(C_MAGENTA "\ninformacoes do array de linha %i:" C_GRAY, w);
        float aux = 0.0;
        float auxanterior = -1.0;
        int quantidadedevezes = 0;
        for (int i = 0; i < tam; i++)
        {
            if (auxanterior != a[w][i])
            {

                aux = a[w][i];
                for (int j = 0; j < tam; j++)
                {
                    if (aux == a[w][j])
                    {
                        quantidadedevezes++;
                    }
                }
                printf("\no numero %.f se repete %i vez(es)", aux, quantidadedevezes);
                quantidadedevezes = 0;
                auxanterior = aux;
            }
        }
    }
}

int novoarray()
{

    int arrayunidimensional[numero * numero] = {0};
    int index = 0;

    for (int i = 0; i < numero; i++)
    {
        for (int j = 0; j < numero; j++)
        {
            arrayunidimensional[index] = arr[i][j];
            index++;
        }
    }

    int auxordenacao = 0;

    for (int i = 0; i < numero * numero - 1; i++)
    {
        for (int j = numero * numero - 2; j >= 0; j--)
        {

            if (arrayunidimensional[j] > arrayunidimensional[j + 1])
            {
                auxordenacao = arrayunidimensional[j + 1];
                arrayunidimensional[j + 1] = arrayunidimensional[j];
                arrayunidimensional[j] = auxordenacao;
            }
        }
    }

    for (int i = 0; i < numero * numero; i++)
    {
        printf("\nvalores ai pra vc %i", arrayunidimensional[i]);
    }

    // printf(C_RED "\n\n\n\naqui esta um novo array feito sob medida" C_GRAY);
    // float aux = 0.0;
    int auxanterior = -1;
    // int quantidadedevezes = 0;
    int tamanhodonovoarray = 0;
    for (int i = 0; i < numero*numero; i++)
    {
        if (auxanterior != arrayunidimensional[i])
        {

            tamanhodonovoarray++;

            auxanterior = arrayunidimensional[i];
        }
    }
    int novoarray[tamanhodonovoarray];
    auxanterior = -1;
    int index2 = 0;
    for (int i = 0; i < numero * numero; i++)
    {
        if (auxanterior != arrayunidimensional[i])
        {

            novoarray[index2] = arrayunidimensional[i];

            auxanterior = arrayunidimensional[i];

            index2++;
        }
    }


printf("\n\n\nnovo array feito sob medida");

     for (int i = 0; i < tamanhodonovoarray; i++)
    {
        printf("\nindex[%i] %i\n", i, novoarray[i]);
    }

    // for (int i = 0; i < tamanhodonovoarray; i++)
    // {
    //     printf("\nindex %i, --> %.f", i, novoarray[i]);
    // }

    // printf(C_BLUE "\n\n\n\n\n\nAGORA TE MOSTRAREI TODDAS AS INFORMACOES COM O NOVO ARRAY FEITO SOB MEDIDA" C_GRAY);
    // maiorEmenor(novoarray, tamanhodonovoarray);

    // MediaMedianaeModa(novoarray, tamanhodonovoarray);

    // // informacoes(novoarray, tamanhodonovoarray);
}


int somatoriadaslinhas(float a[][numero], int tam){
    int arraydasoma[numero]={0};
    int index=0;
    for (int w = 0; w < tam; w++)
    {
        for (int i = 0; i < tam; i++)
        {
            arraydasoma[w]+=a[w][i];
        }
        
    }
    
    for (int i = 0; i < numero; i++)
    {
        printf("\nsoma da coluna[%i]: %i ", i , arraydasoma[i]);
    }
    
}

int main()
{

    int inde = 0;
    for (int i = 0; i < numero; i++)
    {
        for (int j = 0; j < numero; j++)
        {
            arr[i][j] = rand() % numero;
        }
    };

    printf("\n\n o array gerado aleatoriamente:\n");
    for (int i = 0; i < numero; i++)
    {
        for (int j = 0; j < numero; j++)
        {
            printf("\n index [%i][%i] %.f\n", i, j, arr[i][j]);
        }
    }

    float auxordenacao = 0.0;
    for (int i = 0; i < numero * numero - 1; i++)
    {
        for (int j = numero - 1; j >= 0; j--)
        {
            for (int w = numero - 2; w >= 0; w--)
            {
                if (arr[j][w] > arr[j][w + 1])
                {
                    auxordenacao = arr[j][w + 1];
                    arr[j][w + 1] = arr[j][w];
                    arr[j][w] = auxordenacao;
                }
            }
        }
    }

    printf("\n\n colunas organizadas em ordem crescente\n");
    for (int i = 0; i < numero; i++)
    {
        for (int j = 0; j < numero; j++)
        {
            printf("\n index [%i][%i] %.f\n", i, j, arr[i][j]);
        }
    }

    // printf("\n");

    maiorEmenor(arr, numero);

    MediaMedianaeModa(arr, numero);

    informacoes(arr, numero);

    

    novoarray();

    somatoriadaslinhas(arr, numero);

    // int pergunta = 0;
    // int validacao = 1;

    return 0;
}
