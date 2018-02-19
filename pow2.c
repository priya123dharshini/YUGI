#include<stdio.h>
int main()
{
	int n,i,a;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=pow(2,i);
    if(a>n)
    {
	  printf("\n%d",a);
    break;
    }
}}
