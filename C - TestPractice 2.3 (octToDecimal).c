#include <stdio.h>
#include <math.h>
int main()
{      
	/*edit*/
    int input, output=0;
    
    printf("Enter an octal number:\n");
    scanf("%d", &input);
    output+=((input/100)*64);
    input-=((input/100)*100);
    output+=((input/10)*8);
    input-=((input/10)*10);
    output+=input;
    printf("The equivalent decimal number: %d\n", output); 


	/*end_edit*/
   return 0;  
}
