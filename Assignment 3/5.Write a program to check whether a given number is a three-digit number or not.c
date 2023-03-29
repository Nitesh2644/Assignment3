/******************************************************************************
5.Write a program to check whether a given number is a three-digit number or not
*******************************************************************************/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
   if((n>99 && n<1000))
   {
       printf("Number is three digit ");
   }
   else
   printf("Not three digit");
    return 0;
}