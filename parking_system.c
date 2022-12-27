#include<stdio.h>
int main()
{
    int date,time,rate,cost,total1,total2,total,type;
    char name[20],vehicle_no[20];
printf("**************************************VEHICLE PARKING MANAGEMENT SYSTEM**********************************************\n");
printf(" ENTER YOUR NAME :-");
scanf("%s",name);
printf("\n ENTER VEHICLE NUMBER :-");
scanf("%s",vehicle_no);
printf("\n ENTER DATE :-");
scanf("%d",&date);
printf("\n SELECT PARKING TYPE");
printf("\n PRESS \n 1 FOR GROUND PARKING \n 2 FOR ELEVATED PARKING \n");
printf(" ENTER YOUR CHOICE :-");
scanf("%d",type);
switch(type)
{
case 1:
    printf("\n enter time (in hour) :-");
    scanf("%d",time);
    rate=50;
    cost=time*rate;
    printf("%d",cost);
}

}
