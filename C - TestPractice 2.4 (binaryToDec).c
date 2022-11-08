#include <stdio.h>
#include <math.h>
int main() 
{        
	/*edit*/
   int input,output=0,i=1;
   printf("Enter a binary number:\n");
   scanf("%d", &input);
   while(input!=0){
       output+=(input%10)*pow(2,i-1);
       input/=10;
       i++;
   }
   printf("The equivalent decimal number: %d\n", output);


	/*end_edit*/
   return 0;  
}
