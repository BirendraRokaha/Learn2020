// Is the number prime 

#include <stdio.h>

int isPrime(int num);

int main()
{

    int n, check = 0;
    printf("-----isPrime-----\n");
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i = 1; i < n ; i++)
    {
        check = isPrime(i);
        if (check == 1)
        {
            printf("%d is not prime.\n",i);
        }
        else
        {
            printf("%d is prime.\n",i);
        }
    }
    return 0;
}


int isPrime(int num)
{
    for(int i = 2 ; i <= num/2; i++ )
    {
        if (num % i == 0)
        {
            return 1;
            break;
        }
    }
    return 0;
}
