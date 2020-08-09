// basic conditional syntax in a C porgram

#include<stdio.h>

int main()
{

    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    // if conditional
    if (age >= 18) 
    {
        printf("You are an adult.\n");
    }
    // else block
    else
    {
        printf("You are not an adult.\n");
    }
}
