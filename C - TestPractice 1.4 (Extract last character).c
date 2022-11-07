#include <stdio.h>
#include <string.h>
void extractLastChar(char *str1, char *str2);
int main()
{
   char str1[80], str2[80], *p;
   
   printf("Enter a string: \n");
   fgets(str1, 80, stdin);  
   if (p=strchr(str1,'\n')) *p = '\0';
   extractLastChar(str1, str2);
   printf("extractLastChar(): %s\n", str2);
   return 0;
}  
void extractLastChar(char *str1, char *str2)  
{
	/*edit*/
   int i=0,j=0,n=0;
   n=strlen(str1);
   for(i;i<=n;i++){
       if(str1[i+1]==' '){
           str2[j]=str1[i];
           j++;
       }
   }
str2[j]=str1[n-1];
str2[j+1]='\0';

	/*end_edit*/
}
