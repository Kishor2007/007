#include<stdio.h>
void main()
{
int bs,hra,da,gs;
printf("Enter the basic salary:");
scanf("%d",&bs);
if(bs<1500)
{
hra=bs*10/100;
da=bs*90/100;
gs=bs+hra+da;
printf("The gross value is:%d\n",gs);
}
else if(bs>=1500)
{
hra=500;
da=bs*98/100;
gs=bs+hra+da;
printf("The gross value is:%d",gs);
}
else
{
printf("invalid input");
}

}
  