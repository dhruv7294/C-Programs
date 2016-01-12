/* W A P from the all txt file seprate even and odd number store in the all txt
even txt and odd txt disply
*/

#include<stdio.h>
#include<conio.h>
#define N 10
void main()
{
FILE *f1,*f2,*f3;
int no;
int i;
clrscr();
f1=fopen("all.txt","r");
f2=fopen("odd.txt","w");
f3=fopen("even.txt","w");
for(i=0;i<N;i++)
{
no=getw(f1);
if(no%2==0)
{
  putw(no,f2);
}

else
{
  putw(no,f3);
}
}
fclose(f1);
fclose(f2);
fclose(f3);
printf("Created Odd & Even Number....");
getch();
}
/*
OUTPUT

Created Odd & Even Number....

*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
