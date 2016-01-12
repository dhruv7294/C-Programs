//  W A P count odd & even no.
#include<stdio.h>
#include<conio.h>
#define N 5
void main()
{
int no[N];
int i,cnt=0;
clrscr();
for(i=0;i<N;i++)
{
printf("Enter No=>");
scanf("%d",&no[i]);
}
for(i=0;i<N;i++)
{
cnt++;

if(no[i]%2==0)
{
printf("\n Even no is [%d]=%d",i,no[i]);
}
else
{
printf("\n Odd no is [%d]=%d",i,no[i]);
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

 Odd no is [0]=1
 Even no is  [1]=2
 Odd no is [2]=3
 Even no is  [3]=4
 Odd no is [4]=5
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
