#include <stdio.h>

void table(float x[], float y[][10], int n)
{
    for (int j = 1; j < n; j++)
    {
        for (int i = 0; i < n - j; i++)
        {
            y[i][j] = (y[i + 1][j - 1] - y[i][j - 1]) / (x[i + j] - x[i]);
        }
    }
}

float newtonDividedDifference(float x[], float y[][10], float value, int n)
{
    float result = y[0][0];
    float product = 1.0;

    for (int i = 1; i < n; i++)
    {
        product *= (value - x[i - 1]);
        result += product * y[0][i];
    }
    return result;
}

int main()
{
    int n;
    float x[10], y[10][10];
    float value;

    printf("enter number of data points : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("enter data points of x : \n");
        scanf("%f", &x[i]);
        printf("enter data points of y : \n");
        scanf("%f", &y[i][0]);
    }

    printf("enter the value to interpolate");
    scanf("%f", &value);
    table(x, y, n);

    float result = newtonDividedDifference(x, y, value, n);
    printf("interpolated value : %f", result);
}