#include <stdio.h>

void insertionSortR(int *arr, int n)
{
    if(n <= 1) return;
    insertionSortR(*arr, n-1);
    int last = arr[n-1];
    int j = n-2;

    while(j >= 0 && arr[j] > last)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}

void insertionSortI(int *arr, int n)
{
    for(int i = 1; i < n; i++)
    {
        int last = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > last)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = last;
    }
}

void main()
{
    int n,i;
    printf("Enter no of elements in array:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array");

    for(i = 0; i  < n; i++)
    {
        arr[i] = scanf("%d",&n);
    }

    printf("unsorted array:");
    for(i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }

    insertionSortR(*arr,n);   
    printf("recursively sorted array");

    for(int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }

    insertionSortI(*arr, n);

    printf("iteratively sorted array");

    for(int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }

}