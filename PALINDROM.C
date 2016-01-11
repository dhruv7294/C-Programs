// W A P Palindrome or Not.
#include<stdio.h>
#include<conio.h>
void main()
{
int no,r=0,no1;
int ans=0;
clrscr();
printf("Enter No=>");
scanf("%d",&no);
no1=no;
while(no>0)
{
r=no%10;
ans=ans*10+r;
no=no/10;
}
if(ans==no1)
{
printf("Is Palindrome");
}
else
{
printf("Not Palindrome");
}
getch();
}
/*
Enter No=>121
Is Palindrome
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
