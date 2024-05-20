#include<iostream>
using namespace std;

void SS(int arr[] , int n){
    for(int i = 0 ; i < n-1 ; i++){
        int min = i;
        for(int j = i ; j < n ; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
int main(){
    int arr[10] = {9 , 8 , 7 , 6 , 5 , 4 , 3  , 2 , 1 , 0};
    int n = 10;
    cout<<"Enter the elements of the array - ";
    for(int i = 0 ; i <n ; i++){
        cout<<arr[i]<<" ";
    }
    SS(arr,n);
    cout<<"\nElements after sorting :- ";
    for(int i = 0 ; i <n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}