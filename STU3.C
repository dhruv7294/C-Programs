/* W A P create a stucture  call employe having follwing member
name id salary and find minimum value.
*/
#include<stdio.h>
#include<conio.h>
#define N 3
struct emp
{
int eno;
char ename[30];
int s1;
};
main()
{
struct emp e1[N];
int i,min=25000;
clrscr();
for(i=0;i<N;i++)
{

printf("\n Enter Employ No.=>");
scanf("%d",&e1[i].eno);

fflush(stdin);

printf("\n Enter Your Name=>");
gets(e1[i].ename) ;

printf("\n Enter Your salary=>");
scanf("%d",&e1[i].s1);
}
printf("\n Emp No.  EmpName   EmpSalary");
printf("\n _________________________");
for(i=0;i<N;i++)
{
	printf("\n  %d \t  %s    %d",e1[i].eno,e1[i].ename,e1[i].s1);
	if(min>e1[i].s1)
	{
	min=e1[i].s1;
	}
}
printf("\n Minimum value is= %d",min);
getch();
}
/*
OUTPUT

 Enter Employ No.=>1

 Enter Your Name=>pritesh

 Enter Your salary=>2000

 Enter Employ No.=>2

 Enter Your Name=>harprit

 Enter Your salary=>5000

 Enter Employ No.=>3

 Enter Your Name=>prithar

 Enter Your salary=>4000

 Emp No.  EmpName   EmpSalary
 _________________________
  1       pritesh    2000
  2       harprit    5000
  3       prithar    4000
 Minimum value is= 2000

 */