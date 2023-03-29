/*Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots*/

#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the value of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    
    d=(b*b)-(4*a*c);
    if(d>0)
    printf("Root are real and distinct");
     else if(d=0)
    printf("Root are real equal");
    else
    printf("Root are real imaginary");
    return 0;
    
    
}