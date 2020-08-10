// Take input form 5 subjects and display the percentage

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    printf("-------Mark Sheet-------\n");
    float sci,math,comp,eng;
    float total,per;

    printf("Enter the marks for Science, Maths, Computer and English.\n");
    scanf("%f %f %f %f",&sci,&math,&comp,&eng);

    total = sci + math + comp + eng;
    per = (total/400) * 100;
    if (sci < 40 || math <40 || comp < 40 || eng < 40)
    {
        printf("----Failed----\n");
        printf("Total : %.2f Prcentage : %.2f \n",total,per);
   
    }
    else if (per >=80 && per < 100)
    {
        printf("----Distinction----\n");   
        printf("Total : %.2f Prcentage : %.2f \n",total,per);

    }
    else if ( per >=  60 && per < 70 )
    {
        printf("----First Division----\n");    
        printf("Total : %.2f Prcentage : %.2f \n",total,per);

    }
    else if (per >=40 && per < 60 )
    {
        printf("----Second Division----\n");    
        printf("Total : %.2f Prcentage : %.2f \n",total,per);
    }

    printf("----End----\n");

    return 0;
}
