#include<stdio.h>

void main (){

int num[]={24,34,12,44,56,17};
int *p;
p=&num[0];
int i=0;
while(i<=5){
    printf("Element %i\t",*p);
    printf("Adress %u \n",&num[i]);
    i++;
    p++;
}

getch();
}
