// Quick Sort

#include <stdio.h>

// Function decleration
void printarr(int arr[],int len);
int* quicksort(int arr[], int len);

// Function statements
void printarr(int arr[], int len)
{
    for (int i = 0; i<len ; i++)
    {
        printf("%d \t",arr[i]);
    }    
    printf("\n");
}

int* quicksort(int arr[], int len)
{
    /*
    int temp,min_i;
    for(int i = 0; i < (len-1); i++)
    {
        min_i = i;
        for(int j = (i+1); j < len; j++)
        {
            if (arr[j] < arr[i])
            {
                min_i = j;  
                temp = arr[i];
                arr[i] = arr[min_i];
                arr[min_i] = temp;
            }
        }
    }
    return arr;
    */
    int pviot;
    pviot = arr[0];

}

// Main program
int main()
{
    int arr[] = {99,111,666,222,76,89,333,77,88,66,555,55,33,44,22,11,1,444};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("-------Original Array-------\n");
    printarr(arr,len);
    int *sorted;
    sorted = quicksort(arr,len);
    printf("-------Sorted Array-------\n");
    printarr(sorted,len);
    return 0;
}


