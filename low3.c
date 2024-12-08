#include<stdio.h>
void main()
{
int num;
long long int fact=1;
printf("Enter a number:");
scanf("%d",&num);
if(num<0)
{
printf("Factorial of a negative number doesn't exist\n");
}
else
{
for(int i=1;i<=num;i++)
{
fact*=i;
}
printf("Factorial of %d is %d\n",num,fact);
}
}