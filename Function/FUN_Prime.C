// W A P  using function  to return 1  if the number  is prime	otherwise return 0.

#include<stdio.h>
#include<conio.h>
int prime(int no)
{
int i,cnt=0;
for(i=1;i<=no;i++)
{
     if(no%i==0)
     {
      cnt++;
     }
}
printf("count=%d",cnt);
if(cnt<=2)
{
   return 1;
}
else
{
  return 0;
}

}
void main()
{
int no,p;
clrscr();
printf("Enter No=>");
scanf("%d",&no);

p=prime(no);
printf("\np=%d",p);
if(p==1)
{
 printf("\nNo is prime");
}
else
{
printf("\nNo is not prime");
}
getch();
}
/*

OUTPUT
Enter No=>7
count=2
p=1
No is prime

*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
