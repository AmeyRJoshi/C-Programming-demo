#include <stdio.h>
#define MAX_SIZE 100 


int main()
{
    char str[MAX_SIZE];
    int j;

 
    printf("Enter your text : ");
    gets(str);

    for(j=0; str[j]!='\0'; j++)
    {
        
        if(str[j]>='a' && str[j]<='z')
        {
            str[j] = str[j] - 32;
        }
    }

    printf("Uppercase string : %s",str);
    return 0;
}