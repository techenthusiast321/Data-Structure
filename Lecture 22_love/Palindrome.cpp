#include<iostream>
using namespace std;
int length(char str[]){
    int i=0;
    int count=0;
    while(str[i]!='\0'){
        count++;
    }
    return count;
}
int main(){
    char str[20];
    cout<<"Enter string"<<endl;
    cin>>str;
    int i=0;
    int j=length(str)-1;

    bool isPalindrome=1;
    while(i<j){
        if(str[i]!=str[j]){
            isPalindrome=0;
            break;
        }
       
        i++;
        j--;
    }
    if(isPalindrome==0){
        cout<<"Not a palindrome";
    }
    else{
        cout<<"The given string is a palindrome";
    }
    return 0;
}