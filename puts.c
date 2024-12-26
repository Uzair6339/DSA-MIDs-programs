#include<stdio.h>
#include<string.h>
void main (){

char input [16]="abc,de,fg";
char *p;

p=strtok(input,",");

if (p){
    printf("%s\n",p);
}

p=strtok(NULL,",");
if (p){
    printf("%s\n",p);
}
p=strtok(NULL,",");
if (p){
    printf("%s\n",p);
}
getch();
}

