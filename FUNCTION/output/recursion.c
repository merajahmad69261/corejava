#include<stdio.h>

int sum(int n);

int sum(int n){
   if(n==1){ //(base case)
    return 1;
   }
int sumNm1=sum(n-1);//sum of 1 to n;
int sumN=sumNm1+n;
return sumN;

}
int main(){

printf("sum of n :%d",sum(5));
return 0;


}