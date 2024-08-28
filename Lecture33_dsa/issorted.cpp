#include<iostream>
using namespace std;

bool isSorted(int arr[],int start,int n){
    if(start==n-1){
        return true;
    }
    if(arr[start]<arr[start+1]){
        return isSorted(arr,start+1,n);
    }
    else{
        return false;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int i=0;
    cout<<isSorted(arr,i,size)<<endl;
    return 0;
}