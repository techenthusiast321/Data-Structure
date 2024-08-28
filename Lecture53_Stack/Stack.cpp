#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
       int *arr;
       int size;
       int top;

    //Constructor
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    //Methods
    void push(int x){
        if(top==size-1){
            cout<<"Stack overflow"<<endl;
        }
        else{
            top++;
            arr[top]=x;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }

    int peek(){
        if(top==-1){
            cout<<"Stack in empty"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }



};
int main(){

    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(23);
    st.push(22);
    st.push(43);
    st.push(23);
    st.pop();
    cout<<"The top element of stack is "<<st.peek()<<endl;
    st.pop();
    cout<<"The top element of stack is "<<st.peek()<<endl;
    st.pop();
    cout<<"The top element of stack is "<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    // //creation of stack
    // stack<int> st;
    // //pushing elements into stack
    // st.push(2);
    // st.push(3);
    // //pop element
    // st.pop();
    // cout<<"The top element of stack is "<<st.top()<<endl;

    // if(st.empty()){
    //     cout<<"Stack is not empty"<<endl;
    // }
    // else{
    //     cout<<"Stack is not empty"<<endl;
    // }

    // cout<<"Size of stack is "<<st.size()<<endl;



    return 0;
}