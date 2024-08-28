#include<iostream>
using namespace std;

int main(){
    // int arr[3][4]={1,4,6,7,3,8,2,7,10,8,3,12};
    //output
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int arr[3][4];
    //input
    cout<<"Enter the input "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    //output
    // for(int j=0;j<4;j++){
    //     for(int i=0;i<3;i++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int element;
    cout<<"Enter the element you want to search:"<<endl;
    cin>>element;
    bool found=0;
    int row,column;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==element){
                found=1;
                row=i;
                column=j;
                break;
            }
        }
    }
    if(found){
         cout<<"Element found at index"<<row<<","<<column<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}