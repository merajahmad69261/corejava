#include <stdio.h>
void printstring(char arr[]);

void printstring(char arr[]){

for(int i=0; arr [i] !='\0'; i++){

    printf("%c",arr[i]);
}
printf("\n");
}
int main(){
    char str[100];
fgets(str,100,stdin);
puts(str);
return 0;
}