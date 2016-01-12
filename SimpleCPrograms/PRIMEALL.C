//W A P All Prime No rang of n
#include<stdio.h>
#include<conio.h>
void main()
{
int no,cnt,i,j;
clrscr();
printf("Enter No=>");
scanf("%d",&no);
for(i=2;i<=no;i++)
{
cnt=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
{
cnt++;
}
}
if(cnt<=2)
{
printf("\n %d is prime",i);
}
}
getch();
}
/*
Enter No=>9

 2 is prime
 3 is prime
 5 is prime
 7 is prime
 */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
