#include<stdio.h>
main()
{
    int m;
    char grade[10];
    printf("enter your marks-");
    scanf("%d",&m);
    if (m>=90){
       printf("A-grade");
    }
    else
        if(m>=80){
       printf("B-grade");
        }
    else
        if(m>=70)
        {
        printf("C-grade");
        }
    else
        if(m>=60){
    printf("D-grade");
    }
    else
    printf("F-grade");
}
