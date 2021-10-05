#include<stdio.h>
#include<conio.h>

void main()
{
long int TotalPopulation=80000,LiteratePopulation,LiterateMen,IlliterateMen,LiterateWomen,IlliterateWomen,TotalMen,TotalWomen;
LiteratePopulation=TotalPopulation*48/100;
printf("Total Population = 80000\n");
printf("Total Literate Population is: %ld \n",LiteratePopulation);
TotalMen=TotalPopulation*52/100;
printf("Total number of Total Men is: %ld \n",TotalMen);
LiterateMen=TotalPopulation*35/100;
printf("Total number of Literate Men is: %ld \n",LiterateMen);
IlliterateMen=TotalMen-LiterateMen;
printf("Total number of Illiterate Men is: %ld \n",IlliterateMen);
TotalWomen=TotalPopulation-TotalMen;
printf("Total number of Total Women is: %ld \n",TotalWomen);
LiterateWomen=LiteratePopulation-LiterateMen;
printf("Total number of Literate Women is: %ld \n",LiterateWomen);
IlliterateWomen=TotalWomen-LiterateWomen;
printf("Total number of Illiterate Women is: %ld \n",IlliterateWomen);
getch();
}
