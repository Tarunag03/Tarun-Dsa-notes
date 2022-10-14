#include<stdio.h>
#include<stdlib.h>

struct Node {
    int coeff;
    int pow;
    struct Node* next;
};
 
struct Node *create_node(struct Node* temp)
{
    int x,  y,size; 
    printf("Enter the size of terms");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
    printf("Enter the coeff and power\n");
    scanf("%d %d", &x,&y);

    struct Node *r, *z;
    z = temp;
    if (z == NULL) {
        r = (struct Node*)malloc(sizeof(struct Node));
        r->coeff = x;
        r->pow = y;
        temp = r;
        r->next = (struct Node*)malloc(sizeof(struct Node));
        r = r->next;
        r->next = NULL;
    }
    else {
        r->coeff = x;
        r->pow = y;
        r->next = (struct Node*)malloc(sizeof(struct Node));
        r = r->next;
        r->next = NULL;
    }
}
return temp;
}
void polyadd(struct Node* poly1, struct Node* poly2,
             struct Node* poly)
{
    while (poly1->next && poly2->next) {
        if (poly1->pow > poly2->pow) {
            poly->pow = poly1->pow;
            poly->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
 
        else if (poly1->pow < poly2->pow) {
            poly->pow = poly2->pow;
            poly->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
        else {
            poly->pow = poly1->pow;
            poly->coeff = poly1->coeff + poly2->coeff;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }

        poly->next
            = (struct Node*)malloc(sizeof(struct Node));
        poly = poly->next;
        poly->next = NULL;
    }
    while (poly1->next || poly2->next) {
        if (poly1->next) {
            poly->pow = poly1->pow;
            poly->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        if (poly2->next) {
            poly->pow = poly2->pow;
            poly->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
        poly->next
            = (struct Node*)malloc(sizeof(struct Node));
        poly = poly->next;
        poly->next = NULL;
    }
}
 

void show(struct Node* node)
{
    while (node->next != NULL) {
        printf("%dx^%d", node->coeff, node->pow);
        node = node->next;
        if (node->coeff >= 0) {
            if (node->next != NULL)
                printf("+");
        }
    }
}
 
int main()
{
    struct Node *poly1 = NULL, *poly2 = NULL, *poly = NULL;
 
   
  struct Node *p = create_node(poly1);
    struct Node *p1=create_node(poly2);
 
    printf("1st Number: ");
    show(p);
 
    printf("\n2nd Number: ");
    show(p1);
 
    poly = (struct Node*)malloc(sizeof(struct Node));
 

    polyadd(p, p1, poly);
     printf("\nAdded polynomial: ");
    show(poly);
 
    return 0;
}
