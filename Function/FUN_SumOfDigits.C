// W A P using a function to find out sum of digit.

#include<stdio.h>
#include<conio.h>
int sum1(int no)
{
int sum=0;
int n;
while(no)
  {
     n=no%10;
     sum=sum+n;
     no=no/10;
 }
 return sum;
}
void main()
{
 int no,ans=0;
 int sum=0,n;
 clrscr();
 printf("Enter No=>");
 scanf("%d",&no);
 printf("%d\n",sum1(no));
getch();
}

/*
OUTPUT
Enter No=>123
6

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

