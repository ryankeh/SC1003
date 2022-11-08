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
int length,i=0,j=0,k=0;
length=strlen(str);
for(i;i<length;i++){
    if(str[i]==ch){
        j+=1;
    }
}
if(j==0){
    return NULL;
}
k=j-n+1;
for(i=0;i<length;i++){
    if(str[i]==ch){
        k--;
    }
    if(k==0){
        return (str+i);
    }
}
	/*end_edit*/
}
