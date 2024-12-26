#include<stdio.h>

void main (){

int num[]={24,34,12,44,56,17};
int i=0;
while(i<=5){
    printf("Element %i\t",num[i]);
    printf("Memory Adress %u \n",&num[i]);
    i++;
}

getch();
}
