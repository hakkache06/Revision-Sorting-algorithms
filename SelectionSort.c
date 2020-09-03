#include<stdio.h>

void   ft_printarr(int arr[] ,int n)
{
    for(int i=0;i<n;i++)
        printf("%d   \n",arr[i]);

}
void    ft_swap(int *a, int *b)
{
  int swap;

  swap = *a;
  *a = *b;
  *b = swap;
}

void ft_selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
        ft_swap(&arr[min_idx], &arr[i]);
    }
}

int main(){

int arr[] = {12,23,45,56,67,98,1};
int n = sizeof(arr)/sizeof(arr[0]);

ft_selectionSort(arr,n);
ft_printarr(arr,n);
}

