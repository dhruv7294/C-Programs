// W A P revers No. using Array

#include<stdio.h>
#include<conio.h>
#define N 3
void main()
{
int no[N],r[N];
int i,j=2;
clrscr();
for(i=0;i<N;i++)
{
printf("Enter No=>");
scanf("%d",&no[i]);
}
for(i=0;i<N;i++)
{
   r[j]=no[i];
   j--;
}
for(i=0;i<N;i++)
{
printf("\nr[%d]=%d",i,r[i]);
}
getch();
}
/*
OUTPUT

Enter No=>3
Enter No=>2
Enter No=>1

r[0]=1
r[1]=2
r[2]=3

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


