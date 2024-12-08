#include<stdio.h>
void main()
{
int a,b,sum;
printf("Enter a and b value:");
scanf("%d%d",&a,&b);
a%1==0;
printf("%d\n",a);
b%1==0;
printf("%d\n",b);
sum=a+b;
printf("Enter the sum value:%d\n",sum);
sum=sum%10;
if(sum%2==0)
{
printf("The number is even\n");
}
else if(sum%100==0)
{
printf("The number is odd");
}
else
{
printf("invalid input");
}
}
  