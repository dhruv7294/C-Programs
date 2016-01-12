// W A P create swap function for swaping two value

#include<stdio.h>
#include<conio.h>
int swap(int no1,int no2)
{
int temp;
temp=no1;
no1=no2;
no2=temp;
printf("\n swaping is %d",no1);
printf("\n swaping is %d",no2);
}
void main()
{
int no1,no2,temp=0;
clrscr();
printf("Enter No1=>");
scanf("%d",&no1);
printf("Enter No2=>");
scanf("%d",&no2);
swap(no1,no2);
getch();
}
/*
OUTPUT
Enter No1=>10
Enter No2=>20

 swaping is 20
 swaping is 10
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


