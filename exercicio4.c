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

#define d1 10
#define d2 20
#define d3 5


int main()
{
    int arr3d[d1][d2][d3];
    int valor=0;
    for (int i = 0; i < d1; i++)
    {
        for (int j = 0; j < d2; j++)
        {
            for (int w = 0; w < d3; w++)
            {
                arr3d[i][j][w]=valor;
                printf("\narray 3d de index[%i][%i][%i]-->%i",i,j,w, arr3d[i][j][w]);
                valor++;
            }
            
        }
        
    }
    

    return 0;
}
