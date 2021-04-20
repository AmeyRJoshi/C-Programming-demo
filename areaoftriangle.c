 #include<stdio.h>     

int main(){

float base,height,area;

printf("Enter The value of base : ");
scanf("%f",&base);
printf("Enter the value of height: ");
scanf("%f",&height);

area = (base*height)/2;
printf("The area of triangle is : %f ",area);

return 0;

}