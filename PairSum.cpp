#include<iostream>
using namespace std;


int main(){
    int arr[100];
    int size;
    int sum;
    cout<<"Enter the size :";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of sum:";
    cin>>sum;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==sum){
                if(arr[i]>arr[j]){
                   cout<<arr[j]<<" "<<arr[i]<<endl;
               }
               else{
                   cout<<arr[i]<<" "<<arr[j]<<endl;
               }
            }
        }
    }
    return 0;
}