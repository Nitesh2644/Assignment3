/*
. Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not. 
 
*/

#include<stdio.h>
int main(){
  int a,b,c;
  printf("Entered all the side of the traingle:");
  scanf("%d%d%d",&a,&b,&c);
  if (a+b+c==180)
  {
      printf("traingle is valid");
      
  }
  else
  {
       printf("traingle is Not valid");
  }
}