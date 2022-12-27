 //PROGRAM NAME:VEHICLE PARKING MANAGEMENT SYSTEM
#include<stdio.h>
void main()
{
//declaration of variables that are required in the program
char name[20],date[40],ch1='y',ch2='y',pro[100];
float rate,cost=0.0,cost1=0.0,total,c[100];
int veh_no,sno=0,time,q[100],type,i;
/*FILE *fp; //creating a file with pointer named fp
fp=fopen("store.c","r"); //opening the file named store.c
//inputting the variables using odd for loop*/
do{
	printf("**************************************** PAKRING MANAGEMENT **********************************************\n");
printf("ENTER COUSTOMER'S NAME- ");
scanf("%s",name);
printf("\nENTER VEHICLE NUMBER- ");
scanf("%d",&veh_no);
printf("\nENTER DATE- ");
scanf("%s",date);
printf("\nENTER PARKING TYPE - ");
printf("\nPLEASE!\nPRESS 1: FOR GROUND PARKING. \nPRESS 2: FOR EVELVATED PARKING. \n");
//while(ch2=='y');
printf("\n ->ENTER YOUR CHOICE(1 & 2) :- ");
scanf("%d",&type);
//switch case to know the choice selected  by the customer
switch(type)
{
//case to calculate cost quantity and total
case 1:
printf("\n ->ENTER time limit (in days) :- ");
scanf("%d",&time);
rate=200;
cost=time*rate;
sno++;
c[sno]=cost;
pro[sno]=type;
q[sno]=time;
total=cost+cost1;
break;
//case to calculate cost quantity and total
case 2:
printf("\n->ENTER time limit (in days) :- ");
scanf("%d",&time);
rate=500;
sno++;
cost1=time*rate;
c[sno]=cost1;
pro[sno]=type;
q[sno]=time;
total=cost+cost1;
break;
default:
printf("\n(INVALID RESPONSE!)");
total=cost+cost1;
} //end of switch

printf(" \n=>FOR MORE SLOTS PRESS 'y' AND 'n' : ");
fflush(stdin);
scanf("%c",&ch2);
}
while (ch2=='y'||ch2=='Y');
//end of while loop
//fclose(fp);
//close of file store.c
//opening the file store.c in append mode
//fp=fopen("store.c","app");
//to display the details of customer
printf("\n COUSTOMER'S NAME : %s",name);
printf("\n VEHICLE NO. : %d",veh_no);
printf("\n DATE : %s",date);
//to display the products bought by them
printf("\n\nS NO.\t type\t\tCOST\t day\t RATE");
for(i=1;i<=sno;i++) //for loop begins to display the details
{
printf("\n%d",i);
if(pro[i]==1)
{
printf("\t ground parking\t");
printf("200");
}
else if(pro[i]==2)
{
printf("\t elevated parking\t");
printf("500");
}

printf("\t%d",q[i]);
printf("\t%f",c[i]);
printf("\n");
}
//end of for loop
printf("\nTOTAL : %f",total); //to display the total
printf("\n");
//to know whether there is next customer and to input their details
cost=0,total=0,time=0;
printf("\n FOR NEXT CUSTOMER,");
printf("\nPRESS 'y' TO CONTINUE ");
fflush(stdin);
scanf("%c",&ch1);
//for loop to initialize all the variables to zero
for(i=1;i<=sno;i++)
{
pro[i]=0;
q[i]=0;
c[i]=0;
}
//end of for loop
//end of while loop
}
//fclose(fp);
}
//close of file
//close of main
//close of program
