#include<stdio.h>
#include<math.h>
void main()
{
int start,end;
printf("Enter the starting range:");
scanf("%d",&start);
printf("Enter the ending range:");
scanf("%d",&end);
printf("strong numbers between %d and %d are:",start,end);
for(int num=start;num<=end;num++)
{
int sum=0;
int temp=num;
for(;temp>0;temp/=0)
{
int digit=temp%10;
int fact=1;
for(int i=1;i<=digit;i++)
{
fact*=i;
}
sum+=fact;
}
if(sum==num)
{
printf("%d",num);
}
}
printf("\n");
}