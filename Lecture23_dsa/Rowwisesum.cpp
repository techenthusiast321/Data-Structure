#include<iostream>
using namespace std;

//column wise sum
// void printsum(int arr[][4],int i,int j){
//        for(int j=0;j<4;j++){
//              int sum=0;
//             for(int i=0;i<3;i++){
//                 sum=sum+arr[i][j];
//             }
//             cout<<"The sum is"<<sum<<endl;
//        }
// }

int largestrowsum(int arr[][4],int i,int j){
       int ans=0;
       int row=-1;
       for(int i=0;i<3;i++){
            int sum=0;
            for(int j=0;j<4;j++){
                sum=sum+arr[i][j];
            }
            if(sum>ans){
                ans=sum;
                row=i;
            }
       }
       return row;
}


int main(){
    int arr[3][4];
    cout<<"Enter the 2d Array:"<<endl;
    //input
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    //rowwise sum
    // int sum;
    // for(int i=0;i<3;i++){
    //     sum=0;
    //     for(int j=0;j<4;j++){
    //             sum=sum+arr[i][j];
    //     }
    //     cout<<"The sum of row"<<i<<" is "<<sum<<endl;
    // }

    // printsum(arr,3,4);
    cout<<"Row index of maximum sum is"<<largestrowsum(arr,3,4)<<endl;
    return 0;
}