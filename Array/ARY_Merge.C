// W A P marge to array in third one

#include<stdio.h>
#include<conio.h>
#define N 5
void main()
{
int a[N],b[N],c[N];
int i=0,k=0,j=0;
clrscr();
for(i=0;i<N;i++)
{
printf("Enter No A=>");
scanf("%d",&a[i]);
c[j]=a[i];
j++;
}
for(k=0;k<N;k++)
{
printf("Enter No B=>");
scanf("%d",&b[k]);
c[j++]=b[k];
}
for(i=0;i<j;i++)
{
printf("\nc[%d]=%d",i,c[i]);
}
getch();
}

/*
OUTPUT
Enter No A=>1
Enter No A=>2
Enter No A=>3
Enter No A=>4
Enter No A=>5
Enter No B=>6
Enter No B=>7
Enter No B=>8
Enter No B=>9
Enter No B=>10

c[0]=1
c[1]=2
c[2]=3
c[3]=4
c[4]=5
c[5]=6
c[6]=7
c[7]=8
c[8]=9
c[9]=10

*/
                                                                                
                                                                                
                                                                                
