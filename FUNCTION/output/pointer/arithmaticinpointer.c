#include<stdio.h>

void dowork(int a,int b,int*sum,int*prod,int *avg);

void dowork(int a,int b,int*sum,int*prod,int *avg){
    *sum=(a+b);
    *prod=(a*b);
    *avg=(a+b)/2;

}

int main (){
int a=6,b=9;
int sum,prod,avg;
dowork(a,b,&sum,&prod,&avg);
printf("sum= %d\n,prod=%d\n,avg=%d\n",sum,prod,avg);

    return 0;
}