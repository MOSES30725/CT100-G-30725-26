//Display for students eligible for the final exams 
/*

Name : Moses
Reg no:CT100/G/30725/26
Date: 26/7/2026
Description :final exams 
*/
#include <stdio.h>

int main(){
     float attendance;
     float average_marks;
 
      printf("enter attendance percentage:");
      scanf("%f",&attendance);
      
      
      printf("enter average_marks:");
      scanf("%f",& average_marks);
      if( attendance >=75 && average_marks>=40 ){
      printf("eligible\n");
      }else{
      printf("not eligible.\n");
      }
      
      return 0 ;
      }