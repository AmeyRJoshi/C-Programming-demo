#include<stdio.h>
int sum(int a,int b);


int main(){
int a , b, c;
a=97;
b = 90;
c=sum(a,b);
printf("The sum of the two numbers is : %d \n",c);
return 0;

}
int sum(int a, int b){
     return a + b;
}