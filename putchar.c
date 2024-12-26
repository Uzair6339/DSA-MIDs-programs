#include<stdio.h>
#include<string.h>

#define LEFT_TOP  0xDA
#define RIGHT_TOP 0xBF
#define HORIZ     0xC4
#define VERT      0xB3
#define LEFT_BOT  0xC0
#define RIGHT_BOT 0xD9
void main (){

char i,j;
putchar(LEFT_TOP);
for (i=0; i<10; i++)
    putchar(HORIZ);
putchar(RIGHT_TOP);
putchar('\n');


for (i=0; i<4; i++){
    putchar(VERT);
    for (j=0; j<10; j++)
        putchar(' ');
    putchar(VERT);
    putchar('\n');
}

putchar(LEFT_BOT);
for(i=0; i<10; i++)
    putchar(HORIZ);
putchar(RIGHT_BOT);
putchar('\n');

getch();
}
