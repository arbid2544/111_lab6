#include<stdio.h>
int main()
{
	int n,n1,n2,t=0,f=0;
	scanf("%d",&n);
	scanf("%d",&n1);
	scanf("%d",&n2);
	for(int i=0;i<n;i++)
	{
		if(n1%10==n2%10)
		  t++;
		else
		  f++;
		n1/=10;
		n2/=10;
	}
	printf("%d %d",t,f);
	return 0;
}
