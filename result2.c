#include<stdio.h>
main()
{
int m1,m2,m3,m4,kid,tot;
float per;
char name[20],grade;

printf("enter name -");
scanf("%s",name);
printf("\nenter K'ID -");
scanf("%d",&kid);

printf("\n subject -1 =");
scanf("%d",&m1);
printf("\n subject -2 =");
scanf("%d",&m2);
printf("\n subject -3 =");
scanf("%d",&m3);
printf("\n subject -4 =");
scanf("%d",&m4);
tot = m1+m2+m3+m4;
per = tot/4.0;
if (per>=95)
grade = 'S';
else
    if(per>=70)
        grade= 'A';
else
        if(per>=50)
    grade= 'B';
else
        if(per>=45)
    grade= 'C';
else
        grade= 'f';
printf("name -%s",name);
printf("K'ID -%d",&kid);
prnitf("total -%d",&tot);
printf("percentage %d",per);
printf("grade -%c",grade);
}
