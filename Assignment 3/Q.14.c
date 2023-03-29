/*
 Write a program to check whether a given number is divisible by 7 or divisible by 3. 
 
*/

#include<stdio.h>
int main(){
   int num;
   printf("Entered the number: ");
   scanf("%d",&num);
   
   if (num%7==0 || num%3==0)
   {
       printf("Enterd number is divisible by 7 or 3");
   }
   else 
   {
        printf("Enterd number is Not divisible by 7 or 3");
   }
   
    
}