//W A P All Prime No 50 To 150
#include<stdio.h>
#include<conio.h>
void main()
{
int no,cnt,i,j;
clrscr();
printf("All Prime no 50 To 150");
for(i=50;i<=150;i++)
{
cnt=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
{
cnt++;
}
}
if(cnt<=2)
{
printf("\n %d is prime",i);
}
}
getch();
}
/*
All Prime no 50 To 150
 53 is prime
 59 is prime
 61 is prime
 67 is prime
 71 is prime
 73 is prime
 79 is prime
 83 is prime
 89 is prime
 97 is prime
 101 is prime
 103 is prime
 107 is prime
 109 is prime
 113 is prime
 127 is prime
 131 is prime
 137 is prime
 139 is prime
 149 is prime
*/
                                                                                
                                                                                
                                                                                
