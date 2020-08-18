// Switch case example
#include <stdio.h>
#include <stdlib.h>

int main() 
{

    char operator;
    float n1, n2;

    printf("Enter an operator (+, -, *, /): \n");
    scanf("%c", &operator);
    printf("Enter two operands: \n");
    scanf("%f %f",&n1, &n2);

    switch(operator)
    {
            case '+':
                printf("%.2f + %.2f = %.2f\n",n1, n2, n1+n2);
                break;
    
            case '-':
                printf("%.2f - %.2f = %.2f\n",n1, n2, n1-n2);
                break;
    
            case '*':
                printf("%.2f * %.2f = %.2f\n",n1, n2, n1*n2);
                break;
    
            case '/':
                printf("%.2f / %.2f = %.2f\n",n1, n2, n1/n2);
                break;
    
            // operator doesn't match any case constant +, -, *, /
            default:
                printf("Error! operator is not correct.\n");
    }
    return 0;
 }
