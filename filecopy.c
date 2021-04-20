#include<stdio.h>

int main(void){
FILE * fp;
FILE * fp2;
char c,f1[30],f2[30];
printf("Enter the file name to open");
gets(f1);


fp = fopen(f1,"rt");
if(fp == NULL)
{

     printf("Unable to open file.\nQuitting.........");
     return 1;
}
printf("Enter file name of destination file");
gets(f2);
fp2 = fopen(f2,"wt");
if(fp2 == NULL)
{
     printf("Unable to open file.\nQuitting......... ");
}
     

while((c = fgetc(fp))!= EOF ){
      putchar(c);

}

fclose(fp);
return 0;

}
