// While Loop in C
// Basic structure
// Entry controlle Loops

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;

    while (i<=10)
    {
        if (i % 2 == 0)
        {
            printf("%d is even.\n",i);
        }
        else
        {
            printf("%d is odd.\n",i);
        }
        
        i++;
    }

}
