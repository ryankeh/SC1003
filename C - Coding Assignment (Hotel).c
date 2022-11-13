#include <stdio.h>

typedef struct{
 int roomID;
 int status;
 char customerName[20];
}room; 

void listOccupiedRooms();   
void assignRoom();
void removeRoom();
void findCustomer();

int main()
{    
   int i,j;        
   int choice;
   int roomChoice, resulta;
   int room.roomID, room.status;
   char room.customername[20];
    
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
                 
            resulta=assignRoom(int roomChoice);
            if(resulta==1){
              printf("The room has been assigned successfully\n");
              }
            if(resulta==0){
              printf("\e[1mOccupied! Enter another roomID\e[m\n"); //\e[1m sets bold and \e[m resets bold
              }       
            break;
         case 3:   
            printf("removeRoom(): \n");       
            
            break;
         case 4:
            printf("findCustomer(): \n");
            
            break;
      }
   } while (choice < 5);  
   return 0;
}

void assignRoom(){
   char nameInput[80];
   while (1) {
      printf("Enter a roomID between 1 and 5: \n");
      scanf("%d", &(room->roomChoice));
      if (p=strchr(room‐>customerName,'\n')) *p = '\0';
      printf("Enter customer name: \n");
      fgets(room‐>customerName, 80, stdin);     
      size++;
   }
   room[roomChoice].roomID = roomChoice;
   fgets(nameInput, 80, stdin);
   room[roomChoice].customerName = nameInput;
}          
