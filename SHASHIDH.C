#include<stdio.h>
#include<conio.h>
struct student
{
char name[20];
int marks[5];
int credits[5];
}s1;
void main()
{
int i,total,m,grade,totalcredits=0;
float cgpa;
printf("enter student name:");
gets(s1.name);
for(i=1;i<6;i++)
 {
   printf("enter the marks and credits of subject %d",i);
   scanf("%d %d",&s1.marks[i-1],&s1.credits[i-1]);
   
  }
for(i=0;i<5;i++)
 {
  m=s1.marks[i];
 if(m>=90)
 grade=10;
 else if(m>=80)
 grade=9;
 else if(m>=70)
 grade=8;
 else if(m>=60)
 grade=7;
 else if(m>=50)
 grade=6;
 else if(m>=40)
 grade=5;
 else
 grade=0;
 total+=grade*s1.credits[i];
 totalcredits+=s1.credits[i];
 }
 for(i=0;i<5;i++)
 {
  printf(the student marks in subject %d is:%d",i,marks[i]);
 }
cgpa=(float)total/totalcredits ;
printf("the cgpa of the student is :%f",cgpa);
getch();
}
