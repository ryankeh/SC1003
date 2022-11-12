#include <stdio.h>

typedef struct{
 int roomID;
 int status;
 char customerName[20];
} Room; 

void listOccupiedRooms();   
int assignRoom(int roomChoice);
void removeRoom();
void findCustomer();

int main()
{    
   int i,j;        
   int choice;
   int roomChoice, resulta;
    
   printf("NTU HOTEL ROOM RESERVATION PROGRAM: \n");
   printf("1: listOccupiedRooms()\n");      
   printf("2: assignRoom()\n");
   printf("3: removeRoom()\n");
   printf("4: findCustomer()\n");
   printf("5: quit()\n");  
   do {
      printf("Enter your choice: \n");
      scanf("%d", &choice);
      switch (choice) {
         case 1:  
            printf("listOccupiedRooms(): \n");
            listOccupiedRooms();  
            break;
         case 2:   
            printf("assignRoom(): \n");
            printf("Enter a roomID between 1 and 5: \n);
            scanf("%d", &roomChoice);     
            resulta=assignRoom(int roomChoice);
            if(resulta==1){
              print("The room has been assigned successfully\n");
              }
            break;
         case 3:   
            printf("removeRoom(): \n");       
            scanf("%d %d", &col1, &col2);
            swap2Cols(array, col1, col2);
            printf("The new array is: \n");       
            display(array);
            break;
         case 4:
            printf("findCustomer(): \n");
            display(array);
            break;
      }
   } while (choice < 5);  
   return 0;
}
