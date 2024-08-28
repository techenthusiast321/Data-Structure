#include<iostream>
using namespace std;
int firstoccurance(int arr[],int size,int key){
    int s=0;
    
    int e=size-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
              ans=mid;
              e=mid-1;
        }
        else if(arr[mid]>key){
              e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastoccurance(int arr[],int size,int key){
    int s=0;
    
    int e=size-1;
    int ans1=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
              ans1=mid;
              s=mid+1;
        }
        else if(arr[mid]>key){
              e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans1;
}
int noofoccurance(int arr[],int size,int key){
     return (lastoccurance(arr,10,4)-firstoccurance(arr,10,4))+1;
}
int main(){
    int arr[10]={2,4,4,4,4,4,5,7,8,10};
    int ans=noofoccurance(arr,10,4);
    cout<<"No of occurance is:"<<ans<<endl;
    return 0;

}