#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front, *rear;
void Enqueue(){
    int data;
    printf("Enter the value");
    scanf("%d",&data); 
     struct node *temp=malloc(sizeof(struct node));
        temp->data=data;
        temp->next=NULL;
        if(front==NULL){
            front=rear=temp;
        }
        else {
            rear->next=temp;
            rear=temp;
        }}
void Dequeue(){
    int a=front->data;
    if(front==NULL){
        printf("The list is empty");
      return;
    }//this will work only if list is empty
    else if(front==rear){
        front =rear=NULL;
        return;
    }
    else{
        front=front->next;
        printf("The deleted element is %d",a);
        return;
    }
}
void display(){
      struct node *s=front;
       if(front==NULL)
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
printf("1.Enqueue \n");
printf("2.Dequeue\n");
printf("3.Display\n");
printf("0.For exit");
scanf("%d",&choice);
switch(choice)
{
    case 1:
      Enqueue();
      break;
    case 2:
       Dequeue();
       break;
    case 3:
    display();
    case 0:
      exit(0);  
 }
}
return 0;
}