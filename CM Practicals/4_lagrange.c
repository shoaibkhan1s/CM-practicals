#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float term, x;
    float sum = 0;
    printf("enter number of data : ");
    scanf("%d", &n);
    float X[n], Y[n];
    printf("enter element of X :");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &X[i]);
    }
    printf("enter element of Y :");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &Y[i]);
    }

    printf("enter value of x at which you find value of y : ");
    scanf("%f", &x);

    for (int i = 0; i < n; i++)
    {
        term = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                term = term * (x - X[j]) / (X[i] - X[j]);
            }
        }
        sum = sum + Y[i] * term;
    }
    printf("value of y at %f is : %f", x, sum);
}