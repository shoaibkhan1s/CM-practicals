#include<stdio.h>

float f(float x, float y){
    return x+y;
}

int main(){
    float x0,y0,xn,x,y,h;
    float k1,k2,k3,k4;
    printf("Enter value of x0, y0, h, xn: ");
    scanf("%f %f %f %f", &x0, &y0, &h, &xn); 
    x=x0;
    y=y0;

    do
    {
        k1 = h*f(x,y);
        k2 = h*f(x+h/2.0,y+k1/2.0);
        k3 = h*f(x+h/2.0,y+k2/2.0);
        k4 = h*f(x+h,y+k3);
        y = y + (k1+2*k2+2*k3+k4)/6.0;
        x=x+h;

          printf("x: %.2f, y: %.6f\n", x, y);

    } while (x<xn);

    printf("Value of y at %.2f is: %.6f\n", x, y);
    
}