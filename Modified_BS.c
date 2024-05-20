#include<stdio.h>
void BS(int arr[], int n){
    int flag = 1;
    int count = 0;
    for(int i = 0 ; i < (n-1) && flag==1; i++){
        flag = 0 ;
        for(int j = 0 ; j < n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count++;
                flag = 1;
                printf("Swap occur\n");
            }
        }
        printf("Swap did not occur\n");
    }
    
    printf("No of swappings done = %d\n",count);
}
void main(){
    int arr[10] = {9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1};
    int n = 10;
    printf("Enter the elements of the array - ");
    for(int i = 0 ; i <n ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    BS(arr,n);
    printf("\nElements after sorting :- ");
    for(int i = 0 ; i <n ; i++){
        printf("%d ",arr[i]);
    }
}