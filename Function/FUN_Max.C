#include<stdio.h>
#include<conio.h>
#define N 5
int maxi(int no[N])
{
  int i,max=0;
 for(i=0;i<N;i++)
  {
     if(no[i]>max)
     {
      max=no[i];
     }
  }

  return maxi;

}
void main()
{
  int no[N];
  int i,max=0;
  clrscr();
  for(i=0;i<N;i++)
  {
   printf("Enter No=>");
   scanf("%d",&no[i]);
  }
  printf("Maximum No is => %d",max);
  maxi=(no);
getch();
}