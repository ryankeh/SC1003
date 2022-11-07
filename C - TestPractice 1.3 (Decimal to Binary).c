#include <stdio.h>
#include <math.h>
int main()
{
	/*edit*/
   int value, result=0, n=10;
   printf("Enter a decimal number:\n");
   scanf("%d",&value);
   for(n;n>=0;n--){
       if(value>=pow(2,n)){
           value-=pow(2,n);
           result+=pow(10,n);
       }
   }
   printf("The equivalent binary number: %d", result); 

	/*end_edit*/
   return 0;  
}
