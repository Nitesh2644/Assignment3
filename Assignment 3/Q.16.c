/*
Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.
 
*/

#include<stdio.h>
int main(){
  char ch;
  printf("Enter the alphabet:");
  scanf("%c",&ch);
   if(ch>=65 && ch<=90)
    {
        printf("Entered alphabet is upper case");
    }
   
    else if(ch>=97 && ch<=122)
    {
         printf("Entered alphabet is lower case");
    }
    else if (ch>=48 && ch<=57)
    {
         printf("Entered number is digit  ");
    }
    else 
    {
        printf("Entered number is special symbol");
    }
   
}