#include<stdio.h>

/*print Farenheit and Celcius table */

int main()
{
    float fahr,celcius;
    float lower,upper,step;

    lower = 20;
    upper = 300;
    step = 10;

    fahr = lower;
    while (fahr <= upper) {
        celcius = 5 *(fahr - 32)/9;
        printf("Farenheit = %.2f and Celcius = %.2f \n",fahr,celcius);
        fahr = fahr + step;
    }
}
