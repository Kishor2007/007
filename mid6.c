#include<stdio.h>
void get(int a[2][2],int r,int c)
{
for(int i=0;i<r;i++)
{
for(int j=0;j<r;j++)
{
scanf("%d",&a[i][j]);
}
}
}
int display(int a[2][2],int r,int c)
{
int s;
for(int i=0;i<r;i++)
{
for(int j=0;j<r;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
}
void sum(int a[2][2],int r,int c)
{
int sum=0;
for(int i=0;i<r;i++)
{
for(int j=0;j<r;j++)
{
if(i==j)
{
sum=sum+a[i][j];
}
}
}
printf("The sum value is:%d",sum);
}
int main()
{
int a[2][2];
int r,c;
printf("Enter tha r and c value:");
scanf("%d %d",&r,&c);
printf("Get a matrix:");
get(a,r,c);
printf("display...!\n");
display(a,r,c);
sum(a,r,c);
return 0;
}