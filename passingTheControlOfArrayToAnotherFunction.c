#include<stdio.h>
void display (int *array,int n){
int i=0;
while (i<n){
    printf("%i\n",*array);
    i++;
    array++;
}
}
void main (){
int array[]={24,34,12,44,56,17};
int n=6;
display(&array[0],n);

getch();
}



