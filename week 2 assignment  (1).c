//display of surface area 
 /*
 
Name : Moses Baraka 
Reg.No: CT100/G/30725/26
Description : Surface area 
Date : 25/9/2026
*/

#include <stdio.h>
int main() {
       float radius , height,Volume,surfacearea ;
       const float pi = 3.14159;
       printf("enter the radius:");
       scanf("%f",&radius);
       
       printf("enter the height:");
       scanf("%f",&height);
       
       Volume = pi * radius * radius * height;
       surfacearea = 2* pi*radius*radius + pi* radius *radius* height ;
       
       printf("Volume = %.2f\n",Volume);
       printf("surface area= %.2f\n",surfacearea);
       
       return 0;
       }
       
       