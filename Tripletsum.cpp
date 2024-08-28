#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int size;
    cout<<"Enter the size:";
    cin>>size;
    int sum;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of sum:";
    cin>>sum;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=i+2;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
    
    return 0;
}