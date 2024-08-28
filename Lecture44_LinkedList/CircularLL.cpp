#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    
    ~Node(){
        int value=this->data;
        if(this->next !=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for the data"<<value<<endl;
    }
};
void insertNode(Node* &tail,int element,int data){
    
    //empty list
    if(tail==NULL){
        Node* newNode=new Node(data);
        tail=newNode;
        newNode->next=newNode;

    }

    else{
        //assuming that the element is present in the list

        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        //Element found and current uske upar h
        Node* temp=new Node(data);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void deleteNode(Node* &tail,int element){
    //empty
    if(tail==NULL){
        cout<<"List is empty,Please check again"<<endl;
        return;
    }
    else{
        //non-empty
        Node* prev=tail;
        Node* curr=prev->next;

        while(curr->data != element){
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;
        //1 node LL
        if(curr=prev){
            tail==NULL;
        }
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}

void print(Node* &tail){
    Node* temp=tail;

    //empty list
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}
int main(){
    Node* tail=NULL;
    //empty list me insert kar rhe h
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,7);
    print(tail);
    insertNode(tail,7,10);
    print(tail);



    deleteNode(tail,7);
    print(tail);

    return 0;
}