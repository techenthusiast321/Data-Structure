#include<iostream>
using namespace std;
int solve(int arr[],int index,int sum,int n){
    if(index==n){
        if(sum==0){
            return 1;
        }
        return 0;
    }
    return solve(arr,index+1,sum,n)+solve(arr,index+1,sum-arr[index],n);
}
int main(){
    int arr[]={1,3,5,8,2,6};
    int sum=10;
    cout<<solve(arr,0,sum,6)<<endl;
    return 0;
}