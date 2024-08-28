#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size,int s,int e,int key){
    
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int getpivot(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
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
    int pivot=getpivot(arr,6);
    int key;
    int ans;
    cout<<"Enter the target element:";
    cin>>key;
    if(key>=arr[pivot] && key<=arr[5]){
         ans=BinarySearch(arr,6,pivot,5,key);
    }
    else{
         ans=BinarySearch(arr,6,0,pivot-1,key);
    }
    cout<<"Target element index is :" <<ans <<endl;
    return 0;
}