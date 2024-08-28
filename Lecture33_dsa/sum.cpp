#include<iostream>
using namespace std;

int getsum(int arr[],int n,int start){
     if(start==n){
        return 0;
     }
     return arr[start]+getsum(arr,n,start+1);
}
int main(){
    int arr[]={1,2,3,4,5,6};
   
    int start=0;
    int ans=getsum(arr,6,0);
    cout<<"The sum is:"<<ans<<endl;
    return 0;
}