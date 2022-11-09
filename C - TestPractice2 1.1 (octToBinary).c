#include <stdio.h>
#include <math.h>
int main()
{
	/*edit*/
   /* Write your code here */
   int oct, a, n=0, result=0;
   printf("Enter an octal number:\n");
   scanf("%d", &oct);
   while(oct!=0){
       a=oct%10;
       oct-=a;
       if(a>=4){
           result+=pow(10,3*n+2);
           a-=4;
       }
       if(a>=2){
           result+=pow(10,3*n+1);
           a-=2;
       }
       if(a>=1){
           result+=pow(10,3*n);
           a-=1;
       }
       n++;
       oct/=10;
   }
   printf("The equivalent binary number: %d", result);


	/*end_edit*/
   return 0;  
}
