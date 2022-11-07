#include <stdio.h>
#include <math.h>
int main()
{
	/*edit*/
   int value,result=0;
   printf("Enter a decimal number:\n");
   scanf("%d",&value);
   if(value/8>8){
       while(value>=64){
           value-=64;
           result+=100;
       }
       while(value>=8){
           value-=8;
           result+=10;
       }
       result+=value;
       
   }
   else{
       while(value>=8){
           value-=8;
           result+=10;
       }
       result+=value;
   }
printf("The equivalent octal number: %d", result);

	/*end_edit*/
   return 0;  
}
