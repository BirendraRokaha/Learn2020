// Testing array

#include <stdio.h>

void printarray(int arr[],int len);
int partition(int arr[], int len); 
int* quicksort(int arr[],int len, int low , int high);

int main()
{
    int arr[] = {43,61,86,23,88,96,2,13,65,34,88,23,56,71};
    int len = sizeof(arr)/sizeof(arr[0]);
    printarray(arr, sizeof(arr)/sizeof(arr[0]));
    printf("Sorted\n");
    int low = 0;
    int high = len - 1;
    quicksort(arr,len,low,high);

//    partition(arr,len);
    printarray(arr,len);

    return 0;

}

int* quicksort(int arr[] ,int len, int low, int high)
{
    int j;
    if (low < high)
    {
        j = partition(arr,len);
        quicksort(arr, len,low , j);
        quicksort(arr ,len , j + 1 , high);
    }
    return arr;
}

int partition(int arr[], int len)
{

    int pivot = arr[0];
    int temp1,temp2;
    int i = 0;
    int j = len - 1;
    while(i < j)
    {
        if (pivot >= arr[i])
        {
            i++;
        }
        if (pivot < arr[j])
        {
            j--;
        }
        if(i<j)
        {
            temp1 = arr[i];
            arr[i] = arr[j];
            arr[j] = temp1;
        }
    }
    temp2 = arr[0];
    arr[0] = arr[j];
    arr[j] = temp2;
    return j;
}   

void printarray(int arr[], int len)
{
    for(int i = 0; i < len; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
