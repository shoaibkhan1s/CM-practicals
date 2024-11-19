#include <stdio.h>

float Simpson(float x){
    return x*x*x;
}

int main(){
    int n;
    float a, b,h;
    float sum =0;

    printf("enter interval : ");
    scanf("%d", &n);
    if (n%2==0)
    {
    printf("enter lower limit : ");
    scanf("%f", &a);
    printf("enter upper limit : ");
    scanf("%f", &b);

    sum = Simpson(a) + Simpson(b);

    h=(b-a)/n;

    for (float i = a+h; i < b; i+=2*h)
    {
        sum = sum + 4*Simpson(i);
    }
    for (float i = a+2*h; i < b; i+=2*h)
    {
        sum = sum + 2*Simpson(i);
    }
    sum = sum*h/3;

    printf("the approximate value of integral is : %f", sum);
    
    }
    else{
        printf("please enter even intervals");
    }
}