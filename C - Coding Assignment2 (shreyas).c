#include <stdio.h>
#include <string.h>
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
void modify(char str[], int size);

int main()
{   
   Room r[MAX];
   int i,j;       
   int choice=0;
   char dummyChar;

   for(i=0;i<MAX;i++){
        r[i].status=0;
        r[i].roomID=i+1;
    }
   
   printf("NTU HOTEL ROOM RESERVATION PROGRAM: \n");
   printf("1: listOccupiedRooms()\n");     
   printf("2: assignRoom()\n");
   printf("3: removeRoom()\n");
   printf("4: findCustomer()\n");
   printf("5: quit\n"); 
   do {
      printf("Enter your choice: \n");
      scanf("\n%d", &choice);
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
            findCustomer(r);
            break;
      }
   } while (choice!=5); 
   return 0;
}

void listOccupiedRooms(Room *r){
    int i=0,j=0;
    for(i=0;i<=4;i++){
        if (r[i].status==1){
            printf("roomID: %d\n", r[i].roomID);
            printf("customer name: %s\n", r[i].customerName);
            j+=1;
        }
    }
    if(j==0){
        printf("The hotel is empty\n");
    }
}

void assignRoom(Room *r){
    int i,j=0;
    int k;
    char name[80];
    char dummyChar;
    for(k=0;k<=4;k++){
        if (r[k].status==1){
            j+=1;
        }
    }
    if(j==5){
        printf("The hotel is full\n");
        return;
    }
   
    i=9;
    while (i==9)
    {
        printf("Enter a roomID between 1 and 5:\n");
        scanf("%d",&i);
        if(i<1 || i>5){
            i=9;
            continue;}
        if (r[i-1].status==1){
            printf("Occupied! Enter another roomID\n");
            i=9;
        }
        else if (r[i-1].status==0){
            printf("Enter customer name:\n");
            scanf("\n");
            gets(name);
            r[i-1].status=1;
            strcpy(r[i-1].customerName,name);
            printf("The room has been assigned successfully\n");
            return;
        }
        i=9;
    }
}

void removeRoom(Room *r){
    int i,j=0;
    for(i=1;i<=5;i++){
        if (r[i-1].status==0){
            j+=1;
        }
    }
    if(j==5){
        printf("All the rooms are empty\n");
        return;
    }
    while (1) {
        printf("Enter a roomID between 1 and 5: \n");
        scanf("%d", &i);
        if(0<i && i<6){
            if(r[i-1].status==0){
                printf("Empty! Enter another roomID for removal\n"); //\e[1m sets bold and \e[m resets bold
            }
            else{
                r[i-1].status=0;
                printf("Removal is successful\n");
                break;
            }
        }
        else{
            continue;
        }
    }
}

void findCustomer(Room *r){
    int i,j=0,n=0,lengtha,lengthb;
    char stra[80],strb[80]="";
    char dummyChar;
    printf("Enter customer name:\n");
    scanf("\n");
    gets(stra);
    lengtha=strlen(stra);
    for(i=0;i<lengtha;i++){
        stra[i]=tolower(stra[i]);
    }
    for(i=1;i<=5;i++){
        if(r[i].status==1){
            strcpy(strb, r[i].customerName);
            modify(strb, 20);
            if(strcmp(stra,strb)==0){
                printf("The target customer name is found\n");
                printf("roomID: %d\n", r[i].roomID);
                printf("customer name: %s\n", r[i].customerName);
                return;
            }
            else{
                n+=1;
            }
        }
        else{
            n+=1;
        }
    }
    if(n==5){
        printf("The target customer name is not found\n");
        return;
    }
}

void modify(char str[], int size){
    for (int i = 0; i < size; i++){
        str[i] = tolower(str[i]);
    }
}
