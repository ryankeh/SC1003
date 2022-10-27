#include <stdio.h>
#include <string.h>
char *sweepSpace1(char *str);
char *sweepSpace2(char *str);
int main()
{
   char str[80],str2[80], *p;
  
   printf("Enter the string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0';  
   strcpy(str2,str);
   printf("sweepSpace1(): %s\n", sweepSpace1(str));
   printf("sweepSpace2(): %s\n", sweepSpace2(str2));
   return 0;
}
char *sweepSpace1(char *str)   
{
int i=0,j=0;
char returnString[80];
while (1){
    if (str[i] == '\0') {
        printf("Hi\n");
        break;
    }
    else if (str[i]!=' '){
        returnString[j++] = str[i];
    }
    i++;
    }
returnString[j] = '\0';
printf("%s", returnString);
return returnString;
}

char *sweepSpace2(char *str)   
{
   /* Write your program code here */
}
