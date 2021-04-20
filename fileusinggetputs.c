#include<stdio.h>

int main(void){
FILE * fp;
FILE * fp2;
FILE  * fp1;
char c,f1[30],f2[30],LINE[80],x;
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
     

while(1)//fgets returns a null.
{
    x = fgets(LINE,80,fp1);
     if(x== NULL)break;
     puts(LINE);

}

fclose(fp);
fclose(fp2);
return 0;

}
