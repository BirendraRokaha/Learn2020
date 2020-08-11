// Testing array

#include <stdio.h>

void printarray(int arr[],int len);

int main()
{
    int arr[] = {1,3,2,4,6,8,6,4,5,1};
    printarray(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;

}

void printarray(int arr[], int len)
{
    for(int i = 0; i < len; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
