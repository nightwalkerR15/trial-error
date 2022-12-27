#include <stdio.h>
    int main()
{
    char name[20],grade;
    int rollnumber,s1,s2,s3,s4,s5,total;
    float percentage;
      printf("\n enter name");
      scanf("%s",name);
      printf("\n Enter roll number");
      scanf("%d",&rollnumber);
      printf("\n Enter five subject marks-\n s1,\n s2,\n s3,\n s4,\n s5");
      scanf("%d,%d,%d,%d,%d",&s1,&s2,&s3,&s4,&s5);

    total = s1+s2+s3+s4+s5;
      percentage = total/5.0;

    if(percentage >= 80)
      grade = 'A';

   else
    if
     (percentage >= 70)
      grade = 'B';

   else
   if(percentage >= 60)
      grade = 'C';

   else
   if(percentage >= 50)
      grade = 'D';

   else
      grade = 'F';

      printf("\n name - %s", name);
      printf("\n roll number", rollnumber);
      printf("\n total - %d", total);
      printf("\n percentage - %.2f", percentage);
      printf("\n grade - %c", grade);

    return 0;
}
