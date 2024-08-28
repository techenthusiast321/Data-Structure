#include <stdio.h>
struct Array{
    int *p;
    int size;
    int length;
};
int main(){
  int n=100;//No of llamas
    
   
   int count=0;
   
   while(n!=200){
       int z=n/3;
       int y=n/4;
       n=n+z-y;
       count++;
   }
   printf("%d",count);

    return 0;
}