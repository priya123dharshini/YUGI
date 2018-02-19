#include<stdio.h>
#include<string.h>
int main()
{
	int n,l,y,i;
	char a[100];
	gets(a);
	scanf("%d",&n);
	l=strlen(a);
	y=l-n;
	for(i=y;i<l;i++)
	{
		printf("%c",a[i]);
	}
	return(0);	
}
