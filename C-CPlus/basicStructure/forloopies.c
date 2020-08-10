// For Loops
// basic structure
// Entry controlled Loops
// FIZZ BUZZ


#include <stdio.h>
#include <string.h>

int main ()
{
    int i,x,y;
    x = 3;
    y = 5;
    char fizz[] = "Fizz";
    char buzz[] = "Buzz";
    for(i=1 ;i<=30 ;i++ )
    {
        char out[8]= {'\0'};

        if (i % x == 0)
        {      
            strcat(out, fizz);
        }

        if (i % y == 0)
        {
            strcat(out, buzz);
        }


//        printf("%s",out);
        //Printing part
        if( strlen(out) == 0 )
        {
            printf("%d\n",i);
        }
        else
        {
            printf("%s\n",out);
        } 
    }
}
