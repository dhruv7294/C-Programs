// W A P factorial No using recursion
#include<stdio.h>
#include<conio.h>
int factorial(int no)
{
if(no==1)
return 1;
else
return (factorial(no-1)*no);

}
void main()
{
int no,fact;
clrscr();
printf("Enter No=>");
scanf("%d",&no);

fact=factorial(no);
printf("Fact : %d",fact);
getch();
}
/*
Enter No=>3
Fact : 6
*/



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
