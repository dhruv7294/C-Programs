// W A P swap two value using pointer

#include<stdio.h>
#include<conio.h>
void main()
{
int no1,no2,*a,*b,temp;
clrscr();
a=&no1;
b=&no2;
printf("Enter No1=>");
scanf("%d",&no1);
printf("Enter No2=>");
scanf("%d",&no2);
printf("\n no1 and no2 before swaping=%d",no1);
printf("\n no1 and no2  before swaping=%d",no2);
printf("\n");
temp=*a;
*a=*b;
*b=temp;
printf("\n no1 and no2 after swaping=%d",*a);
printf("\n no1 and no2  after swaping=%d",*b);
getch();
}
/*
OUTPUT
Enter No1=>20
Enter No2=>40

 no1 and no2 before swaping=20
 no1 and no2  before swaping=40

 no1 and no2 after swaping=40
 no1 and no2  after swaping=20

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


