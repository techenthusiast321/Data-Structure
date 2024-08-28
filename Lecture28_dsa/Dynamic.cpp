#include<iostream>
using namespace std;
int getsum(int *arr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    // char ch='q';
    // cout<<sizeof(ch)<<endl;

    // char* c=&ch;
    // cout<<sizeof(c)<<endl;

    // int *i=new int;

    int n;
    cin>>n;
    //variable size array
    int* arr=new int[n];

    //taking input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<getsum(arr,n)<<endl;


    return 0;
}