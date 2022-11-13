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

   for(i=1;i<6;i++){
        r[i].status=0;
        r[i].roomID=i;
    }
    
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
            listOccupiedRooms(r);  
            break;
         case 2:   
            printf("assignRoom(): \n");
            assignRoom(r);
            break;
         case 3:   
            printf("removeRoom(): \n");       
            removeRoom(r);
            break;
         case 4:
            printf("findCustomer(): \n");
            // findCustomer(r);
            break;
      }
   } while (choice!=5);  
   return 0;
}

void listOccupiedRooms(Room *r){
    int i=0,j=0;
    for(i=1;i<=5;i++){
        if (r[i].status==1){
            printf("roomID: %d\n", r[i].roomID);
            printf("customer name: %s\n", r[i].customerName);
            j+=1;
        }
    }
    if(j==0){
        printf("\e[1mThe hotel is empty\e[m\n");
    }
}

void assignRoom(Room *r){
    int i,j=0;
    char nameInput[80];
    for(i=1;i<=5;i++){
        if (r[i].status==1){
            j+=1;
        }
    }
    if(j==5){
        printf("\e[1mThe hotel is full\e[m\n");
        return;
    while (1) {
        printf("Enter a roomID between 1 and 5: \n");
        scanf("%d", &i);
        if(0<i && i<6){
            printf("Room ID: %d\n", r[i].roomID);
            if(r[i].status==1){
                printf("\e[1mOccupied! Enter another roomID\e[m\n"); //\e[1m sets bold and \e[m resets bold
            }
            else{
                printf("Enter customer name: \n");
                scanf("\n%s", r[i].customerName);
                printf("customer name: %s\n", r[i].customerName);
                printf("The room has been assigned successfully\n");
                r[i].status=1;
                break;
            }
        }
        else{
            continue;
        }
    }
}

void removeRoom(Room *r){
    int i,j=0;
    for(i=1;i<=5;i++){
        if (r[i].status==0){
            j+=1;
        }
    }
    if(j==5){
        printf("\e[1mAll the rooms are empty\e[m\n");
        return;
    }
    while (1) {
        printf("Enter a roomID between 1 and 5: \n");
        scanf("%d", &i);
        if(0<i && i<6){
            if(r[i].status==0){
                printf("\e[1mEmpty! Enter another roomID for removal\e[m\n"); //\e[1m sets bold and \e[m resets bold
            }
            else{
                r[i].status=0;
                printf("Removal is successful\n");
                break;
            }
        }
        else{
            continue;
        }
    }
}
