/*Write a program to check whether a given year is a leap year or not.*/

#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if(year%4==0)
    if(year%100!=0 || year%400==0)
    
        printf("Year is leap year");
    else
     printf("Year is not leap year");
    else
    printf("%d is not leap year",year);
    
}