/*custom header*/
#include <stdlib.h>
#include <math.h>
	/*end_edit*/
#include <stdio.h>
int octStrTodec(char *str);
int main()
{
   char str[20],*sp;
   int num;
   
   printf("Enter an octal number: \n");
   scanf("%s",str);
   num=octStrTodec(str);
   printf("octStrTodec(): %d\n",num);
   return 0;
}
int octStrTodec(char *str) 
{
	/*edit*/
   /* Write your code here */
   int size, input, output=0 ,i=0 ,j;
   int value;
   input=atoi(str);
   while(input!=0){
        output+=(input%10)*pow(8,i);
        input/=10;
        i++;
    }
    return output;


	/*end_edit*/
}
