// W A P count No of posetive negativ and zero	element from 3x3 matrix

#include<stdio.h>
#include<conio.h>
#define N 3
void main()
{
int a[N][N],cntp=0,cntn=0,cntz=0;
int i,j;
clrscr();
for(i=0;i<N;i++)
{
for(j=0;j<N;j++)
{
printf("Enter No for a=>");
scanf("%d",&a[i][j]);
}
printf("\n");
}
for(i=0;i<N;i++)
{
for(j=0;j<N;j++)
{
	if(a[i][j]>0)
	{
	  cntp++;
	}
	else if(a[i][j]<0)
	{
	cntn++;
	}
	else
	{
	cntz++;
	}
printf(" %d ",a[i][j]);
}
printf("\n");
}
printf("________________\n");
printf("\n Positive is No=>%d",cntp);
printf("\n Negative is No=>%d",cntn);
printf("\n Zero is =>%d",cntz);
getch();
}

/*
OUTPUT
Enter No for a=>1
Enter No for a=>2                                                               
Enter No for a=>3                                                               
                                                                                
Enter No for a=>4                                                               
Enter No for a=>-4                                                              
Enter No for a=>0                                                               
                                                                                
Enter No for a=>0                                                               
Enter No for a=>0                                                               
Enter No for a=>4                                                               
                                                                                
 1  2  3                                                                        
 4  -4  0                                                                       
 0  0  4                                                                        
________________                                                                

 Positive is No=>5
 Negative is No=>1
 Zero is =>3

 */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
