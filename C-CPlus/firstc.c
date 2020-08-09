#include<stdio.h>

int main()
{
    int a , b, sum;
    a = 20;
    b = 30;
    for (int i = 0 ; i < 10 ; i++)
    {
        sum = i + a + b;
        printf("The sum of %d, %d and %d is %d. \n",a,b,i,sum);
    }    
//    printf("Hello World\n");
//    printf("This is my first C program. \n");
}
