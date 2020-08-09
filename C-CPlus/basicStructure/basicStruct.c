// Header file
#include <stdio.h>

//Main function when the program executes
int main()
{
    // Print
    /* Print */
    printf("---Calculator---\n");

    // Set variables
    int a,b;
    int sum,diff, pro, rem;
    
    // Get user Input
    printf("Enter the values for A and B\n");
    scanf("%d %d",&a,&b);
    
    // Basic arethmetic operations
    sum = a+b;
    diff = a-b;
    pro = a*b;
    rem = a/b;

    // Print
    printf("This sum of %d and %d is %d.\n",a,b,sum);
    printf("This diffrence of %d and %d is %d.\n",a,b,diff);
    printf("This product of %d and %d is %d.\n",a,b,pro);
    printf("This quotient of %d and %d is %d.\n",a,b,rem);
    
    return 0;
}
