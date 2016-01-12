// W A P user upto N and create two other array  which will copy of odd even

#include<stdio.h>
#include<conio.h>
#define N 5
void main()
{
int no,noe[N],noo[N];
int i,j=0,k=0;
clrscr();
for(i=0;i<N;i++)
{
printf("Enter No=>");
scanf("%d",&no);

if(no%2==0)
{
 noe[j]=no;
 j++;
}
else
{
 noo[k]=no;
 k++;
}
}
 printf("\nEven Nos ");
 for(i=0;i<j;i++)
 {
 printf("\n noe[%d]=%d",i,noe[i]);
 }

 printf("\nOddd Nos ");
  for(i=0;i<k;i++)
 {
 printf("\n noo[%d]=%d",i,noo[i]);
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

Even Nos
 noe[0]=2
 noe[1]=4
Oddd Nos
 noo[0]=1
 noo[1]=3
 noo[2]=5

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

