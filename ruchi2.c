//PROGRAM NAME:ELECTRONICS SHOP
#include<stdio.h>
void main()
{

//declaration of variables that are required in the program
char name[20],date[40],ch1='y',ch2='y',pro[100];
float rate,cost=0.0,total=0.0,c[100];
int bill,sno=0,quantity,q[100],product,i;
FILE *fp; //creating a file with pointer named fp
fp=fopen("store.c","r"); //opening the file named store.c
//inputting the variables using odd for loop
while(ch1=='y')
{
	printf("****************************************electronics store Management System*********************************************\n");
printf("ENTER COUSTOMER'S NAME- ");
scanf("%s",name);
printf("\nENTER BILL NUMBER- ");
scanf("%d",&bill);
printf("\nENTER DATE- ");
scanf("%s",date);
printf("\nENTER NAME OF THE PRODUCT- ");
printf("\nPLEASE\nPRESS 1 FOR BULB \nPRESS 2 FOR FAN \nPRESS 3 FOR CIRCUIT BOARD \nPRESS 4 FOR EXTENION BOARD \nPRESS 5 FOR SWITCH\n PRESS 6 FOR CHARGER\n ");
ch2='y';
//entering the quantities required by the customer using odd while loop
while(ch2=='y')
{
printf("\nENTER YOUR CHOICE- ");
scanf("%d",&product);
//switch case to know the product bought by the customer
switch(product)
{
//case to calculate cost quantity and total
case 1:
printf("\nENTER QUANTITY- ");
scanf("%d",&quantity);
rate=200;
cost=quantity*200;
sno++;
c[sno]=cost;
total=total+cost;
pro[sno]=product;
q[sno]=quantity;
break;
//case to calculate cost quantity and total
case 2:
printf("\nENTER QUANTITY- ");
scanf("%d",&quantity);
rate=500;
sno++;
cost=quantity*500;
c[sno]=cost;
total=total+cost;
pro[sno]=product;
q[sno]=quantity;
break;
//case to calculate cost quantity and total
case 3:
printf("\nENTER QUANTITY-");
scanf("%d",&quantity);
rate=300;
sno++;
cost=quantity*300;
c[sno]=cost;
total=total+cost;
pro[sno]=product;
q[sno]=quantity;
c[sno]=cost;
break;
//case to calculate cost quantity and total
case 4:
printf("\nENTER QUANTITY- ");
scanf("%d",&quantity);
rate=100;
sno++;
cost=quantity*100;
c[sno]=cost;
total=total+cost;
pro[sno]=product;
q[sno]=quantity;
break;
//case to calculate cost quantity and total
case 5:
printf("\nENTER QUANTITY- ");
scanf("%d",&quantity);
rate=150;
sno++;
cost=quantity*150;
c[sno]=cost;
total=total+cost;
pro[sno]=product;
q[sno]=quantity;
break;
case 6:
printf("\nENTER QUANTITY- ");
scanf("%d",&quantity);
rate=250;
sno++;
cost=quantity*250;
c[sno]=cost;
total=total+cost;
pro[sno]=product;
q[sno]=quantity;
break;
default:
printf("\nINVALID RESPONSE");
} //end of switch
printf(" \nANY MORE PRODUCT PRESS 'y' AND 'n' FOR NO ");
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
printf("\tBILL NO.:-%d",bill);
printf("\nDATE:-%s",date);
//to display the products bought by them
printf("\nS NO.\tPRODUCT\tRATE\tQUANTITY\tCOST");
for(i=1;i<=sno;i++) //for loop begins to display the details
{
printf("\n%d",i);
if(pro[i]==1)
{
printf("\tBULB\t");
printf("200");
}
else if(pro[i]==2)
{
printf("\tFAN\t");
printf("500");
}
else if(pro[i]==3)
{
printf("\tCIRCUIT BOARD\t");
printf("300");
}
else if(pro[i]==4)
{
printf("\tEXTENSION BOARD\t");
printf("100");
}
else if(pro[i]==5)
{
printf("\tSWITCH\t");
printf("150");
}
else
{
printf("\tCHARGER\t");
printf("250");
}
printf("\t%d",q[i]);
printf("\t\t%f",c[i]);
printf("\n");
}
//end of for loop
printf("\nTOTAL:-%f",total); //to display the total
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
cost=0,total=0,quantity=0;
fclose(fp);
//close of file

}
//close of main
//close of program
