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


void ft_BubbleSort(int arr[], int n)
{
int i, j;
   for (i = 0; i < n-1; i++)
   {
        print("i ==== %d \n",i);
        for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
                 print(" %d ==== %d \n",arr[j],arr[j+1]);
             ft_swap(&arr[j], &arr[j+1]);
    }
}

int main(){

int arr[] = {12,23,45,56,67,98,1};
int n = sizeof(arr)/sizeof(arr[0]);


}

