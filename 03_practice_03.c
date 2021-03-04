#include<stdio.h>

int main(){
int a ,b ,c ,d;

printf("Enter your First number : \n");
scanf("%d",&a);

printf("Enter your Second number : \n");
scanf("%d",&b);

printf("Enter your Third number : \n");
scanf("%d",&c);

printf("Enter your Fourth number : \n");
scanf("%d",&d);

if(a>b && a>c && a>d){
     printf("The First number you entered is the biggest number.");
}
if(b>a && b>c && b>d){
     printf("The Second number you entered is the biggest number.");
}

if(c>a && c>b && c>d){
     printf("The Third number you entered is the biggest number.");
}

if(d>a && d>c && d>b){
     printf("The Fourth number you entered is the biggest number.");
}


return 0;

}
