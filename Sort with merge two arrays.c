#include<stdio.h>

void ft_swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_printarry(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d \n \n",arr[i]);
    }
}
void ft_bubblesort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        if(arr[j]>arr[j+1])
        ft_swap(&arr[j],&arr[j+1]);

    }
}

void  twoarrys(int  arr1[],int arr2[],int n1,int n2)
{
    int n=(n1+n2);
    int i;
    for(i=0;i<n2;i++)
        arr1[n1+i]=arr2[i];
    ft_bubblesort(arr1,n);
    ft_printarry(arr1,n);
}

int main(){
int arr1[] = {3,5,9,22,70,16};
int arr2[] = {2,4,7,8,15,5,7};
int n1 = sizeof(arr1)/sizeof(arr1[0]);
int n2 = sizeof(arr2)/sizeof(arr2[0]);

twoarrys(arr1,arr2,n1,n2);

}