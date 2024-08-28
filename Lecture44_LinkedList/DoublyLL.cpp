#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }

    //destructor
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for node with data"<<val<<endl;
    }
};

void print(Node* head){
     Node* temp=head;
     while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
     }
     cout<<endl;
}
int getLength(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}

//Insert at head
void insertAtHead(Node* &head,int data){
    //Create a new node first
    if(head==NULL){
            Node* temp=new Node(data);
            head=temp;
    }
    else{
            Node* node1=new Node(data);
            Node* temp=node1;
            head->prev=temp;
            temp->next=head;
            head=temp;
    }

}
//Insert at Tail
void insertAtTail(Node* &tail,int d){
    //Create a new node
    
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=tail->next;
}
//Insert at any Position
void insertAtPosition(Node* &head,Node* &tail,int d,int position){
    if(position==1){
        insertAtHead(head,d);
        return;
    }

    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //Inserting at last position
    if(temp->next==NULL){
        insertAtTail(tail,d);
    }

    //create a new node
    Node* nodeToInsert=new Node(d);

    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}
void deletenode(Node* &head,int position){
    //First node delete
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next->prev=NULL;

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
        curr->prev=NULL;
        curr->next->prev=prev;
        curr->next=NULL;
        delete curr;
        

    }
}

int main(){
    Node* node=new Node(10);
    Node* head=node;
    Node* tail=node;
    print(head);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);
    print(head);
    insertAtTail(tail,6);
    print(head);
    // cout<<"The length of Linked List is:"<<getLength(head)<<endl;
    insertAtPosition(head,tail,100,2);
    print(head);

    insertAtPosition(head,tail,101,1);
    print(head);
    cout<<endl;
    deletenode(head,3);
    print(head);

    return 0;
}