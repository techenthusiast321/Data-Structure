#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(1);
    cout<<"Front of queue is"<<q.front()<<endl;

    q.push(2);
     cout<<"Front of queue is"<<q.front()<<endl;
    q.push(3);

    cout<<"Size of queue is "<<q.size()<<endl;

    q.pop();
    cout<<"Front of queue is"<<q.front()<<endl;
    q.pop();
    q.pop();

    cout<<"The size of queue is "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
    return 0;
}