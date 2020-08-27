// Quick sort in C
//
# include <stdio.h>

void swap(int *a, int *b);
void printarray(int arr[], int len);
void quicksort(int arr[], int l, int r);

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printarray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
            printf("%d ", arr[i]);
        }

    printf("\n");
}

void quicksort(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int pivot = arr[r];
    int cnt = l;
    for (int i = l; i <= r; i++)
    {
        if (arr[i] <= pivot)
            {
                swap(&arr[cnt], &arr[i]);        
                cnt++;
            }
        }
    quicksort(arr, l, cnt-2); // Recursively sort the left side of pivot
    quicksort(arr, cnt, r);   // Recursively sort the right side of pivot
}

int main() 
{
    int arr[] = {25,32,35,65,76,3,7,86,12,45,73,98,10, 7, 8, 9, 1, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    printarray(arr,len);
    quicksort(arr, 0, len-1);
    printarray(arr, len);
    return 0;
}


