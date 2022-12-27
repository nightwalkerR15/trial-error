#include<stdio.h>
#include<string.h>
main()
{
char name[20],grade[25];
int rollno,s1,s2,s3,s4,s5,total;
float per;
printf("\n enter name - ");
scanf("%s",name);
printf ("\n enter roll no -");
scanf ("%d",&rollno);
printf ("\n enter marks");
printf("\n s1 -");
scanf("%d",&s1);
printf("\n s2 -");
scanf("%d",&s2);
printf("\n s3 -");
scanf("%d",&s3);
printf("\n s4 -");
scanf("%d",&s4);
printf("\n s5 -");
scanf("%d",&s5);
total = s1+s2+s3+s4+s5;
per = total/5.0;
if (per>95)
    strcpy(grade,"S_class");
if (per >=80)
strcpy(grade,"A_class");
else
if (per >= 70)
strcpy(grade,"B_class");
else
if(per >=60)
strcpy(grade,"C");
else
if (per >=50)
strcpy(grade,"D");
else
strcpy(grade,"fail_hai_chutiya");
printf ("name -%s",name);
printf("\n roll no -%d",rollno);
printf("\n total -%d",total);
printf ("\n percentage -%.2f",per);
printf("\n grade -%s",grade);

}
