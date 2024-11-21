#include<stdio.h>
#include<string.h>

  //user define;

  struct student{
char name[100];
int roll;
float cgpa;

  } ;
int main(){
struct student s1;
s1.roll=1093;
s1.cgpa=8.6;
//s1.name="Meraj AHmad";
strcpy(s1.name,"Meraj");
printf("name is=%s\n",s1.name);
printf("roll is=%d\n",s1.roll);
printf("cgpa is=%f\n",s1.cgpa);
    return 0;
}