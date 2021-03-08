#include<stdio.h>

int main(){
char a;
printf("Enter your first letter : ");
scanf("%c",&a);
// The code view is adjusted so that it fits the screenshot hence the if statement has U condition on the other line, this does not break the code.Everything in the code works fine.

if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'){
     printf("The First letter is a vowel.");
}else{
     printf("The First letter is a consonant.");
}
return 0;

}
