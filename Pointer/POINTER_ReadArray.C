// W A P using pointer to read in array	an its array element print

#include<stdio.h>
#include<conio.h>
#define N 5
void main()
{
int no[N],i;
int *ptr;
clrscr();
ptr=&no[0];
for(i=0;i<N;i++)
{
printf("Enter No=>");
scanf("%d",ptr);
ptr++;
}
ptr=&no[N-1];
for(i=N;i>0;i--)
{
printf("\nno[%d]=%d",i ,*ptr);
ptr--;
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

no[5]=5
no[4]=4
no[3]=3
no[2]=2
no[1]=1

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
