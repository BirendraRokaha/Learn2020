// Basics pointers
// For a reference pointer to the memory is passed so the value changes when printed after function calli
// For b value is passed so the value remains unchanged after the function call 

#include <stdio.h>

void pointer( int *a, int b);

int main ()
{
    int a = 10, b = 20;
    pointer(&a,b);
    printf("after funtion call : a = %d and b = %d \n",a,b);
    return 0;
}

void pointer(int *a, int b)
{
    printf("function entry : a = %d and b = %d\n",*a,b);
    *a = 11;
    b = 22;
    printf("function exit : a = %d and b = %d \n",*a,b);
}
