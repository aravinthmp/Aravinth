#include<stdio.h>
int main()
{
	 char a[1000];
  	int b=0,c=0,i;
   	gets(a);
  	for(i=0;a[i]!=NULL;i++)
	{
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
		b=++c;
	}
	printf("%d",b);
	return 0;
