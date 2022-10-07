#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *header, *last;
void push(){
    int data;
    printf("Enter the value\n");
     scanf("%d",&data);
      struct node *temp=malloc(sizeof(struct node));
        temp->data=data;
        temp->next=NULL;
        if(header==NULL){
            header=last=temp;
        }
        else {
            temp->next=header;
            header=temp;

        }}
void pop(){
    int a=header->data;
    if(header==NULL){
        printf("The list is empty");
      return;
    }//this will work only if list is empty
    else if(header==last){
        header =last=NULL;
        return;
    }
    else{
        header=header->next;
         printf("The popped element is \n %d",a);
        return;
    }
    printf("The popped element is \n %d",a);
}
void display(){
      struct node *s=header;
       if(header==NULL)
       printf("->%d",s->data);
       else {
        while (s!=NULL){
        printf("->%d",s->data);
        s=s->next;}
    }
}
int main(){
    int choice;
    while(1){
printf("\n");
printf("1.Insert \n");
printf("2.Pop\n");
printf("3.Display\n");
printf("0.For exit");
scanf("%d",&choice);
switch(choice)
{
    case 1:
      push();
      break;
    case 2:
       pop();
       break;
    case 3:
    display();
    case 0:
      exit(0);  
 }
}
return 0;
}