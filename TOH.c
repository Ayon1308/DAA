#include<stdio.h>
#include<math.h>


void tower(int n , char beg , char aux  , char end){
    if(n<=0){
        printf("Enter the correct input!!!");
    }
    else if(n == 1){
        printf("\nMove disc from %c to %c",beg , aux);
    }
    else{
        tower(n-1,beg,end,aux);
        tower(1,beg,aux,end);
        tower(n-1,aux,beg,end);
    }
}
void main(){
    int n ;
    char a , b , c;
    printf("Enter the number of disc - ");
    scanf("%d",&n);
    printf("Tower of Hanoi of %d disc \n",n);
    tower(n , 'a','b','c');
    int steps = pow(2,n)-1;
    printf("\nNo of steps = %d\n",steps);
}