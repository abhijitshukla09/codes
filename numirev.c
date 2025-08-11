#include <stdio.h>

int main() {
      int i,j,rows,num=1;
   printf("enter any no. ");
   scanf("%d",&rows);
   for(i=rows;i>=1;i--)
   {
       for(j=1;j<=i;j++)
       {
           printf("%d",i);
       
       }
       printf("\n");
   }

    return 0;
}
