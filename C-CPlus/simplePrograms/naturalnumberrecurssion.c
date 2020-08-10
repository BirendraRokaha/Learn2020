// print sum of natural numbers using recurssion

#include <stdio.h>

int addnum(int n);

int main()
{
    int num;
    printf("Enter a positive natural number : ");
    scanf("%d",&num);
    printf("Sum = %d \n", addnum(num));
    return 0;
}

int addnum(int n)
{
    while(n != 0 )
    {
        return n + addnum(n - 1); 
    }
    return n;
}
