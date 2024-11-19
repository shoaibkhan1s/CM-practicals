#include <stdio.h>

float Simpson(float x)
{
    return x * x * x;
}

int main()
{
    int n;
    float a, b, h;
    float sum = 0;
    printf("enter interval : ");
    scanf("%d", &n);
    if (n % 3 == 0)
    {
        printf("enter lower limit : ");
        scanf("%f", &a);
        printf("enter upper limit : ");
        scanf("%f", &b);

        sum = Simpson(a) + Simpson(b);
        h = (b - a) / n;

        for (int i = 1; i < n; i++)
        {
            float x = a + i * h;
            if (i % 3 == 0)
            {
                sum += 2 * Simpson(x);
            }
            else
            {
                sum += 3 * Simpson(x);
            }
        }

        float result = (3 * h / 8) * sum;

        printf("the approximate value of integrate is : %f", result);
    }
    else
    {
        printf("please enter terms which are multiple of 3");
    }
}