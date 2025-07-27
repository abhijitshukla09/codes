#include <stdio.h>
int main(){
    int i=1,n,d1,d2,sq,sum=0;
    printf("enter any number");
    scanf("%d",&n);
   while(n!=0){
       d1=n%10;
       //d2=d1%10;
       //sum=d1+d2;
       sum+=d1;
       n/=10;
       
       sq=sum*sum;
      // sum+=i;
        
    }
    printf("sum of digits %d\n",sum);
    printf("square of number is %d",sq);
    return 0;
}