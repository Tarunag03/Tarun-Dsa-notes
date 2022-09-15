#include<stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *header, *last;
void insertfirst(int data){
      struct node *temp=malloc(sizeof(struct node));
        temp->data=data;
        temp->next=NULL;
        if(header==NULL){
            header=last=temp;
        }
        else {
            temp->next=header;
            header=temp;
            last->next=header;

        }}
void insertmiddle(int loc, int value){
    struct node *temp=header;
    while(temp!=NULL){
        if(temp->data==loc){
            struct node *t=malloc(sizeof(struct node));
            t->data=value;
                          if(temp!=last){
                           t->next=temp->next;
                           temp->next=t;}
                         else{
                         last->next=t;
                         t->next=header;
                         }}
        else{
            temp=temp->next;
        }
        }
        
    }

void insert(int data){ 
     struct node *temp=malloc(sizeof(struct node));
        temp->data=data;
        temp->next=NULL;
        if(header==NULL){
            header=last=temp;
            temp=temp->next;
            
        }
        else {
            last->next=temp;
            temp->next=header;
            last=temp;

        }}

void show(){
      struct node *s=header;
       if(header==NULL){
       printf("\n List empty");
       return;
       }
       else {
        do{
        printf("->%d",s->data);
        s=s->next;
        }while (s!=header);        
    }
}
void deleteval(){
 int val;
 if (header==NULL){
    printf("the list is empty");
 }
 printf("Enter the value you want to delete");
 scanf("%d",&val);
 if(header->data==val){
    header=header->next;
    last->next=header;
    last=header;
     return;
    if(header->next==header){
        header=last=NULL;
        return;}
    else{
        header=header->next;
        last=header;
        return;
    }
    }
else {
    struct node *t=header;
    struct node *prev;
    while(t->next!=header){
           if(t->data==val){
               prev->next=t->next;
               if(t==last){
                last=prev;
               }
               return;
            }
            else {
                prev=t;
                t=t->next;


            }

        }if(t->data==val){
            prev->next=t->next;
            last=prev;
            return;
        }

printf("Value not present");
}

 }
 

int main(){
     int a,c;
     int ch;
    printf("Enter the values 1 or 0 for exit :- ");
    scanf("%d",&ch);
    while(ch!=0){
        printf("Enter the value:- ");
        scanf("%d",&a);
        insert(a);
        printf("Enter 1 if want to enter more and otherwise 0:-  ");
        scanf("%d",&ch);
    }
     show();
     printf("\n");
     deleteval();
     printf("After delteling");
      show();
     
     }