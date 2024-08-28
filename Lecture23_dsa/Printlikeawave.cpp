#include<iostream>
using namespace std;


void printlikeawave(int arr[3][3],int i,int j){
       for(int j=0;j<3;j++){
            if(j%2==0){
                for(int i=0;i<3;i++){
                    cout<<arr[i][j]<<" "<<endl;
                }
                cout<<endl;
            }
            else{
                 for(int i=2;i<=0;i--){
                     cout<<arr[i][j]<<" "<<endl;
                 }
                 cout<<endl;
            }
           
    }    
}
int main(){
    int arr[3][3];
    cout<<"Enter the 2d array:"<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    printlikeawave(arr,3,3);

    return 0;
}