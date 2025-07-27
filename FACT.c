#include <stdio.h>
void main(){
    int n,i;
    int fact=1;
    printf("enter any no:- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        fact=fact*i;
    }
    printf("\n factorial= %d",fact);

}