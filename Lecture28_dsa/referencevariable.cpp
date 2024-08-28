#include<iostream>
using namespace std;
void update(int& n){
    n++;
}

int* fun(int n){
    int *ptr=&n;
    return ptr;//Bad practise
}

int main(){

    //creating a reference variable

    // int i=5;
    // int &j=i;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;
    // cout<<j<<endl;
    int n=5;
    cout<<"Before: "<<n<<endl;
    update(n);
    cout<<"After: "<<n<<endl;



    return 0;
}