#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *header, *last;
void deltelast(){
    struct node *t1=header;
    struct node *prev=NULL;
      if(header==NULL){
        printf("The list is empty");
       return;
    }
    else if(header==last){
        header =last=NULL;
    return;}

   else{ while(t1->next!=NULL){
    prev=t1;
    t1=t1->next;
   }
         prev->next=NULL;
         last=prev;
    }return;

}
void create(int data){ 
     struct node *temp=malloc(sizeof(struct node));
        temp->data=data;
        temp->next=NULL;
        if(header==NULL){
            header=last=temp;
        }
        else {
            last->next=temp;
            last=temp;
        }}
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

        }}
void insertmiddle(int loc, int value){
    struct node *temp=header;
    while(temp!=NULL){
        if(temp->data==loc){
            struct node *t=malloc(sizeof(struct node));
            t->data=value;
            t->next=temp->next;
            temp->next=t;}
        else{
            temp=temp->next;
        }
        }
        
    }


void show(){
      struct node *s=header;
       if(header==NULL)
       printf("->%d",s->data);
       else {
        while (s!=NULL){
        printf("->%d",s->data);
        s=s->next;}
    }
}
void deletefirst(){
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
        return;
    }
}
void deletelast(){
    if(header==NULL){
        printf("The list is empty");
       return;
    }
    else if(header==last){
        header =last=NULL;
    return;
    }
    else{
        struct node *p=header;
        while(p->next!=last){
            p=p->next;
        }
        p->next=NULL;
        last=p;
    }return;
}
void deletewant(int no){
    struct node *prev=NULL;
    if(header->data==no){
        deletefirst();
        return;
    }
    else if(header==NULL){
        printf("The list is empty");
       return;}
       
    else if(last->data==no){
        deletelast();
        return;
    }
    else {
         struct node *temp=header;
         while(temp!=NULL){
            if (temp->data==no){
              prev->next=temp->next;

             return;
            }
            else{
                prev=temp;
                temp=temp->next;
            }
         }


    }
    printf("Data not exist");
    
}
void revlink(){
    struct node *temp,*prev,*next1;
    prev=NULL;
    temp=header;
     if(header==NULL){
        printf("The list is empty");
       return;
    }
    else {
    while (temp){
        next1=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next1;

    }
    last=header;
    header=prev;}
}
void printrev(struct node *temp){
    if(temp==NULL){
        return;
    }
    printrev(temp->next);
    printf("->%d",temp->data);
}
 void sortList() {  
        struct node *current = header,*next1 = NULL;  
        int temp;  
          
        if(header == NULL) {  
            return;  
        }  
        else {  
            while(current != NULL) {  
                
                next1 = current->next;  
                  
                while(next1 != NULL) {  
                    if(current->data > next1->data) {  
                        temp = current->data;  
                        current->data = next1->data;  
                        next1->data = temp;  
                    }  
                    next1= next1->next;  
                }  
                current = current->next;  
            }      
        }  
    }
// void subli(struct node *temp,int size){
//    while(temp<=size){
    
//    }

// }
void swapair(){
     struct node *t1,*t2,*t3,*t4;
        if(header==NULL|| header->next==NULL)
            return;
            t1=header;
            t2=header->next;
            t3=t2->next;
            header=t2;
            while(1){
                t2->next=t1;
                if(t3==NULL||t3->next==NULL){
                    t1->next=t3;
                    return;
                }
                else{
                    t1->next=t3->next;
                    t1=t3;
                    t2=t1->next;
                    t3=t2->next;

                }
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
        create(a);
        printf("Enter 1 if want to enter more and otherwise 0:-  ");
        scanf("%d",&ch);
    }
     show();
     printf("\n");
     //printf("enter the value your want to delete");
     //printf("\n");
     //scanf("%d",&c);
     //printf("\n");
    //deletewant(c);
      // printf("\n");
     // revlink();
  //   printrev(header);
   // show();
   sortList();
  //swapair();
   show();
    
     }