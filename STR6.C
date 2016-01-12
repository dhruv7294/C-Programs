//W A P count no of lower case and uppercase to string

#include<stdio.h>
#include<conio.h>
void main()
{
char name[20];
int i,lo=0,up=0;
clrscr();
printf("Enter Name=>");
scanf("%s",name);
fflush(stdin);
for(i=0;i<name[i];i++)
{
if(name[i]>= 'A' && name[i]<='Z')
up++;
if(name[i]>= 'a' && name[i]<='z')
lo++;
}
printf("\n Uppercase charcter is=> %d",up);
printf("\n Lowercase charcter is=> %d",lo);
getch();
}
/*
OUTPUT
Enter Name=>PritHar

 Uppercase charcter is=> 2
 Lowercase charcter is=> 5
*/



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


