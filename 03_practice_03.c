#include<stdio.h>

int main(){
int a ,b ,c ;

printf("Enter your First number : \n");
scanf("%d",&a);

printf("Enter your Second number : \n");
scanf("%d",&b);

printf("Enter your Third number : \n");
scanf("%d",&c);

if(a>b && a>c ){
     printf("The First number you entered is the greatest number.");
}
if(b>a && b>c){
     printf("The Second number you entered is the greatest number.");
}

if(c>a && c>b ){
     printf("The Third number you entered is the greatest number.");
}
return 0;

}
