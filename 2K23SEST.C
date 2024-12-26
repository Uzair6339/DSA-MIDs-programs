#include<stdio.h>
#include<string.h>
struct Student
{
	char name[8];
	float marks;
	int age;

};
void myFunValue(struct Student t){
	 strcpy(t.name,"gg");
	 t.age=100;
	 t.marks=888;

}
void myFunRef(struct Student *p){
       strcpy(p->name,"DFC");
       p->age=8;
       p->marks=999;

}

void main(){
	struct Student s1={"Ahmed", 54.5f, 20};
	struct Student s2,s3,*p;

	s2 = s1; //one go
	strcpy(s2.name,"Maida");
	s2.marks=100.0f;
	s2.age=19;
	//s3.name= s1.name;//error
	strcpy(s3.name,s1.name);
	s3.marks= s1.marks;
	s3.age= s1.age;
	clrscr();
	printf("%u %u %u\n",s1,s2,s3);
	printf("Address of S1, S2 and S3%u %u %u\n",&s1,&s2,&s3);
	printf("Student 1: %u %u %u\n", &s1.name, &s1.marks, &s1.age);
	printf("Student 2: %u %u %u\n", &s2.name, &s2.marks, &s2.age);
	printf("Student 3: %u %u %u\n", &s3.name, &s3.marks, &s3.age);
	printf("Student 1: %s %f %i\n", s1.name, s1.marks, s1.age);
	printf("Student 2: %s %f %i\n", s2.name, s2.marks, s2.age);
	printf("Student 3: %s %f %i\n", s3.name, s3.marks, s3.age);
	p = &s1;
	printf("Pointer Student 1: %s %f %i\n", p->name, p->marks, p->age);
	strcpy(p->name,"KFC");
	p->marks=444;
	p->age=90;
	printf("After Reassign values Pointer Student 1: %s %g %i\n", p->name, p->marks, p->age);
	p = &s2;

	printf("Pointer Student 2: %s %f %i\n", p->name, p->marks, p->age);

	p = &s3;
	printf("Pointer Student 3: %s %f %i\n", p->name, p->marks, p->age);
	myFunValue(s1);//Pass by value
	printf("Pass By Value Student 1: %s %f %i\n", s1.name, s1.marks, s1.age);

	myFunRef(&s1);//Pass by Reference
	printf("Pass Ref Student 1: %s %f %i\n", s1.name, s1.marks, s1.age);




	getch();
}