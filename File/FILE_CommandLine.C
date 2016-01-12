/*  W A P read text file given commend line  and print of total
number of chacter in each line and and total number of line in file
 */
#include<stdio.h>
#include<conio.h>
void main()
{
FILE *f1;
char ch;
int cnt=0,cntc=0;
clrscr();
f1=fopen("12.txt","r");
while(ch!=EOF)
{
if(ch=='\n')
{
  cnt++;
}
if(ch!='\0')
{
 cntc++;
}
  ch=getc(f1);
  printf("%c",ch);
}
printf("\n");
fclose(f1);
printf("\n Total Line is=> %d",cnt);
printf("\n Total Charcter is=> %d",cntc);
getch();
/*
OUTPUT
Pause for a moment and consciously be aware of
things you want to remember later, such as the
sound of a loved one’s chuckle, or a touching moment
between two family members.ÿ

 Total Line is=> 3
 Total Charcter is=> 178

*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

}
