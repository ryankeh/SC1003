#include <stdio.h>
int main() 
{        
	/*edit*/
   /* Write your code here */
   int n, i, j, control;
   
   printf("Enter the height:\n");
   scanf("%d", &n);
   printf("The pattern is:\n");
   for(i=0;i<n;i++){
       for(j=0;j<n-i-1;j++){
           printf(" ");
       }
       for(j=i+1;j>0;j--){
           if(j%2==1){
               printf("+");
           }
           if(j%2==0){
               printf("=");
           }
       }
       control=0;
       for(j=i;j>0;j--){
           if(control%2==0){
               printf("=");
           }
           if(control%2==1){
               printf("+");
           }
           control++;
       }
       printf("\n");
   }
	/*end_edit*/
   return 0;  
}
