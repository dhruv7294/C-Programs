// W A P to for  sorting element using pointer

#include<stdio.h>
#include<conio.h>
#define N 5
void main()
{
int a[N],*ptr;
int i,j,temp;
clrscr();
for(i=0;i<N;i++)
{
printf("Enetr the value =>");
scanf("%d",&a[i]);
}

for(i=0;i<N;i++)
{
  ptr=&a[0];
	for(j=0;j<N-1;j++)
	{
	if(*ptr>(*(ptr+1)))
	{
	temp=*ptr;
	*ptr=*(ptr+1);
	*(ptr+1)=temp;
	}
		ptr++;
	}
}
printf(" \n \t____Shorting value");
ptr=&a[0];
for(i=0;i<N;i++)
{
printf("\n \t  %d",*ptr);
ptr++;
}
getch();
}

/*
OUTPUT
Enetr the value =>7
Enetr the value =>6                                                             
Enetr the value =>51                                                            
Enetr the value =>4                                                             
Enetr the value =>1                                                             
                                                                                
        ____Shorting value                                                      
          1                                                                     
          4                                                                     
          6                                                                     
          7                                                                     
          51                                                                    
                                                                                
                                                                                
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
