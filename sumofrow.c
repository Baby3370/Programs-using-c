#include <stdio.h>

int main()
{
   int i,j,m,n,sum=0;
   printf("enter the sumber of rows:");
   scanf("%d",&m);
   printf("enter the sumber of coloumns:");
   scanf("%d",&n);
   int a[m][n];
   printf("enter the elements:\n");
   for(i=0;i<m;i++){
       for(j=0;j<n;j++){
           scanf("%d",&a[i][j]);
       }
   }
   printf(" the elements:\n");
   for(i=0;i<m;i++){
       int sr=0;
       for(j=0;j<n;j++){
           
           sr=sr+a[i][j];
          
       }
       printf("\n");
        printf("sr is:%d\n",sr);
  
       
   }
  
   return 0;
   
}
