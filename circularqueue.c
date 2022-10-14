#include <stdio.h>
#include<stdlib.h>
#define size 3
int front=-1;
int rear=-1;
int arr[size];
void enqueue(){
if(front>=size-1){
    printf("overflow");
    return;
}
if(front==-1){
 int a;
printf("Enter the value\n");
scanf("%d",&a);
front=(front+1)%size;
rear=(rear+1)%size;
arr[rear]=a;
}
else{
    int a;
printf("Enter the value\n");
scanf("%d",&a);
rear=(rear+1)%size;
arr[rear]=a;
}
}
void dequeue(){
    int pr=arr[front];
    front=(front+1)%size;
    printf("The popped element is %d",pr);
}
void display(){
    int i=front;
   while(i!=rear){
        printf("%d \n",arr[i]);
    i=(i+1)%size;
}}
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
      enqueue();
      break;
    case 2:
       dequeue();
       break;
    case 3:
    display();
    case 0:
      exit(0);  
 }
}
return 0;
}