// W A P Fibonaci series
#include<stdio.h>
#include<conio.h>

void main()
{
int no,k,temp,i=0,j=1;
clrscr();
printf("Enter no-->");
scanf("%d",&no);
printf("Fibonaci series is---:%d,%d,",i,j);
for(k=2;k<=no;k++)
{
temp=i+j;
i=j;
j=temp;
printf("%d,",temp);
}
getch();
/*
Enter no-->7
Fibonaci series is---:0,1,1,2,3,5,8,13,                                         
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


}