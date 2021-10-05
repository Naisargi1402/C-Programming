#include<stdio.h>
#include<conio.h>

struct employee
{
     char name[20];
     char designation[20];
     char address[50];
     int age;

     struct salary
     {
          float Basic_Salary;
          float DA;
          float HRA;
          float MA;
          float TA;
          float PF;
          float IT;
          float Allowances;
          float Deduction;
          float Net_salary;

     }s;
}e;

void main()
{
     printf("Enter name: ");
     gets(e.name);

     printf("Enter designation: ");
     gets(e.designation);

     printf("Enter address: ");
     gets(e.address);

     printf("Enter age: ");
     scanf("%d",&e.age);

     printf("Enter Basic Salary: ");
     scanf("%f", &e.s.Basic_Salary);

     printf("\nYour name: %s",e.name);
     printf("\nYour designation: %s",e.designation);
     printf("\nYour address: %s",e.address);
     printf("\nYour age: %d",e.age);
     printf("%f", e.s.Basic_Salary);

     e.s.DA= (70*e.s.Basic_Salary)/100;
     printf("\nYour DA= %.2f\n",e.s.DA);
     e.s.HRA= (7*e.s.Basic_Salary)/100;
     printf("Your HRA= %.2f\n",e.s.HRA);
     e.s.MA= (2*e.s.Basic_Salary)/100;
     printf("Your MA= %.2f\n",e.s.MA);
     e.s.TA= (4*e.s.Basic_Salary)/100;
     printf("Your TA= %.2f\n",e.s.TA);
     e.s.PF= (70*e.s.Basic_Salary)/100;
     printf("Your PF= %.2f\n",e.s.PF);
     e.s.IT=500;
     printf("Your IT= %.2f\n",e.s.IT);

     e.s.Allowances= e.s.DA+e.s.HRA+e.s.MA+e.s.TA;
     printf("Your Allowances= %.2f\n",e.s.Allowances);
     e.s.Deduction=e.s.PF-e.s.IT;
     printf("Your Deduction= %.2f\n",e.s.Deduction);
     e.s.Net_salary= e.s.Basic_Salary + e.s.Allowances - e.s.Deduction;
     printf("Your Net Salary : %.2f",e.s.Net_salary);




}
