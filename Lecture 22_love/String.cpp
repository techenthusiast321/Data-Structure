#include<iostream>
using namespace std;

void reverse(char name[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
    cout<<"Reversed string is:"<<name<<endl;
}

int getlength(char name[]){
    int count=0;
    int i=0;
    while(name[i]!='\0'){
        count++;
        i++;
    }
    return count;
}

int main(){
     char name[20];
     cout<<"Enter your name:"<<endl;
     cin>>name;
    //  name[2] ='\0';
    
    cout<<"Length of string is:"<<endl;
    cout<<getlength(name)<<endl;
    int len=getlength(name);
    cout<<"Your name is "<<name<<endl;
    reverse(name,len);
    return 0;
}