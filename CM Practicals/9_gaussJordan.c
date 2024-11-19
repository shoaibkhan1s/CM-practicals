#include <stdio.h>
#define SIZE 3

int main()
{
    int i, j;
    float ratio;
    float mat[SIZE][SIZE], identity[SIZE][SIZE];

    printf("enter element of matrix : ");
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            scanf("%f", &mat[i][j]);
            identity[i][j] = (i == j) ? 1 : 0;
        }
    }

    for (i = 0; i < SIZE; i++)
    {
        float diagonal = mat[i][i];
        for (j = 0; j < SIZE; j++)
        {
            mat[i][j] /= diagonal;
            identity[i][j] /= diagonal;
        }

        for (int k = 0; k < SIZE; k++)
        {
            if (k != i)
            {
                ratio = mat[k][i];
                for (j = 0; j < SIZE; j++)
                {
                    mat[k][j] -= ratio * mat[i][j];
                    identity[k][j] -= ratio * identity[i][j];
                }
            }
        }
    }

    printf("inverse matrix is : \n");

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("%.2f  ", identity[i][j]);
        }
        printf("\n");
    }
}