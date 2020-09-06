#include<stdio.h>

int main(){

int arr[] = {12,23,45,56,67,98,1};
int n = sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<n-1;i++){
    printf("%d\n",i);
}

}

