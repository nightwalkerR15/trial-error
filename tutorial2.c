#include<stdio.h>
main()
{
    int m1,m2,m3,roll,total;
    char name[20],grade;
    float per;
    printf("enter the name -");
    scanf("%s",name);
    printf("\n roll no -");
    scanf("%d",&roll);
    printf("hindi -");
    scanf("%d",&m1);
    printf("science -");
    scanf("%d",&m2);
    printf("mathematics-");
    scanf("%d",&m3);
    total= m1+m2+m3;
    per= total/3.0;
if (per>=95)
    grade = 's';
    else
    if(per>=80)
    grade = 'a';
else
    if(per>=70)
    grade = 'b';
else
    if(per>=50)
    grade = 'c';
else
    grade = 'f';
printf("\n name %s",name);
printf("\n roll no %d",roll);
printf("\n total %d",total);
printf("\n percentage %2f",per);
printf("\n grade %c",grade);
    }
