/* W A P write a function using pointer recive a
chacter string and as chacter as argument and all
occurrnce of this chacter in the string
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void del(char *str,char ch)
{
int i=0,j=0;

	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==ch)
		{
			for(j=i;j<strlen(str);j++)
			{
			str[j]=str[j+1];
			}
			i--;
		}
	}
	printf("string=%s",str);
}
void main()
{
char str[20],ch;
int i,j;
clrscr();
printf("enter string--->");
gets(str);
printf("enter search character--->");
scanf("%c",&ch);
del(str,ch);
getch();
}
/*
OUTPUT
enter string--->priteshhhhhHarshhhh
enter search character--->h
string=pritesHars

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
