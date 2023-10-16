#include <stdio.h>

int main() {
    int input = 0;
    int i,j;
    char space;
    printf("Enter a number (between 1 and 9): \n");
    scanf("%d", &input);
    printf("%c ", space);
    for(i=0; i<input; i++){
        printf("%d ", i+1);
    }
    for(i=0; i<input; i++){
        printf("\n%d ", i+1);
        for(j=0; j<i+1; j++){
            printf("%d ", (i+1)*(j+1));
        }
    }

    return 0;
}
