#include <stdio.h>
#include <math.h>
#include <string.h>
int hexStrToDec(char *hex);
int main()
{
   int num;
   char hex[100];
   
   printf("Enter a hexadecimal number: \n"); 
   scanf("%s",&hex);
   num=hexStrToDec(hex);
   printf("hexStrToDec(): %d\n", num);
   return 0;
}
int hexStrToDec(char *hex)
{
	/*edit*/
   /* Write your code here */
   int result=0, length, i, j, k;
   char letter[6][1]={{"A"},{"B"},{"C"},{"D"},{"E"},{"F"}};
   length=strlen(hex);
   printf("length: %d\n", length);
   for(i=0;i<length;i++){
       for(j=0;j<6;j++){
           printf("hex/letter: %d/%d\n", hex[i],letter[j]);
           if(hex[i]==letter[j]){
               result+=(j+10)*pow(16,length-i-1);
               break;
           }
       }
       printf("hex[i]: %c\n", hex[i]);
       result+=hex[i]*pow(16,length-i-1);
   }
    return result;

	/*end_edit*/
}
