#include <stdio.h>

int main() {
    int n,t1=0,t2=1,nxt,i;
    printf("enter any no.");
    scanf(" %d", &n);
    for(i=0;i<=n;i++)
    {
        printf("%d ",t1);
        nxt=t1+t2;
        t1=t2;
        t2=nxt;
    }
    return 0;
}
