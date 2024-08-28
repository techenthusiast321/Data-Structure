#include<iostream>

using namespace std;


int main(){
    int arr[9]={1,6,3,2,4,2,6,8,10};
    cout<<"Before Sorting:"<<endl;
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    
    for(int i=0;i<8;i++){
        int minIndex=i;
        int temp;
        for(int j=i+1;j<9;j++){
            if(arr[j]<arr[minIndex]){
                   minIndex=j;
            }
                 
        }
            temp=arr[minIndex];
            arr[minIndex]=arr[i];
            arr[i]=temp; 
        }
    cout<<endl<<"After Sorting:"<<endl;
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    }
    
