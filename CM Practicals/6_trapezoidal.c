#include <stdio.h>

float integrate(float x)
{
    return x * x * x;
}
int main()
{
    float a, b;
    int n;
    printf("enter Lower limit :");
    scanf("%f", &a);
    printf("enter Upper limit :");
    scanf("%f", &b);
    printf("enter n :");
    scanf("%d", &n);

    float h = (b - a) / n;
    float sum = integrate(b) + integrate(a);

    for (float i = a + h; i < b; i += h)
    {
        sum = sum + 2 * integrate(i);
    }

    float ans = (sum * h) / 2;
    printf("answer is %f", ans);
}