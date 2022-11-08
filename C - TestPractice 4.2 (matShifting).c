#include <stdio.h>
#define M 10
void matShifting(int a[M][M], int b[M][M], int n);
int main()
{
   int a[M][M], b[M][M];
   int n,i,j;
   
   printf("Enter array (nxn) size (n<=10): \n");
   scanf("%d",&n);
   for (i=0; i<n; i++) {
      printf("Enter row %d: \n", i);
      for (j=0; j<n; j++)
         scanf("%d",&a[i][j]);
   }
   matShifting(a,b,n);
   printf("Array b: \n");
   for (i=0;i<n;i++) {
      for (j=0;j<n;j++)
         printf("%d ",b[i][j]);
      printf("\n");
   }
   return 0;
}
void matShifting(int a[M][M], int b[M][M], int n)
{
	/*edit*/
   /* Write your code here */
   int i, j;
   for(i=0;i<n;i++){
       for(j=1;j<n;j++){
           b[i][j]=a[i][j-1];
       }
       b[i][0]=a[i][n-1];
   }


	/*end_edit*/
}
