#include<stdio.h>
void main()
{
int a,b,c,d,tot;
scanf("%d %d %d %d",&a,&b,&c,&d);
a=a*24*60*60;
b=b*60*60;
c=c*60;
tot=a+b+c+d;
printf("%d",tot);
}