#include <stdio.h>
#include <string.h>
void minCharToEnd(char *str);
int main()
{
   char str[80];
   
   printf("Enter a string: \n");
   scanf("%s",str);
   minCharToEnd(str); 
   printf("minCharToEnd(): %s",str);  
   return 0;
}
void minCharToEnd(char *str) 
{   
	/*edit*/
/* Write your code here */
char *placeholder;
int i, length;
length=strlen(str);
for(i=0;i<length;i++){
    if(*(str+i)<*(str+i+1)){
        *placeholder=*(str+i);
        *(str+i)=*(str+i+1);
        *(str+i+1)=*placeholder;
    }
}

	/*end_edit*/
}
