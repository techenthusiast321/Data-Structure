#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //destructor
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memeory is free for node"<<value<<endl;
    }
};
//Insert at Head
void insertAtHead(Node* &head,int d){
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;

}
//Insert At Tail
void insertAtTail(Node* &tail,int d){
    Node *temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
    
    
}

void insertAtPosition(Node* &tail,Node* &head,int position,int d){
    //insert at Start
    if(position==1){
        insertAtHead(head,d);
        return;
    }

    Node *temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //Inserting at Last Position
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    //Creating a node for d
    Node* nodeToinsert=new Node(d);
    nodeToinsert->next=temp->next;
    temp->next=nodeToinsert;
}

void deletenode(Node* &head,int position){
    //First node delete
    if(position==1){
        Node* temp=head;
        head=head->next;

        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle or last node
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        

    }
}
//Print function
void print(Node* &head){
    Node *temp=new Node(20);
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    //created a new node
    Node *node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    //head pointed to node
    Node *head=node1;
    Node *tail=node1;
    print(head);

    insertAtTail(tail,20);
    print(head);
    insertAtTail(tail,30);
    print(head);

    insertAtPosition(tail,head,4,22);
    print(head);

    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    deletenode(head,3);
    print(head);

    return 0;
}