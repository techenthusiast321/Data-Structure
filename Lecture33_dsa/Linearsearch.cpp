#include<iostream>
using namespace std;
void print(int arr[],int k){
    cout<<"The size of array is:"<<k<<endl;

    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool search(int arr[],int size,int key){
        print(arr,size);
        if(size==0){
            return false;
        }
        if(key==arr[0]){
            return true;
        }
        else{
            return search(arr+1,size-1,key);
        }
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int key;
    cin>>key;
    
    cout<<search(arr,5,key)<<endl;;
    return 0;

}