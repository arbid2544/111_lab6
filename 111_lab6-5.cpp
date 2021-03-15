#include<stdio.h>
int main()
{
	int W,H,i,j,sum=0,max=0;
	scanf("%d %d",&W,&H);
	int w[W][H];
	for(i=0;i<H;i++)
	   for(j=0;j<W;j++)
	   {
	   	scanf("%d",&w[i][j]);
	   	sum+=w[i][j];
	   }
	a=sum%(W*H);
	b=(W*H)%sum;
	if(a<b)
	   max=a;
	else
	   max=b;
	printf("%d",max);
	    
	return 0;
}
