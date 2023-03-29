/*
 Write a program to check whether a given number is positive, negative or zero. 
 
*/

#include<stdio.h>
int main(){
   int num;
   printf("Entered the number: ");
   scanf("%d",&num);
   
   if (num>0)
   {
       printf("Enterd number is positive");
   }
   else if (num<0)
   {
        printf("Enterd number is negative");
        
   }
   else
   {
         printf("Enterd number is zero");
   }
    
}