#include <stdio.h>

int main()
{
   int i, j, m, n, sum = 0;
   
   printf("Enter the number of rows: ");
   scanf("%d", &m);
   
   printf("Enter the number of columns: ");
   scanf("%d", &n);
   
   int a[m][n];
   
   printf("Enter the elements:\n");
   for (i = 0; i < m; i++) {
       for (j = 0; j < n; j++) {
           scanf("%d", &a[i][j]);
       }
   }
   
   printf("The elements:\n");
   for (i = 0; i < m; i++) {
       for (j = 0; j < n; j++) {
           printf("%d\t", a[i][j]);
       }
       printf("\n");  
   }
   
   
   for (i = 0; i < m; i++) {
       for (j = 0; j <= i; j++) {
           sum += a[j][i];
       }
   }
   
   printf("Sum of lower triangular matrix: %d\n", sum);
   
   return 0;
}
