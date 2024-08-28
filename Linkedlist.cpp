#include<iostream>

using namespace std;
struct node{
    int data;
    node* next;

    node(int data1,int next1){
        data=data1;
        next=next1;
    }
    node(int data1){
        data=data1;
        next=nullptr;
    }
}
int main(){
    vector<int> arr={1,4,5,6};

}