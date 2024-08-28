#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
      int start=0;
      int end=size-1;
      int mid;
      while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        int mid=start+(end-start)/2;
      }
      return -1;
}
int main(){
    
    int oddarr[5]={1,4,6,7,9};
    int evenarr[6]={1,3,4,8,9,10};
    int key;
    int Oddans=binarysearch(oddarr,5,6);
    cout<<"Index of 6 is:"<<Oddans<<endl;

    int Evenans=binarysearch(evenarr,6,10);
    cout<<"Index of 10 is:"<<Evenans<<endl;
    return 0;

}