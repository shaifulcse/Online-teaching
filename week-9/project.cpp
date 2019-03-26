/*
Skeleton for a fake telephone book software
*/


#include<stdio.h>
#include<string.h>
#define SIZE 1000

int options();
void insert();
void delete_person();
void update();
void show();
void search();

int ind=0;
struct person{
    int age;
    char name[50];
    char phone[30];
}contact[SIZE];

int options(){
    int option;
    char c;
    printf("###################\n");
    printf("Insert: 1\n");
    printf("Delete: 2\n");
    printf("Update: 3\n");
    printf("Search: 4\n");
    printf("Show: 5\n");
    printf("Exit: 6\n");
    printf("###################\n");
    printf("Selection an option:");
    scanf("%d",&option);
    //this is to read the tangling new line
    scanf("%c",&c);
    if(option==1)
        insert();
        else if(option==2)
        delete_person();
        else if(option==3)
        update();
        else if(option==4)
        search();
        else if(option==5)
        show();
        else if (option == 6)
        return 0;
}

void insert(){
    char c;
    printf("\n\n#######################\n");
    printf("Enter name:");
    scanf("%[^\n]",contact[ind].name);
    printf("Enter age:");
    scanf("%d",&contact[ind].age);
    scanf("%c",&c);
    printf("Enter phone number:");
    scanf("%[^\n]",contact[ind].phone);
    ind++;
    printf("#######################\n");
    options();
}

void delete_person(){
    printf("I am delete\n");
    options();
}
void update(){
    printf("I am update\n");
    options();
}

void search(){
    printf("I am search\n");
    options();
}

void show(){
    int i;
    printf("\n\n####################\n\n");
    for(i=0;i<ind;i++){
        printf("Name: %s\n",contact[i].name);
        printf("Age: %d\n",contact[i].age);
        printf("Phone number: %s\n\n",contact[i].phone);
    }
    options();
}

void exit(){
    printf("I am exit\n");
    options();
}

int main(){
    options();
    return 0;
}

