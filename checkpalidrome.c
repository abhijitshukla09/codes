#include <stdio.h>

int main() {
    int n,rem,rev=0,num;
    printf("enter any no.");
    scanf(" %d", &n);
    num=n;
    while(num!=0){
    rem=num%10;
    rev= rev*10+rem;
    num=num/10;
    }
    if(n==rev)
    printf("It is Palidrome");
    else
    printf("It is not palidrome");
    return 0;
}
