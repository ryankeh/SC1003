#include <stdio.h>
int reverseDigits(int num);
int main()
{
int num, result=999;
printf("Enter a number: \n");
scanf("%d", &num);
printf("reverseDigits(): %d\n", reverseDigits(num));
return 0;
}
int reverseDigits(int num)
{
	/*edit*/
/* Write your code here */
int a,length=0,result=0,i,pow;
a=num;
while(a!=0){
    a/=10;
    length++;
}
while(num!=0){
    pow=1;
    i=length;
    for(i;i>1;i--){
        pow*=10;
    }
    result+=(num%10)*pow;
    num/=10;
    length--;
}
return result;

	/*end_edit*/
}
