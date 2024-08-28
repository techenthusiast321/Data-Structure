#include<iostream>
#include<vector>
using namespace std;
int fibo(int n,vector<int> &dp){
   //base case
   if(n<=1){
        return n;
   }
   if(dp[n]!=-1){
        return dp[n];
   }
   return dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
}
int main(){
    int n;
    cin>>n;
    // vector<int> dp(n+1,-1);
    // cout<<fibo(n,dp);
    int prev2=0;
    int prev=1;

    for(int i=2;i<=n;i++){
        int curi=prev+prev2;
        prev2=prev;
        prev=curi;

    }
    cout<<prev;
    return 0;
}