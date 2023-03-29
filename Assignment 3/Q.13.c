/*
 Write a program to check whether a given number is divisible by 3 and divisible by 2. 
 
*/

#include<stdio.h>
int main(){
   int num;
   printf("Entered the number: ");
   scanf("%d",&num);
   
   if (num%3==0 && num%2==0)
   {
       printf("Enterd number is divisible by 2 and 3");
   }
   else 
   {
        printf("Enterd number is Not divisible by 2 and 3");
   }
   
    
}