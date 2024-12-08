#include<stdio.h>
void main()
{
int rows=5;
for(int i=0;i<rows;i++)
{
if(i==0||i==rows-1)
{
for(int j=0;j<rows;j++)
{
printf("*");
}
}
else
{
printf("*");
for(int j=1;j<rows-1;j++)
{
printf(" ");
}
printf("*");
}
printf("\n");
}
}