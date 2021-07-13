#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5,per;


printf("Enter the five student marks:");


scanf("\n %d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);


per = (m1+m2+m3+m4+m5)/5;

if (per >=75)

printf("A grade");


else if (per<60&&per>=65)


printf("B grade");

else if (per <45&&per>=35)


printf("c grade");

else


printf("Fail");


}







