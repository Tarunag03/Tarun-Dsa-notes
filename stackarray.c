#include <stdio.h>
#include<stdlib.h>
#define size 10
int top=-1;
int arr[size];
void push(){
int a;
printf("Enter the value\n");
scanf("%d",&a);
top++;
arr[top]=a;
}
int pop(){
    int pr=arr[top];
    top--;
    return pr;
    printf("The popped element is %d",pr);
}
void display(){
    for(int i=0;i<=top;i++){
        printf("%d \n",arr[i]);
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