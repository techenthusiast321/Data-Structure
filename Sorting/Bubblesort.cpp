#include<iostream>
using namespace std;


int main(){
    int arr[9]={1,6,3,2,4,2,6,8,10};
    cout<<"Before Sorting:"<<endl;
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    bool swapped=false;
    for(int i=1;i<9;i++){
        int temp;
        for(int j=0;j<9-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=true;

            }
        }
        if(swapped=false){
            //Already sorted
            break;

        }
    }
    cout<<endl<<"After Sorting:"<<endl;
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    }
    
