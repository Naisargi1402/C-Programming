#include<stdio.h>
#include<conio.h>

int main()
{
 float Basic_Salary, DA,HRA,MA,TA,PF,IT,Allowances,Deduction,Net_salary;

printf("Enter Basic_Salary: ");
scanf("%f",&Basic_Salary);

DA= (70*Basic_Salary)/100;
printf("Your DA= %.2f\n",DA);
HRA= (7*Basic_Salary)/100;
printf("Your HRA= %.2f\n",HRA);
MA= (2*Basic_Salary)/100;
printf("Your MA= %.2f\n",MA);
TA= (4*Basic_Salary)/100;
printf("Your TA= %.2f\n",TA);
PF= (70*Basic_Salary)/100;
printf("Your PF= %.2f\n",PF);
IT=500;
printf("Your IT= %.2f\n",IT);

Allowances= DA+HRA+MA+TA;
printf("Your Allowances= %.2f\n",Allowances);
Deduction=PF=IT;
printf("Your Deduction= %.2f\n",Deduction);
Net_salary= Basic_Salary + Allowances - Deduction;
printf("Your Net Salary : %.2f",Net_salary);

return 0;
}
