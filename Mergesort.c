#include<stdio.h>
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void ft_printarry(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d \n \n",arr[i]);
    }
}

void ft_Mergesort(int arr[],int l,int r)
{
    int m=0;
    if(r>l)
    {
        m=(r+l)/2;
        ft_Mergesort(arr,l,m);
        ft_Mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }

    ft_printarry(arr,r);
}


int main(){
int arr1[] = {3,2,1};
int n = sizeof(arr1)/sizeof(arr1[0]);
ft_Mergesort(arr1,arr1[0],n-1);
}