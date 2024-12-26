#include<stdio.h>


void main (){
int array[]={24,34,12,44,56,17};
int i=0;
while (i<=5){
    printf("\n Adresses %u \t", &array[i]);
    printf("\nElements %i", array[i]);
    printf(" %i", i[array]);
    printf(" %i", *(array+i));
    printf(" %i", *(i+array));
    i++;
}

getch();
}



