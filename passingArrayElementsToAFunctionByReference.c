#include<stdio.h>
void display(int *a){

printf("%i\n",*a);
}
void main (){
int i;

int marks []={55,65,75,56,78,78,90};

for (i=0; i<=6; i++){
    display(&marks[i]);
}
getch();
}
