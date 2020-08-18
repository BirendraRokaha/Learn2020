// Reverse a string in C using recurssion

#include <stdio.h>

void reverseString();

int main()
{
    printf("-----Reverse String-----");
    printf("Enter a string : ");
    reverseString();
    return 0;
}

void reverseString()
{
    char c;
    scanf("%c",&c);
    if (c != '\n')
    {
        reverseString();
        printf("%c",c);
    }
}
