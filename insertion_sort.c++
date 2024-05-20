#include<iostream>
using namespace std;

void IS(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        int j = i ;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
        }
    }
}

int main(){
    int arr[10] = {9 , 8 , 7 , 6 , 5 , 4 , 3  , 2 , 1 , 0};
    int n = 10;
    cout<<"Enter the elements of the array - ";
    for(int i = 0 ; i <n ; i++){
        cout<<arr[i]<<" ";
    }
    IS(arr,n);
    cout<<"\nElements after sorting :- ";
    for(int i = 0 ; i <n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}