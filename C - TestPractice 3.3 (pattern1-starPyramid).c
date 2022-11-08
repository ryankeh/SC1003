#include <stdio.h>
int main() 
{        
	/*edit*/
   /* Write your code here */
int n,i,j;
printf("Enter the height:\n");
scanf("%d", &n);
printf("The pattern is:\n");
for(i=1;i<=n;i++){
    for(j=0;j<(n-i);j++){
        printf(" ");
    }    
    for(j=0;j<(2*i-1);j++){
        printf("*");
    }
    printf("\n");
}

	/*end_edit*/
   return 0;  
}
