#include<iostream>
using namespace std;

void print(int *p){

    cout<< *p << endl;

}

void update(int *p){

    *p=*p+1;
    // cout<<p<<endl;

}

int getsum(int arr[],int n){
    // cout<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){

    // int value=5;
    // int *p=&value;
    // cout<<p<<endl;
    // print(p);
    // cout<<"Before "<<*p<<endl;
    // update(p);
    // cout<<"After "<<*p<<endl;

    int arr[5]={1,2,3,4,5};

    cout<<getsum(arr,5)<<endl;

    return 0;

}