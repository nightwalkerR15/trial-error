#include<stdio.h>
main()
{
int n,r;
printf("\n enter a number");
scanf("%d",&n);
r= n/5;
if (r==0)
printf("\n%d",++n);
else
printf("\n%d",--n);
}
