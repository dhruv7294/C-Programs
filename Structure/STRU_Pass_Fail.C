#include<stdio.h>
#include<conio.h>
#include<string.h>
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
int i,total=0,max=0,pre;
char tname[30];
int english,hindi,guj;
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
printf("\n S.no     S.Name      Markes    Total   Presentage   Passing");
printf("\n______________________________________________________________") ;

  for(i=0;i<N;i++)
  {
  total=s1[i].sub1 + s1[i].sub2 + s1[i].sub3;
  pre=total/3;
		   if(total>max)
		   {
		   max=total;
		   strcpy(tname,s1[i].sname);
		   }
		  if(pre>35)
		{
		 printf("\n %3d  %5s  %3d  %3d  %3d   %5d     %5d   \t pass ",s1[i].sno,s1[i].sname,s1[i].sub1,s1[i].sub2,s1[i].sub3,total,pre);
		 }
		 else
		 {
		    printf("\n %3d  %5s  %3d  %3d  %3d   %5d     %5d \t  Fail ",s1[i].sno,s1[i].sname,s1[i].sub1,s1[i].sub2,s1[i].sub3,total,pre);
		 }

}
  printf("\n This Student is Higst Markes is Name => %s Number => %d",tname ,max);

}
getch();
}
