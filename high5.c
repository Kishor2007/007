#include<stdio.h>
#include<string.h>
void main()
{
char s[]="welcomeksrct";
int len=strlen(s);
for(int i=len-1;i>=0;i--)
{
if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U')
{
printf("%c",s[i]);
}
}
printf("\n");
}