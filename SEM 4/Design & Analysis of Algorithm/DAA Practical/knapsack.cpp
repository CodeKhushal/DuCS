#include<iostream>
#include<vector>
using namespace std;

int knapsack(int * &value,int * &weight,int n,int capacity,vector<vector<int>> &dp){      
    
    if(n<0){
        return 0;
    }
    if(dp[n][capacity]!=-1){
        return dp[n][capacity];
    }
    if(weight[n]<=capacity){
        dp[n][capacity] =   max(
            knapsack(value,weight,n-1,capacity,dp),
            value[n]+knapsack(value,weight,n-1,capacity-weight[n],dp)
        );
    }
    else{
        dp[n][capacity] = knapsack(value,weight,n-1,capacity,dp);
    }   
    return dp[n][capacity];
}

vector<vector<int>> createDp(int m,int n){
    vector<vector<int>> res(m);
    for (int i = 0; i < m; i++){
        res[i] = vector<int>(n,-1);
    }
    return res;
}

int main(){
    
    int weight[5]  = {1,2,5,6,7};
    int value[5]   = {1,6,18,22,28};

    int * weightPtr = weight;
    int * valuePtr  = value;
    
    int size = 5;
    int capacity = 11;
    
    vector<vector<int>> dp = createDp(100,100);
    int result = knapsack(valuePtr,weightPtr,size-1,capacity,dp);

    cout<<"Sum of the values with appropriate weight: "<<result<<endl;

    return 0;
}