// W A P even and Odd sum using array

#include<stdio.h>
#include<conio.h>
#define N 5
void main()
{
int no[N];
int i;
int sume=0,sumo=0;
clrscr();
for(i=0;i<N;i++)
{
printf("Enter No=>");
scanf("%d",&no[i]);
}
for(i=0;i<N;i++)
{
printf("\n %d",no[i]);
}
for(i=0;i<N;i++)
{
if(no[i]%2==0)
{
sume=sume+no[i];
}
else
{
sumo=sumo+no[i];
}
}
printf("\n Even no Sum is = %d",sume);
printf("\n Odd no sum is  = %d",sumo);
getch();
}
/*
OUTPUT
Enter No=>1
Enter No=>2
Enter No=>3
Enter No=>4
Enter No=>5

 1
 2
 3
 4
 5
 Even no Sum is = 6
 Odd no sum is  = 9
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

