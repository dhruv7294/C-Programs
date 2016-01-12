// W A P 10 No sum using array

#include<stdio.h>
#include<conio.h>
#define N 10
void main()
{
int no[N];
int i,sum=0;
clrscr();
for(i=0;i<N;i++)
{
printf("Enter No=>");
scanf("%d",&no[i]);
}
for(i=0;i<N;i++)
{
sum=sum+no[i];
}
printf("\n Sum is = %d",sum);

getch();
}
/*
OUTPUT
Enter No=>1
Enter No=>2
Enter No=>3
Enter No=>4
Enter No=>5
Enter No=>6
Enter No=>7
Enter No=>8
Enter No=>9
Enter No=>10

 Sum is = 55

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
