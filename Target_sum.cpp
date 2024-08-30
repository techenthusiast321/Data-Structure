#include<iostream> 
using namespace std;
bool solve(int arr[],int target,int &sum,int index,int n){
    //base case
    if(index==n){
        if(sum=target){
            return 1;
        }
        return 0;
    }
    //Not include
    if(solve(arr,target,sum,index+1,n)==1){
        return 1;
    }
    //Include
    sum+=arr[index];
    if(solve(arr,target,sum,index+1,n)==1){
        return 1;
    }
    sum-=arr[index];
    return 0;
}

int main(){
    int arr[]={3,6,4,5};
    int target=12;
    int sum=0;
    int n=4;
    cout<<solve(arr,target,sum,0,4);
    return 0;
}