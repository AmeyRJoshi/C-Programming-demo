#include<stdio.h>

int main(){
int physics,chemistry,maths;
float total;

printf("Enter Your Physics Score : \n");
scanf("%d",&physics);

printf("Enter Your Chemistry Score : \n");
scanf("%d",&chemistry);


printf("Enter Your Maths Score : \n");
scanf("%d", &maths);
total =(physics + maths + chemistry)/3;
if((total<40) || physics<33  || maths<33 || chemistry<33){
     printf("Your total percentage is %f and you are fail\n",total);
}else{
     printf(" Your total percentage is %f and you have passed\n",total);
}


return 0;

}
