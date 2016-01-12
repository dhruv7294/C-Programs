//W A P 5 subject markes total & parcentage
#include<stdio.h>
#include<conio.h>
void main()
{
int sub1,sub2,sub3,sub4,sub5;
int total;
float p;
clrscr();
printf("Enter Sub1=>");
scanf("%d",&sub1);
printf("Enter Sub2=>");
scanf("%d",&sub2);
printf("Enter Sub3=>");
scanf("%d",&sub3);
printf("Enter Sub4=>");
scanf("%d",&sub4);
printf("Enter Sub5=>");
scanf("%d",&sub5);
total=sub1+sub2+sub3+sub4+sub5;
printf("Total is %d",total);
p=(((float)total*100)/500);
printf("\n parcentage is %.2f",p);
if(p>=70)
{
printf("\n Distiction");
}
else if(p>=60 &&p<=70)
{
printf("\n First class");
}
else if(p>=50 &&p<=60)
{
printf("\n Second class");
}
else if(p>=40 && p<=50)
{
printf("\n Pass class");
}
else
{
printf("\n Fail");
}
getch();
}
/*
Enter Sub1=>80
Enter Sub2=>70
Enter Sub3=>80
Enter Sub4=>70
Enter Sub5=>80
Total is 380
 parcentage is 76.00
 Distiction
 */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
