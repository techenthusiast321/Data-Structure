#include<iostream>
using namespace std;

int main(){
    int arr[]={2,1,5,7,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

    for(int i=1;i<n;i++){
         int temp=arr[i];
        int j=i-1;
        for( ;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;

}
    cout<<endl;
    cout<<"After Sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}