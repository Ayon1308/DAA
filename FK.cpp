#include<bits/stdc++.h>
using namespace std;
class Items{
    public:
        int value;
        int weight;
};

bool compare(Items &a , Items &b){
    return (a.value/(double)a.weight) > (b.value / (double)b.weight);
}

double fractionalKnapsack(int W, Items *items , int n){
    //sort the items based on the ratio : value/weight in paricular order 
    sort(items,items+n,compare);

    double max_val = 0; //max value
    int cur_w = 0; //current value

    for(int i = 0 ; i<n ; i++){
    //accomodate the full weight of the items
        if(cur_w + items[i].weight <= W){
            cur_w += items[i].weight;
            max_val += items[i].value;
        }
        else{
            // fraction of the weight   
            int rem_w = W - cur_w;
            max_val += items[i].value * (rem_w / (double)items[i].weight);
            break;
        }
    }
    return max_val;
}

int main(){
    int n;
    cout<<"Enter the total number of objects - ";
    cin>>n;

    //creating a array of name items using Item class
    Items items[n];

    //input values for profit
    cout<<"\nEnter the values of the objects - ";
    for(int i = 0 ;i < n ;i++){
        cin>>items[i].value;
    }

    //input the weights
    cout<<"\n Input the weights of the objects - ";
    for(int i = 0 ; i <n ; i++){
        cin>>items[i].weight;
    }

    //Total input capacity
    int W;
    cout<<"\nEnter the total weight capacity - ";
    cin>>W;
    cout<<"\nTotal profit = ";
    double result = fractionalKnapsack(W,items,n);
    if((int)result == result){
        cout<<fixed<<setprecision(1)<<result;
    }
    else{
        cout<<result<<endl;
    }
    cout<<"\n";
    return 0;
}