#include <stdio.h>
#include<stdlib.h>
void toh(int n, char a, char b, char c){
    if(n==1){
        printf("Moved from %c to %c \n",a,c);
        return;
    }
    else{
        toh(n-1,a,c,b);
        printf("Move %c to %c \n",a,b);
        toh(n-1,b,a,c);
    }
}
int main(){
    int n;
    printf("Enter the no of disks");
    scanf("%d",&n);
    toh(n,'a','b','c');
}