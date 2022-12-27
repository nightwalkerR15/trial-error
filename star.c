#include<stdio.h>
main()
{
    int r,c;
    for(r=1;r<=4;r++)
    {
        printf("\n");
        for(c=1;c<=r;c++);
        printf("*");
    }
}
