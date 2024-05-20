#include<stdio.h>
void BS(int arr[], int n){
    for(int i = 0 ; i < n-1; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void main(){
    int arr[10] = {9 , 8 , 7 , 6 , 5 , 4 , 3  , 2 , 1 , 0};
    int n = 10;
    printf("Enter the elements of the array - ");
    for(int i = 0 ; i <n ; i++){
        printf("%d ",arr[i]);
    }
    BS(arr,n);
    printf("\nElements after sorting :- ");
    for(int i = 0 ; i <n ; i++){
        printf("%d ",arr[i]);
    }
}