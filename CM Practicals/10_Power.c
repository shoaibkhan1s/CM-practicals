#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float a[10][10], x[10], y[10], r;
    int n;
    printf("enter order of square matrix : ");
    scanf("%d", &n);
    printf("enter elements matrix : ");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%f", &a[i][j]);
        }
        y[i] = (i == 1) ? 1 : 0;
    }
h:
    for (int i = 1; i <= n; i++)
    {
        x[i] = y[i];
    }
    for (int i = 1; i <= n; i++)
    {
        y[i] = 0;
        for (int j = 1; j <= n; j++)
        {
            y[i] = y[i] + a[i][j] * x[j];
        }
    }
    r = y[1];
    for (int i = 2; i <= n; i++)
    {
        if (fabs(r) < fabs(y[i]))
        {
            r = y[i];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        y[i] = y[i] / r;
    }

    for (int i = 1; i <= n; i++)
    {
        if (fabs(y[i] - x[i]) > 0.0001)
        {
            goto h;
        }
    }

    printf("%0.2f\n", r);
    for (int i = 1; i <= n; i++)
    {
        printf("%.2f \n", x[i]);
    }
}
