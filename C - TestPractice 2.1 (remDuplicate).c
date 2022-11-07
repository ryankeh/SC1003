#include <stdio.h>
#define N 20
int remDuplicates(int a[], int size);
int main()
{
   int a[N],i,size;
   
   printf("Enter array size: \n");
   scanf("%d",&size);
   printf("Enter %d data:\n",size);
   for (i=0; i<size; i++)
      scanf("%d",&a[i]);    
   size=remDuplicates(a,size);
   printf("remDuplicates(): \n");
   for (i=0; i<size; i++) 
      printf("%d ",a[i]);
   printf("\n");
   return 0;
}
int remDuplicates(int a[], int size)
{
	/*edit*/
    int j=0,i=0;
    for(i=0;i<size;i++){
        j=0;
        while(a[i]==a[i-1]){
            a[i]=a[i+j];
            j++;
        }
        if(a[i]>a[i+1]){
            a[i+1]='\0';
        }
    }

	/*end_edit*/
}
