#include<stdio.h>
int main()
{
int a,b,c,d;
printf("\n enter first number- ");
scanf("%d",&a);
printf("\n enter the second number-");
scanf("%d",&b);
printf("\n enter the third number-");
scanf("%d",&c);
printf("\n enter the fourth number-");
scanf("%d",&d);
if(a>b)
{
    if(a>c)
        if(a>d)
        printf("%d is greatest number",a);
}
if(b>c)
{
    if(b>d)
        printf("%d is greatest number",b);
}
if(c>d)
    printf("%d is the greatest number",c);
else
    printf("%d is the greatest number",d);
}
