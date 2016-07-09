# multab
#include<stdio.h>
main()
{
	int n,i,mul;
	printf("value of num:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
	mul=n*i;	
	printf("%d*%d=%d\n",n,i,mul);
	}
}
