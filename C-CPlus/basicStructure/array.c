// Basics of array in C

#include <stdio.h>

int main()
{
    printf("----Largest element in an Array-----\n");
    int arr[10];
    int max = 0;
    for(int i = 0 ; i < 10 ; i++)
    {
        printf("Enter %d of 10 number : ",i+1);
        scanf("%d",&arr[i]);
    } 

    for(int i = 0 ; i < 10 ; i++)
    {
        if (arr[i]> max)
        {
            max = arr[i];
        }
    }

    printf("The largest element is : %d \n", max);

}
