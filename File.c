#include<stdio.h>

int main(void){
FILE * fp;
char c,f1[30],f2[30];
printf("Enter the file name to open");
gets(f1);


fp = fopen(f1,"rt");
if(fp == NULL)
{

     printf("Unable to open file.\nQuitting.........");
     return 1;
}
     

while((c = fgetc(fp))!= EOF ){
      putchar(c);

}

fclose(fp);
return 0;

}
