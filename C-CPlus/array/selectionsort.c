// Selection Sort

#include <stdio.h>

// Function decleration
void printarr(int arr[],int len);
int* selecsort(int arr[], int len);

// Function statements
void printarr(int arr[], int len)
{
    for (int i = 0; i<len ; i++)
    {
        printf("%d \t",arr[i]);
    }    
    printf("\n");
}

int* selecsort(int arr[], int len)
{
    int temp,min_i;
    for(int i = 0; i < (len-1); i++)
    {
        min_i = i;
        for(int j = (i+1); j < len; j++)
        {
            if (arr[j] < arr[i])
            {
                min_i = j;
       //     }
         //   if(min_i != i)
          //  {    
                temp = arr[i];
                arr[i] = arr[min_i];
                arr[min_i] = temp;
            }
        }
    }
    return arr;
}

// Main program
int main()
{

    int arr[] = {99,77,88,66,55,33,44,22,11,1};
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("-------Original Array-------\n");
    
    printarr(arr,len);
    int *sorted;
    sorted = selecsort(arr,len);
    
    printf("-------Sorted Array-------\n");
    
    printarr(sorted,len);
    return 0;
}


