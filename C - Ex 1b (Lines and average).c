#include <stdio.h>
int main()  
{
    int integerinput=0, integersum=0, lines, i, j, denominator=0;
    float average;
    printf("Number of lines: ");
    scanf("%d", &lines);
    
    for (i=0; i<lines; i++){
        j=i+1;
        printf("Enter line %d (end with -1):", j);
        while (integerinput != -1)
            {
            scanf("%d", &integerinput);
            denominator = denominator+1;
            integersum = integersum + integerinput;
            }
        average = (float)(integersum+1) / (float)(denominator-1);
        printf("Average = %0.2f \n", average);
        integerinput=0;
        integersum=0;
        denominator=0;
        }
    return 0;
}
