#include <stdio.h>
#define MAX 5
typedef struct{
 int roomID;
 int status;
 char customerName[20];
} Room; 

void listOccupiedRooms(Room *r);   
void assignRoom(Room *r);
void removeRoom(Room *r);
void findCustomer(Room *r);

int main()
{    
   Room r[MAX];
   int i,j;        
   int choice=0;

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
            // listOccupiedRooms(r);  
            break;
         case 2:   
            printf("assignRoom(): \n");
            assignRoom(r);
            break;
         case 3:   
            printf("removeRoom(): \n");       
            // removeRoom();
            break;
         case 4:
            printf("findCustomer(): \n");
            // findCustomer();
            break;
      }
   } while (choice!=5);  
   return 0;
}

void assignRoom(Room *r){
    char nameInput[80];
    while (1) {
        printf("Enter a roomID between 1 and 5: \n");
        scanf("%d", &(r->roomID));
        if(r->status==1){
            printf("\e[1mOccupied! Enter another roomID\e[m\n"); //\e[1m sets bold and \e[m resets bold
            break;
        }
        else{
            printf("Enter customer name: \n");
            scanf("%c", &(r->customerName));
            // fgets(r->customerName, 80, stdin);
            printf("The room has been assigned successfully\n");
        }
        break;
    }
}      
