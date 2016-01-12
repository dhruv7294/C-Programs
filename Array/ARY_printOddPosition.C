// W A P Print Only Odd position using array

#include<stdio.h>
#include<conio.h>
#define N 5
void main()
{
int no[N];
int i;
clrscr();
for(i=0;i<N;i++)
{
printf("Enter No=>");
scanf("%d",&no[i]);
}
for(i=0;i<N;i++)
{
if(no[i]%2!=0)
{
printf("\n Odd No is [%d] =%d",i,no[i]);
}
}

getch();
}
/*
OUTPUT
Enter No=>1
Enter No=>2
Enter No=>3
Enter No=>4
Enter No=>5

 Odd No is [0] =1
 Odd No is [2] =3
 Odd No is [4] =5
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
