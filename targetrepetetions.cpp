#include<iostream>
using namespace std;
int solve(int arr[],int sum,int index,int n){
    //base case
    if(index==n || sum<0){
        return 0;
    }
    if(sum==0){
        return 1;
    }
    return solve(arr,sum,index+1,n)+solve(arr,sum-arr[index],index,n);
}
int main(){
    int arr[]={2,3,4};
    int sum=6;
    cout<<solve(arr,sum,0,3)<<endl;
    return 0;
}