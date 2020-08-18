// Reverse an intiger

#include <stdio.h>

int main()
{
    int number , reversed = 0 , emainder;

    printf (" Enter a number : ");
    scanf ("%d",&number);
    while (number !=0 )
    {
        emainder = number % 10;
        reversed = reversed * 10 + emainder;
        number /= 10;
    }

    printf("Reverse is %d \n",reversed);

}
