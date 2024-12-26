#include<stdio.h>
#include<string.h>
void main (){
char destination[25];

char  *blank=" ",*c="C++",*t="Turbo";

strcpy(destination,t);
strcat(destination,blank);
strcat(destination,c);
printf("%s",destination);

getch();
}
