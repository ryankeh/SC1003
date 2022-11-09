#include <stdio.h>
#include <math.h>
int main()
{       
	/*edit*/
   /* Write your code here */
   int bin, a, n=0, result=0;
   printf("Enter a binary number:\n");
   scanf("%d", &bin);
   while(bin!=0){
       a=bin%1000;
       bin-=a;
       if(a>=100){
           result+=4*pow(10,n);
           a-=100;
       }
       if(a>=10){
           result+=2*pow(10,n);
           a-=10;
       }
       if(a>=1){
           result+=1*pow(10,n);
           a-=1;
       }
       
       n++;
       bin/=1000;
   }
   
   printf("The equivalent octal number: %d", result); 


	/*end_edit*/
   return 0;  
}
