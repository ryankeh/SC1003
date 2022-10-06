#include <stdio.h>
int main()  
{
    int integerinput=0, integersum=0, lines, linesinitial=0;
    printf("Number of lines: ")
    scanf("%d", &lines)
    
    for (linesinitial; lines)
    printf("Enter integer numbers:");
    while (integerinput != -1)  
    {
    printf("");
    scanf("%d", &integerinput);
    integersum = integersum + integerinput;
    }
    printf("%d", integersum+1);
    
    return 0;
}
