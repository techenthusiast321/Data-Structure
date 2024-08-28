#include<iostream>
using namespace std;

int main(){
    int num=5;
    cout<<num<<endl;

    //address of operator
    // cout<<"Address of num is "<<&num<<endl;
    // int *ptr=&num;
    // // cout<<num<<endl;
    // // cout<<*ptr<<endl;
    // // cout<<ptr<<endl;
    // double d=4.2;
    // double *p2=&d;
    // cout<<*p2<<endl;
    // cout<<p2<<endl;
    // cout<<"size of pointer is"<<p2<<endl;

    //important concepts
    int i=3;
    int *t=&i;
    // (*t)=*t +1;
    // cout<<*t<<endl;
    cout<<t<<endl;
    t=t+1;
    cout<<t<<endl;


    return 0;
}