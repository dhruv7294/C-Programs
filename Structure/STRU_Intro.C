/*W A P create a stucture stud which has follwing mamber variable
Roll No. Name , sub markes and total.
*/
#include<stdio.h>
#include<conio.h>
#define N 3

struct stu
{
int sno;
char sname[30];
int sub1,sub2,sub3;
};
void main()
{
struct stu s1[N];
int i,total=0,max=0;
char tname[30];
clrscr();
{
for(i=0;i<N;i++)
{
printf("\n Enter Your No.=>");
scanf("%d",&s1[i].sno);

fflush(stdin);

printf("\n Enter Your Name=>");
gets(s1[i].sname);

printf("\n Enter Your English Markes =>");
scanf("%d",&s1[i].sub1);

printf("\n Enter Your Hindi Markes =>");
scanf("%d",&s1[i].sub2);

printf("\n Enter Your Guj. Markes =>");
scanf("%d",&s1[i].sub3);
  }
printf("\n S.no     S.Name    Markes    Total");
printf("\n_____________________________________") ;
  for(i=0;i<N;i++)
  {
  total=s1[i].sub1 + s1[i].sub2 + s1[i].sub3;
		   if(total>max)
		   {
		   max=total;
		    strcpy(tname,s1[i].sname);
		   }

  printf("\n   %3d  %4s	  %4d  %3d  %3d  %3d",s1[i].sno,s1[i].sname,s1[i].sub1,s1[i].sub2,s1[i].sub3,total);

}
  printf("\n This Student is Higst Markes is Name => %s & Maximum Number is => %d",tname ,max);
}
getch();
}
/*
OUTPUT

 Enter Your Name=>harsha

 Enter Your English Markes =>40

 Enter Your Hindi Markes =>50

 Enter Your Guj. Markes =>60

 Enter Your No.=>103

 Enter Your Name=>prithar

 Enter Your English Markes =>40

 Enter Your Hindi Markes =>30

 Enter Your Guj. Markes =>50

 S.no     S.Name    Markes    Total
_____________________________________
   101  pritesh     35   40   50  125
   102  harsha      40   50   60  150
   103  prithar     40   30   50  120
 This Student is Higst Markes is Name => harsha & Maximum Number is => 150

*/