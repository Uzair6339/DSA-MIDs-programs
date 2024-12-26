#include<stdio.h>


void main (){
int stud [5][2]={{1234,56},
                {1212,33},
                {1434,80},
                {1312,78},
                {1203,75}
                };

int i,j;
for (i=0; i<=4; i++){
    printf("Address of 1D array %i\n",stud[i]);
}

getch();
}



