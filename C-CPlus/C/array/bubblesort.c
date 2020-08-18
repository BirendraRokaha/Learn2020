// Bubble Sort 

#include <stdio.h>

// Function decleration
void printarr(int arr[],int len);
int* bubblesort(int arr[], int len);

// Function statements
void printarr(int arr[], int len)
{
    for (int i = 0; i<len ; i++)
    {
        printf("%d \t",arr[i]);
    }    
    printf("\n");
}

int* bubblesort(int arr[], int len)
{
    int temp;
    for(int i = 0; i < (len-1); i++)
    {
        for(int j = (i+1); j < len; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

// Main program
int main()
{
    int arr[] = {82,17,39,46,52,41,212,332,112,130,241,4214,76,864,123};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("--------Original Array-------\n");
    printarr(arr,len);
    int *sorted;
    sorted = bubblesort(arr,len);
    printf("--------Sorted Array-------\n");
    printarr(sorted,len);
    return 0;
}


