/*
First Semester Practical Examination
Subject: CE - 143
Created by:
     Name: Naisargi Vadodariya
     Roll no. 20CS100
     Date: 23-02-2021


------------------------------------------------------   Task - 2   -------------------------------------------------

*/

#include<stdio.h>                                                     //importing the header files

int main()                                                            //starting of the main function
{
     int i,n=5,sum=0,j;                                               //Declaring the data types of variables
     printf("The first five even numbers are: ");

     for(i=1;i<=5;i++)                                                //Using the for loop to compare the value of all elements of array
     {
          j=i*2;                                                      // value of "j" is assigned
          printf("%d ",j);                                            // value of "j" is printed
          sum=sum+j;                                                  //value of the counter"sum" is updated

     }

     printf("\nThe sum of first five even numbers is: %d",sum);       //the sum of first five even numbers is printed

     return 0;                                                        //Program terminated

}

