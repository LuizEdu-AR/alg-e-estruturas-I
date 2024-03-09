#include <stdio.h>

void insertionsort(int arr[],int n)
{
    int i , key , j;//c1
    for( i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

    }

    while (j >= 0 && arr[j] > key) 
    {
        arr[j + 1] = arr[j];
        j = j - 1;
    }
    arr[j + 1] = key;
}

int main()
{

+++++
    return 0;
}