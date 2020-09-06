
#include <stdio.h>

int main(){

int arr1[] = {12,23,34,45,56,45,23};
int arr2[] = {78,22,77,67,40,66};
int n1 = sizeof(arr1)/sizeof(arr1[0]);
int n2 = sizeof(arr2)/sizeof(arr2[0]);
int arr[n1+n2];

    for(int i=0;i<(n1+n2)-1;i++){
        arr[i]=i;
    }


       for(int i=0;i<(n1+n2)-1;i++){
            printf("%d \n",arr[i]);
        }





}