#include <stdio.h>
#define N 20
int main() 
{
   int a[N],i,j,k,m;
   int size;
	/*edit*/
   /* Write your code here – for additional local variables */
   
	/*end_edit*/

   printf("Enter array size: \n");
   scanf("%d",&size);
   printf("Enter %d data: \n", size);
   for (i=0; i<size; i++)
      scanf("%d", &a[i]);
   printf("Result: \n");

	/*edit*/
   /* Write your code here */
   for(i=0;i<size;i++){
       m=a[size-1];
       for(j=size-1;j>0;j--){
           a[j]=a[j-1];
       }
       a[0]=m;
       for(k=0;k<size;k++){
           printf("%d", a[k]);
       }
       printf("\n");
   }


	/*end_edit*/
   return 0;
}
