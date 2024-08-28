#include<iostream>
using namespace std;
bool binarysearch(int arr[],int key,int start,int end){
    if(start>end){
        return false;
    }
    int mid=start+(end-start)/2;
  
    if(arr[mid]==key){
            return true;
    }
    else if(arr[mid]<key){
            return binarysearch(arr,key,mid+1,end);
    }
    else{
            return binarysearch(arr,key,start,mid-1);
    }
    
    
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int key;
    
    int start=0;
    int end=4;
    cout<<"Enter the key element you want to search:"<<endl;
    cin>>key;

    int ans=binarysearch(arr,key,start,end);
    cout<<ans<<endl;
    return 0;
}