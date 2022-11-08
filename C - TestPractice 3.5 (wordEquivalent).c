#include <stdio.h>
#include <string.h>
void wordEquivalent(int num, char *str);
int main()
{
   int num;
   char str[40]="";
   
   printf("Enter the number: \n");        
   scanf("%d", &num);
   wordEquivalent(num, str);
   printf("wordEquivalent(): %s", str);   
   return 0;
}
void wordEquivalent(int num, char *str)
{
	/*edit*/
   /* Write your code here */
int a,b,i;
   char stra[40],strb[40]="";
   char str0[10][6]={{'z','e','r','o'},{'o','n','e'},{'t','w','o'},{'t','h','r','e','e'},{'f','o','u','r'},{'f','i','v','e'},{'s','i','x'},{'s','e','v','e','n'},{'e','i','g','h','t'},{'n','i','n','e'}};
   char blankstr[40]=" ";
   a=num%10;
   b=num/10;
   for(i=0;i<10;i++){
       if(a==i){
           strcpy(stra,str0[i]);
       }
   }
   for(i=1;i<10;i++){
       if(b==i){
           strcpy(strb,str0[i]);
       }
   }
   strcat(str,stra);
   strcat(str,blankstr);
   strcat(str,strb);
	/*end_edit*/
}
