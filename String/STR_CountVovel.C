// W A P for count voval

#include<stdio.h>
#include<conio.h>
void main()
{
char name[10],len;
int i,cnt=0;
clrscr();

printf("\n \t Enter name==>");
scanf("%s",name);
	for(i=0;name[i]!='\0';i++)
	{
	if(name[i]=='a'|| name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
	{
	cnt++;
	printf("\n%c is voval",name[i]);
	}
	else
	{
	printf("\n%c is Not voval",name[i]);
	}
	}
	printf("\n voval count is=> %d",cnt);

getch();
}
/*
OUTPUT

         Enter name==>prithar                                                   
                                                                                
p is Not voval                                                                  
r is Not voval                                                                  
i is voval                                                                      
t is Not voval                                                                  
h is Not voval                                                                  
a is voval                                                                      
r is Not voval                                                                  
 voval count is=> 2                                                             

*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
