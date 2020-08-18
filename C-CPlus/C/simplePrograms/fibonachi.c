// Fibonachi sequence

#include <stdio.h>

int main()
{
    int num,a = 1,b = 0,c;
    printf("Enter length of sequence :");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        printf("%d \n",b);
        c = b + a;
        b = a;
        a = c;
    }
}
