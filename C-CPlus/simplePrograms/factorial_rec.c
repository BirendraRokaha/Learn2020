// Find factorila if given number using recurssion

#include <stdio.h>

int factor(int n);

int main()
{
    int n;
    printf("-----Factorial-----\n");
    printf("Enter a positive number : ");
    scanf("%d",&n);
    printf("The Factorial is : %d\n",factor(n));
    return 0;
}

int factor(int n)
{
    if (n >= 1)
    {
        return n*factor(n - 1);
    }
    else
    {
        return 1;
    }
}

