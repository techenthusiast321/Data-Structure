#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    //Base case
    if(n==0||n==1){
        return;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubblesort(arr,n-1);
}
int main(){
    int arr[]={1,7,2,8,10};
    int size=5;
    bubblesort(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

