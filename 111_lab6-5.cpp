#include<stdio.h>
int main()
{
	int W,H,i,j,sum=0,max=0,x,y;
	scanf("%d %d",&W,&H);
	int w[W][H];
	for(i=0;i<H;i++)
	   for(j=0;j<W;j++)
	   {
	   	scanf("%d",&w[i][j]);
	   	sum+=w[i][j];
	   }
	   x=sum;
	   y=sum;
	for(i=1;i<W*H;i++)
	{
	
		if(sum%(W*H)==0)
		{
			//	printf("Ok1");
			max=sum;
		    break;
		}
		else if((x-i)%(W*H)==0)
		{
			//	printf("Ok2");
			max=x-i;
			break;
		}
		else if((y+i)%(W*H)==0)
		{
			//	printf("Ok3");
			max=y+i;
			break;
		}
	}
	if(max-sum>sum-max)
	   max=max-sum;
	else
	   max=sum-max;
	printf("%d",max);
	    
	return 0;
}
