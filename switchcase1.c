#include<stdio.h>
main()
{
float a,b;
int ch;
printf(" \n enther the two no.");
scanf("%f%f",&a,&b);
printf("\, a-add \n s-subtract \n s-multiply \n d-division");
scanf("%d",&ch);
switch(ch)
{
case a:
printf("\n %.2f",a+b);
break;
case b:
printf("\n %.2f",a-b);
break;
case c:
printf("\n %.2f",a*b);
break;
case d:
printf("\n %.2f",a/b);
default:
printf("\n wrong choice0");
}
}
