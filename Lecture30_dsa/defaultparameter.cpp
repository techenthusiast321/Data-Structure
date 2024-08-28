#include<iostream>
using namespace std;

int getsum(int arr[],int size,int start=0){
    int sum=0;
    for(int i=start;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int sum=getsum(arr,5,);
    cout<<"The sum is:"<<sum<<endl;
    return 0;
}