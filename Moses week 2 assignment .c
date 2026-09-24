// program to calculate simple interest 
/*
Name: Moses
Reg No: CT100/G/30725/26
Description:simple interest 
Date: 23/9/2026
version 2
*/
# include <stdio.h>
int main ()
{ 
float principal,time,rate,simple_interest;
// 
printf("enter the principal amount;");
scanf("%f",&principal );

printf("enter the time (in years);");
scanf("%f",&time);

printf("enter the rate of interest;");
scanf("%f",&rate);

//calculate simple interest 
simple_interest =  ( principal * time *rate)/100;

//display the result 
printf("\nsimple interest= %.2f\n",simple_interest);

return 0 ;
}