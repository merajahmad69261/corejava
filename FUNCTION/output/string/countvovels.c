#include <stdio.h>
#include <string.h>
int countvovels(char str[]);//function name 
int countvovels(char str[]){
 int Count=0;
 for(int i=0;str[i]!='\0'; i++){

    if (str [i]=='a'|| str[i]=='e'||str[i]=='i'||str [i]=='o'||str [i]=='u') {
                      
                      //fun. defination.
        Count++;
    }
 }
return Count;
}


int main(){
  char str[]="Meraj";  
   printf("vovels are : %d",countvovels(str));//function call
return 0;
}