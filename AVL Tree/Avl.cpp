#include<iostream>
using namespace std;
class Node{
    public:
    int data,height;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        height=1;
        left=right=NULL;
    }

};
int getHeight(Node* root){
    if(!root){
        return 0;
    }
    return root->height;
}
int getBalance(Node* root){
    return getHeight(root->left)-getHeight(root->right);
}
Node* rightRotation(Node* root){
    Node* child=root->left;
    Node* childRight=child->right;

    child->right=root;
    root->left=childRight;

    //Update the height
    root->height=1+max(getHeight(root->left),getHeight(root->right));
    child->height=1+max(getHeight(child->left),getHeight(child->right));

    return child;
}
Node* leftRotation(Node* root){
    Node* child=root->right;
    Node* childLeft=child->left;

    child->left=root;
    root->right=childLeft;

    //Update the height
    root->height=1+max(getHeight(root->left),getHeight(root->right));
    child->height=1+max(getHeight(child->left),getHeight(child->right));

    return child;
}
Node* insert(Node* root,int key){
    //Doesn't exists
    if(!root){
        return new Node(key);
    }
    //Exist karta hain
    if(key<root->data){//left side
        root->left=insert(root->left,key);
    }
    else if(key>root->data){
        root->right=insert(root->right,key);
    }
    else{
        return root;//duplicate elements allowed nahi h
    }

    //Update height
    root->height=1+max(getHeight(root->left),getHeight(root->right));

    //Balancing check
    int balance=getBalance(root);

    //Left left case
    if(balance>1 && key<root->left->data){
        return rightRotation(root);
    }
    //Right right case
    if(balance<-1 && key>root->right->data){
        return leftRotation(root);
    }
    //Left Right case
    if(balance>1 && key>root->left->data){
        root->left=leftRotation(root->left);
        return rightRotation(root);
    }
    //Right left case
    if(balance<-1 && key<root->right->data){
        root->right=rightRotation(root->right);
        return leftRotation(root);
    }
    //No unbalancing
    else{
        return root;
    }
}   
void preorder(Node* root){
    if(!root){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
} 
    
void inorder(Node* root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node* root=NULL;
    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,30);
    root=insert(root,50);
    root=insert(root,70);
    root=insert(root,5);
    root=insert(root,100);
    root=insert(root,95);
    cout<<"Preorder:"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Inorder"<<endl;
    inorder(root);
    return 0;
}
