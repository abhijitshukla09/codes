#include <stdio.h>
int main(){
    int n,d1,sum=0;
    printf("enter any number");
    scanf("%d",&n);
   while(n!=0){
       d1=n%10;  
       sum+=d1/d1;
       n/=10;
    }
    printf("no. of digits %d\n",sum);
    return 0;
}