#include<stdio.h>
#include<conio.h>
#define N 3
struct data
{

char dname[30];
char cperson[40];
int cellno;
};
void main()
{
struct data p1[N];
int i;
char find[5];
clrscr();
for(i=0;i<N;i++)
{
fflush(stdin);
printf("\n Enter Department Name.=>");
gets(p1[i].dname);

fflush(stdin);

printf("\n Enter Contact Person=>");
gets(p1[i].cperson) ;

fflush(stdin);
printf("\n Enter Your Mobile No.=>");
scanf("%d",&p1[i].cellno);
}
printf("\n Department Name      contact Person    Mobile Number");
printf("\n ___________________________________________________");
for(i=0;i<N;i++)
{

	printf("\n  %-15s  %-15s    %7d",p1[i].dname,p1[i].cperson,p1[i].cellno);
}
fflush(stdin);
	printf("\n Find The Department=>");
	gets(find);
	for(i=0;i<N;i++)
	{
	   if(strcmp(p1[i].dname,find)==0)
	   {
	   printf("\n  %-15s  %-15s    %7d",p1[i].dname,p1[i].cperson,p1[i].cellno);
	   }
	}
getch();
}
