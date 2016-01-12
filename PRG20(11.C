/* W A P pattern
Enter No4
1                                                                               
2 3                                                                             
4 5 6                                                                           
7 8 9 10                                                                        
*/

#include<stdio.h>
#include<conio.h>
void main()
{
int no,a=1;
int i,j;
clrscr();
printf("Enter No");
scanf("%d",&no);
for(i=1;i<=no;i++)
{
for(j=1;j<=i;j++)
{
    printf("%d ",a);
    a++;
}
printf("\n");
}
getch();
}
/*
OUTPUT
Enter No4
1
2 3
4 5 6
7 8 9 10
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
