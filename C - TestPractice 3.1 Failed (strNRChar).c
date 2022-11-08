// string in main function remains a null string, need to use pointer instead

#include <stdio.h>   
#include <string.h>
char *strNRChr(char *str, int n, char ch);
int main()
{
   char str[80], ch, dummy;
   char *temp=NULL;  
   int n;

   printf("Enter a string: \n");
   scanf("%s",str); 
   scanf("%c",&dummy); 
   printf("Enter a char: \n");
   scanf("%c",&ch);    
   printf("Enter the occurrence: \n");
   scanf("%d", &n);    
   temp = strNRChr(str, n, ch); 
   printf("strNRChr(): %s\n", temp);
   if (temp!=NULL)  
      printf("strNRChr(): %s\n", temp);   
   else 
      printf("strNRChr(): null string\n");
   return 0;
}
char *strNRChr(char *str, int n, char ch)
{ 
	/*edit*/
/* Write your code here */
printf("original string: %s\n", str); 
int length,i=0;
char outputStr[80],flipStr[80];
length=strlen(str);
printf("string length: %d\n", length); 
while(n!=0){
    flipStr[i]=str[length-1];
    printf("flipStr: %s\n", flipStr);
    if(str[length-1]==ch){
        n--;
    }
    length--;
    i++;
}
flipStr[i]='\0';
printf("flipStr: %s\n", flipStr);
length=strlen(flipStr);
for(i=0;i<length;i++){
    outputStr[i]=flipStr[length-1-i];
}
printf("outputStr: %s\n", outputStr);
return outputStr;
	/*end_edit*/
}
