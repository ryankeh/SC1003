#include <math.h>
#include <stdio.h>
int main() 
{        
	/*edit*/
   /* Write your code here */
   double x, result=1;
   int i, j, fac;
   
   printf("Enter a number:\n");
   scanf("%lf", &x);
   
   for(i=2;i<21;i+=2){
       fac=1;
       for(j=1;j<=i;j++){
           fac*=j;
       }
       result+=(pow(x,i)/fac);
   }
   
   for(i=1;i<20;i+=2){
       fac=1;
       for(j=1;j<=i;j++){
           fac*=j;
       }
       result-=(pow(x,i)/fac);
   }
   
   printf("Result = %.2f", result);

	/*end_edit*/
   return 0;  
}
