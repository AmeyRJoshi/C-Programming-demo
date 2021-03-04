#include<stdio.h>

int main(){
// ASCII CHARACTERS
char ch;
printf("Enter the character\n");
scanf("%c",&ch);
if(ch<=122 && ch>=97){
     printf("It is lowercase");
}else{
     printf("It is not lowercase");
}
return 0;

}
