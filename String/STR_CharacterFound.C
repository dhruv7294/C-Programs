#include<stdio.h>
#include<conio.h>
void main()
{
char name[10],search;
int i,cnt=0,temp;
clrscr();
printf("\nEnter name==>");
scanf("%s",name);
fflush(stdin) ;
	printf("\n Enter search charcter=>");
	scanf("%c",&search);

	for(i=0;name[i];i++)
	{
	    if(name[i]==search)
	 {
	 cnt++;
	 printf("charcter %c is found  at %d\n ", search,i);
	 }
	}
	if(cnt>0)
	{
	 printf("\n charcter found %d times",cnt);
	 }
	 else
	 {
	printf("charcter not found");
	 }
getch();
}