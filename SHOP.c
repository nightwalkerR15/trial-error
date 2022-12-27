//PROGRAM NAME:VEHICLE PARKING MANAGEMENT SYSTEM
#include<stdio.h>
void main()
{

//declaration of variables that are required in the program
char name[20],date[40],ch1='y',ch2='y',pro[100];
float rate,cost=0.0,total=0.0,c[100];
int bill,sno=0,time,q[100],type,i;
FILE *fp; //creating a file with pointer named fp
fp=fopen("store.c","r"); //opening the file named store.c
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
//switch case to know the product bought by the customer
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
cost=time*rate;
c[sno]=cost;
pro[sno]=type;
q[sno]=time;
break;
//case to calculate cost quantity and total
/*case 3:
printf("\nENTER time (in days)-");
scanf("%d",&time);
rate=30;
sno++;
cost=time*30;
c[sno]=cost;
total=total+cost;
pro[sno]=type;
q[sno]=time;
c[sno]=cost;
break;
//case to calculate cost quantity and total
case 4:
printf("\nENTER time (in days)- ");
scanf("%d",&time);
rate=10;
sno++;
cost=time*10;
c[sno]=cost;
total=total+cost;
pro[sno]=type;
q[sno]=time;
break;
//case to calculate cost quantity and total
case 5:
printf("\nENTER time (in days)- ");
scanf("%d",&time);
rate=15;
sno++;
cost=time*15;
c[sno]=cost;
total=total+cost;
pro[sno]=type;
q[sno]=time;
break;
case 6:
printf("\nENTER time (in days)- ");
scanf("%d",&time);
rate=25;
sno++;
cost=time*25;
c[sno]=cost;
total=total+cost;
pro[sno]=type;
q[sno]=time;
break;*/
default:
printf("\nINVALID RESPONSE");
} //end of switch
printf(" \FOR MORE SLOTS PRESS 'y' AND 'n' FOR NO ");
fflush(stdin);
scanf("%c",&ch2);
}
//end of while loop
fclose(fp);
//close of file store.c
//opening the file store.c in append mode
fp=fopen("store.c","app");
//to display the details of customer
printf("\nCOUSTOMER'S NAME:%s",name);
printf("\tBILL NO.%d",bill);
printf("\nDATE%s",date);
//to display the products bought by them
printf("\nS NO.\t type         \tCOST \tday      \tRATE");
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
printf("\nTOTAL%f",cost); //to display the total
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
fclose(fp);
//close of file

}
//close of main
//close of program
