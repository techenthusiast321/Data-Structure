#include<iostream>
using namespace std;
int mountainarray(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i+1]>arr[i]){
              //Eat 5star do nothing
        }
        else{
            return i;
        }
    }
}
int main(){
    int arr[6]={1,3,4,2,1,0};
    int ans=mountainarray(arr,6);
    cout<<"Peak index is:"<<ans<<endl;
    return 0;
}