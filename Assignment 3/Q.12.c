/*
Write a program to check whether a given alphabet is in uppercase or lowercase.
*/
#include<stdio.h>
int main(){
    char A;
    printf("Enter the alphabhet:");
    scanf("%c",&A);
    
    if(A>=65 && A<=90)
    {
        printf("Entered alphabet is upper case");
    }
   
    else if(A>=97 && A<=122)
    {
         printf("Entered alphabet is lower case");
    }
    else
    {
         printf("Entered value is not alphabet");
    }
   
   
    
}