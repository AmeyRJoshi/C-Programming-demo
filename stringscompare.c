#include<stdio.h>
#include<string.h>

int main(){
     char string1[40];
     char string2[40];

     int value;


     printf("Enter the first string: ");
     scanf("%s",string1);

     printf("Enter the second string : ");
     scanf("%s",string2);

     value = strcmp(string1,string2);
     if(value==0)
     printf("strings are the same");
     else
     printf("string are not same");
     return 0;
}