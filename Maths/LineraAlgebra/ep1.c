#include <stdio.h>

void printarr(int arr[], int len);
void arrsum(int a[], int b[]);


void arrsum(int a[], int b[])
{
    int vsum[] = {a[0]+b[0],a[1]+b[1]};
    int len = 2;
    printf("Vector 1 =");
    printarr(a,len);
    printf("\nVector 2 =");
    printarr(b,len);
    printf("\nVector Sum = ");
    printarr(vsum,len);
    printf("\n");
}

void printarr(int arr[], int len)
{
    for(int i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}


int main()
{
    // Vectors
    int a[] = {2,4};
    int b[] = {3,5};
     
    arrsum(a,b);

    return 0;
}
