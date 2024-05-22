//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
class Job 
{ 
    public:
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 

class Solution 
{
    public:
    //compare function to arrange in descending order

    static bool compare(Job a ,Job b){
        return a.profit > b.profit;
    }

    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        //Step 1:sort the profit in descending order
        sort(arr,arr+n,compare);
        //create an array for slots if slots are full or not
        bool done[n] = {0};
        //total slot based on deadlines
        int day = 0 , profit = 0 ; // total profit till now
        
        //first loop iterates the array
        for(int i = 0 ; i < n ;i++){
            //second loop calculates the profit
            for(int j = min(n , arr[i].dead-1) ; j>=0 ; j--){
                //if done slot is empty
                if(done[j] == false){
                    day = day+1;
                    profit += arr[i].profit;
                    done[j] = true;
                    break;
                }
            }
        }
        
        return {day , profit};
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
        int n;
        
        //size of array
        cout<<"Enter number of jobs ";
        cin >> n;
        Job arr[n];
        cout<<"Enter the job id , deadlines , profit";
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<"Total no of slots :- "<<ans[0]<<"\n"<<"Total profit :- "<<ans[1]<<endl;
	return 0; 
}



// } Driver Code Ends