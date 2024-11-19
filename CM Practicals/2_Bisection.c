#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) pow(x,3)-x-1


int main(){
    int i=0;
    float x0,x1,x2,f0,f1,f2;
    printf("enter value of x0 : ");
    scanf("%f",&x0);
    printf("enter value of x1 : ");
    scanf("%f",&x1);

    do
    {
        f0 = f(x0);
        f1 = f(x1);
        x2 = (x1+x0)/2;
        f2 = f(x2);
        
        if (f0*f2<0)
        {
            x1=x2;
        }
        else{
            x0=x2;
        }
        i++;
        printf("number of iterations = %d\n",i);
        printf("root = %f\n",x2);
        printf("value of function = %f\n",f2);


        } while (fabs(f2)>e);
    return 0;

 
}