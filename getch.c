#include<stdio.h>
main()
{
    char c='A';
    int i;
    for(i=0;c!=13;i++)
    {
        c= getch();
        printf("%d-",c);

    }
}
