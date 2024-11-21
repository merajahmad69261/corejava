#include<stdio.h>
#include<stdlib.h>
 int main(){

float *ptr;
ptr=(float*)calloc(5 , sizeof(float));

prntf("enter numbers(5) :");
for(int i=0; i<5; i++){
    scanf("%d\n", &ptr[i]);
}
ptr= realloc(ptr,8);
prntf("enter numbers(8) :");
for(int i=0; i<8; i++){
    scanf("%d\n", &ptr[i]);
}
  for(int i=0; i<8;i++)  {

    printf("number %d is %d" ,i,ptr[i]);
  }
return 0;
 }
 
 
 
