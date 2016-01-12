// W A P using function find out factorial of a number.

#include<stdio.h>
#include<conio.h>
int factorial(int no)
{
int i,fact=1;
for(i=1;i<=no;i++)
{
 fact = fact *i;
}
return fact;

}
void main()
{
int no;
int i,fact=1;
clrscr();
printf("Enter the No.");
scanf("%d",&no);

      fact=factorial(no);
      printf("\n Factorial No. is %d",fact);
getch();
}

/*
OUTPUT
Enter the No.5

 Factorial No. is 120

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
