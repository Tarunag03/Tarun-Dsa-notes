#include<stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *header, *last;
struct node *create(){

      struct node *temp=malloc(sizeof(struct node));
        printf("Enter the value you want\n");
        scanf("%d",&temp->data);
        temp->next=NULL;
        return temp;
}
void insert(){ 
     struct node *temp=create();
        // printf("Enter the value you want\n");
        // scanf("%d",&temp->data);
        // temp->next=NULL;
        if(header==NULL){
            header=last=temp;
        }
        else {
            last->next=temp;
            temp->prev=last;
            last=temp;

        }}
void insertfirst()
{ 
    struct node *temp=malloc(sizeof(struct node));
    printf("Enter the value you want to insert first\n");
        scanf("%d",&temp->data);
        temp->next=NULL;
        temp->prev=NULL;
        if(header==NULL){
            header=last=temp;}

        else {
            temp->next=header;
            header->prev=temp;
            header=temp;

        }}

void insertlast(){

     struct node *temp=malloc(sizeof(struct node));
       printf("Enter the value you want to insert last \n");
        scanf("%d",&temp->data);
    
        temp->next=NULL;
        temp->prev=NULL;
        if(header==NULL){
            header=last=temp;
        }
        else {
            temp->prev=last;
            last->next=temp;
            last=temp;

        }}
void insertwant(){
  int loc;int value;
    printf("Insert the value\n");
    scanf("%d",&value);
     printf("Insert the loc \n");
     scanf("%d",&loc);
    struct node *temp=malloc(sizeof(struct node));
    temp->data=value;
    struct node *t=header;
    while (t!=NULL){
        if(t->data==loc){
           temp->next=t->next;
            t->next->prev=temp;
           t->next=temp;
            temp->prev=t;
            return;
        }
        else{
            t=t->next;
        }
    }
        
    }

void deletefirst(){
      if(header==NULL){
        printf("Linked list is null");
    }
    else{
            header->next->prev=NULL;
            header=header->next;
            return;
          }
    
}
void deletelast(){
   if(header==NULL){
        printf("Linked list is null");
    }
    else{
            last->prev->next=NULL;
            last=last->prev;
          
}}

void show(){
      struct node *s=header;
       if(header==NULL){
       printf("\n List empty");
       return;
       }
       else {
        printf("In forward direction");
        printf("\n");
       while(s!=NULL){
        printf("->%d",s->data);
        s=s->next;
       }        
       printf("\n");
       printf("In backward direction");
       printf("\n");
       s=last;
       while(s!=NULL){
        printf("->%d",s->data);
        s=s->prev;
       
       } printf("\n");
    } return;
}
void deletewant()
{int val;

    printf("Enter the value you want to delete \n");
        scanf("%d",&val);
    struct node *temp=header;
    if(header==NULL){
        printf("Linked list is null");
    }
    else{
          if(header->data==val){
            header->next->prev=NULL;
            header=header->next;
            return;
          }
          else if(last->data==val){
            last->prev->next=NULL;
            last=last->prev;
          }
          else{
            while(temp){
            if(temp->data==val){
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
                return;
            }
            else{
                temp=temp->next;
            }
            }
            
          }

    }
    printf("The data you enter is not present in the list ");
}

int main(){
    int choice;
    //  int a,c,val;
    //  int ch;
    // printf("Enter the values 1 or 0 for exit :- ");
    // scanf("%d",&ch);
    // while(ch!=0){
    //     printf("Enter the value:- ");
    //     scanf("%d",&a);
    //     insertfirst(a);
    //     printf("Enter 1 if want to enter more and otherwise 0:-  ");
    //     scanf("%d",&ch);
    // }
    //  show();
    //  printf("\n");
    //  printf("Enter the value you want to delete");
    //  scanf("%d",&val);
    //  deletewant(val);
    //  show();
    //  }
while(1){
printf("1.Insert \n");
printf("2.Insert at first\n");
printf("3.Insert at last\n");
printf("4.delete at first \n");
printf("5.delete at last \n");
printf("6.Display \n");
printf("7.Deletewant\n");
printf("8.Insertwant\n");
printf("9.Exit\n");
scanf("%d",&choice);
switch(choice)
{
    case 1:
      insert();
      break;
    case 2:
       insertfirst();
       break;
    case 3:
        insertlast();
        break;
    case 4:
        deletefirst();
        break;
    case 5:
        deletelast();
        break;
    case 6:
        show();
         break;
    case 7:
        deletewant();
         break;
    case 8:
        insertwant();
        break;
    default:
      exit(0);
    
 }
}
return 0;
}