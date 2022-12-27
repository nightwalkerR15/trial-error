//PROGRAM NAME:VEHICLE PARKING MANAGEMENT SYSTEM
#include<stdio.h>
void main()
{

//declaration of variables that are required in the program
char name[20],date[40],ch1='y',ch2='y',pro[100];
float rate,cost=0.0,cost1=0.0,total,c[100];
int bill,sno=0,time,q[100],type,i;
//inputting the variables using odd for loop
while(ch1=='y')
{
	printf("**************************************** PAKRING MANAGEMENT **********************************************\n");
printf("ENTER COUSTOMER'S NAME- ");
scanf("%s",name);
printf("\nENTER VEHICLE NUMBER- ");
scanf("%d",&bill);
printf("\nENTER DATE- ");
scanf("%s",date);
printf("\nENTER PARKING TYPE - ");
printf("\nPLEASE\nPRESS 1 FOR GROUND PARKING\nPRESS 2 FOR EVELVATED PARKING \n");
ch2='y';
//entering the time specified by the customer using odd while loop
while(ch2=='y')
{
printf("\nENTER YOUR CHOICE- ");
scanf("%d",&type);
//switch case to know the choice selected  by the customer
switch(type)
{
//case to calculate cost quantity and total
case 1:
printf("\nENTER time limit (in days)- ");
scanf("%d",&time);
rate=200;
cost=time*rate;
sno++;
c[sno]=cost;
pro[sno]=type;
q[sno]=time;
break;
//case to calculate cost quantity and total
case 2:
printf("\nENTER time (in days)- ");
scanf("%d",&time);
rate=500;
sno++;
cost1=time*rate;
c[sno]=cost1;
pro[sno]=type;
q[sno]=time;
break;
default:
printf("\nINVALID RESPONSE");
total=cost+cost1;
} //end of switch
printf(" \FOR MORE SLOTS PRESS 'y' AND 'n' FOR NO ");
fflush(stdin);
scanf("%c",&ch2);
}
//end of while loop
//to display the details of customer
printf("\n COUSTOMER'S NAME:%s",name);
printf("\n VEHICLE NO.%d",bill);
printf("\nDATE%s",date);
//to display the products bought by them
printf("\nS NO.\ttype\tCOST\tday\tRATE");
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
printf("\t\t%f",c[i]);
printf("\n");
}
//end of for loop
printf("\nTOTAL%f",total); //to display the total
printf("\n");
//to know whether there is next customer and to input their details
printf("\nNEXT CUSTOMER");
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
}
//end of while loop
cost=0,total=0,time=0;
}
//close of main
//close of program
