#include<stdio.h>
struct student
{
    char name[20];
    int roll,m1,m2,m3;
};
void add_record(void);
void show_record(void);
int main()
{
    char ch;
    while(1)
    {
        printf("\n 1- add record");
        printf("\n 2- show record");
        printf(" \n 3- exit");
        scanf("%c",&ch);
        if(ch=='3'||ch=='e')
        break;
        switch(ch)
        {
            case '1':
            case 'a':add_record;
            break;
            case '2':
            case 's':show_record
            ;
            break;
            default: printf(" wrong choice");

        }
    }
}
void addrecord (void)
{
    FILE*f;
    struct student s;
    f = fopen("student.dat","r");
    if (f==NULL)
    {
        fclose(f);
        f=fopen("student.dat","a");
    }
    printf("\n enter name & roll no.");
    scanf("%s%d", s.name,&s.roll);
    printf("\n enter marks");
    scanf("d%d%d",&s.m1,&s.m2,&s.m3);
    fwrite(&s,sizeof(s),1,f);
    fclose(f);
    printf("one record added");

}
