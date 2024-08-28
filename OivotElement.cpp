#include<iostream>
using namespace std;
int getpivot(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=e+(s-e)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;

        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[6]={7,9,1,2,3,4};
    int ans=getpivot(arr,6);
    cout<<"Pivot element:"<<arr[ans]<<endl;
    return 0;
}
