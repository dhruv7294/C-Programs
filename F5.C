// W A P read in integar number store then in file all.txt

#include<stdio.h>
#include<conio.h>
#define N 3
void main()
{
FILE *f1;
int no[N];
int i=0;
clrscr();
for(i=0;i<N;i++)
{
printf("Enter No=>");
scanf("%d",&no[i]);
}
f1=fopen("6.txt","w");
for(i=0;i<N;i++)
{
putw(no[i],f1);
}
fclose(f1);
f1=fopen("6.txt","r");
for(i=0;i<N;i++)
{
printf("%d",getw(f1));
}
fclose(f1);

printf("To file is Susessful Insert");
getch();
}
/*

OUTPUT
Enter No=>1
Enter No=>2
Enter No=>3
123To file is Susessful Insert

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
