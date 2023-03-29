/******************************************************************************
6. Write a program to print greater between two numbers. Print one number of both are
the same.
*******************************************************************************/

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    
    if(a>b)
    {
        printf("Greatest number is %d",a);
    }
        if(b>a)
        {
        printf("Greatest number is %d",b);
        }
    
    else
    printf("Both number are same");
    return 0;
}