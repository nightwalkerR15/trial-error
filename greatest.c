#include<stdio.h>
main()
{
int a,b,c;
printf("\n enter three integer no.");
scanf("%d %d %d",&a,&b,&c);
if (a>b)
{
if (a>c)
printf("\n greatest no. is %d",a);
else
printf("\n greatest no. is %d",c);
}
else
{
if(b>c)
printf("\n greatest no. is %d",b);
else
printf("\n greatest no. is %d",c);

}
}
