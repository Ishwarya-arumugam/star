#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[50];
int i;
clrscr();
scanf("%s",a);
for(i=0;i<=strlen(a);i++)
{
printf("%c",a[i]);
if(a[i]==a[i+1])
{
printf("*");
}
}
getch();
}
