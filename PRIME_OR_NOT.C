//W A P prime or Not
#include<stdio.h>
#include<conio.h>
void main()
{
int no,cnt=0,i;
clrscr();
printf("Enter No-->");
scanf("%d",&no);
for(i=1;i<=no;i++)
{
if(no%i==0)
{
cnt++;
}
}
if(cnt>2)
{
printf("No %d is not prime",no);
}
else
{
printf("No %d is prime",no);
}
getch();
}
/*
Enter No-->6
No 6 is not prime
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
