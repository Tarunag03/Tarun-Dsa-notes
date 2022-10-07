
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int data;
	int priority;
	struct node* next;

} Node;
Node *head;
Node* newNode(int d, int p)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = d;
	temp->priority = p;
	temp->next = NULL;

	return temp;
}
void pop()
{
	Node* temp = head;
	head = head->next;
	free(temp);
}
void push()
{
    int p,d;
    printf("Enter the priority");
    scanf("%d",&p);
    printf("Enter the data");
    scanf("%d",&d);
	Node* start = head;

		Node* temp = newNode(d, p);
      if(head==NULL){
            head=temp;
        }
else{
	if (head->priority < p) {

		temp->next = head;
		head = temp;
	}
	else {
        while (start->next != NULL && start->next->priority < p) {
			start = start->next;
		}
		temp->next = start->next;
		start->next = temp;
	}
}
}
void display(){
      struct node *s=head;
       if(head==NULL)
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
printf("0.For exit\n");
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
