/*
First Semester Practical Examination
Subject: CE - 143
Created by:
     Name: Naisargi Vadodariya
     Roll no. 20CS100
     Date: 23-02-2021


------------------------------------------------------   Task - 1   -------------------------------------------------

*/


#include<stdio.h>                                   //importing the header files

int main()                                          //starting of the main function
{
     int n,i,NumberOfVowels=0;                      //Declaring the data types of variables
     char a[100];                                   //Declaring the array to store the input string

     printf("Enter the String: \n");                //Print statement to ask the user to input string
     gets(a);                                       // Reading the string input by the user and storing it in array

     for(i=0;a[i]!='\0';i++)                        //Using the for loop to compare the value of all elements of array
     {
          if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
                                                    //using conditional operator "if", checking if the element of array is a vowel

               NumberOfVowels++;                    //if the element is vowel, the count is increased by 1.

     }

     printf("Number of Vowels in the string: %d",NumberOfVowels);  //The total number of vowels is printed

     return 0;                                                   //Program terminated

}
