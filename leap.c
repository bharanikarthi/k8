#include<stdlib.c>
#include<conio.h>
void main()
{
int year;
printf("enter the year");
scanf("%d",&year);
if(year%4==0)
{
if(year%100==0)
{
if(year%400==0)
printf("yes");
else
printf("no");
}
else
printf("yes");
}
else
printf("no");
getch();
}
