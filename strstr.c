#include<stdio.h>
#include<string.h>
void main (){

char *str1="Borland International", *str2="nation", *ptr;

ptr=strstr(str1,str2);
printf("%s",ptr);

getch();
}
