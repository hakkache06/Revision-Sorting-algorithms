#include<stdio.h>

void table(int arr[],int t[],int n){

for(int i=0;i<n;i++)
     t[i]=arr[i];


    for(int j=0;j<n;j++)
        printf("%d \n",t[j]);
}


int main()
{

    int arr1[] = {12,23,34,45,56,45,23};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    int a[n1];
      table(arr1,a,n1);



}
