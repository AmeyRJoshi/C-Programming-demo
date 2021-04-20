// File handling
// File Pointer 
/*
List of functions:









*/ 
#include<stdio.h>

int main(){


FILE * fp;
fp = fopen("abc.txt","rt");
/*  c:\\File location ,right before  abc .text
     areaoftriangle.c will give its code 
     wt = write text 
     rt = read text */
if(fp == NULL)
{

     printf("Unable to open file.\nQuitting.........");
     return 1;
}else
     printf("succesfully opened the file\n ");
     

while(1){
     char c ;
     c = fgetc(fp);
     if(c == EOF) break;
     printf("%c",c);
}
// fputc('A',fp);
     // fputc('B',fp);
     // fputc('C',fp); changes the text in the file to ABCfputc('A',fp);
     /*fprintf(fp,"\nYou hav got %d marks in exam",m)*/
fclose(fp);

return 0;

}
