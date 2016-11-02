/*
 * WAP to find the sum of all the multiples of 3 or 5 below 1000.
 * Created By C-Programmingclub
 */
#include<stdio.h>
void main()
{
  int i,temp=0;
  for(int i=1; i<1000; i++)
  if(i % 3 == 0 || i % 5 == 0)
     temp += i;
     printf("The sum of all the multiples of 3 or 5 below 1000 = %d\n",temp); 
}