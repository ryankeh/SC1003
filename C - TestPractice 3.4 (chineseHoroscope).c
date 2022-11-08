#include <stdio.h>
int main() 
{                 
	/*edit*/
   /* Write your code here */
   int n=0;
   while(n!=-1){
       printf("Enter your birth year:\n");
       scanf("%d",&n);
       if(n%12==4){
           printf("chineseHoroscope: Rat\n");
       }
       else if(n%12==5){
           printf("chineseHoroscope: Cow\n");
       }
       else if(n%12==6){
           printf("chineseHoroscope: Tiger\n");
       }
       else if(n%12==7){
           printf("chineseHoroscope: Rabbit\n");
       }
       else if(n%12==8){
           printf("chineseHoroscope: Dragon\n");
       }
       else if(n%12==9){
           printf("chineseHoroscope: Snake\n");
       }
       else if(n%12==10){
           printf("chineseHoroscope: Horse\n");
       }
       else if(n%12==11){
           printf("chineseHoroscope: Goat\n");
       }
       else if(n%12==0){
           printf("chineseHoroscope: Monkey\n");
       }
       else if(n%12==1){
           printf("chineseHoroscope: Rooster\n");
       }
       else if(n%12==2){
           printf("chineseHoroscope: Dog\n");
       }
       else if(n%12==3){
           printf("chineseHoroscope: Pig\n");
       }
       
   }


	/*end_edit*/
   return 0;
}
