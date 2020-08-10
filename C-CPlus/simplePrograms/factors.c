// Find all the factors of a given number

#include <stdio.h>

int main()
{
    int num,i,count = 0;
    printf("Enter the number: ");
    scanf("%d",&num);

    for(i = 1; i <= num ;i++ )
    {
        if(num%i == 0)
        {
            count++;
            printf("%d \n",i);
        }    
    }

    if (count <= 2)
    {
        printf("%d is a prime number.\n",num);
    } 

}
