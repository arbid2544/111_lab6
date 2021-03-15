#include<stdio.h>
int main()
{
	int n,i,j,max;
	scanf("%d",&n);
	int a[n][2],b[1000]={0};
	
	for(i=0;i<n;i++)
	   for(j=0;j<2;j++)
	      scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	   for(j=0;j<2;j++)
	      if(a[i][j]!=0)
	         b[a[i][j]-1]++;
    for(i=0;i<n;i++)
	    if(b[i]>max)
	    {
	    	max=i;
		}
	      printf("%d %d",a[max-1][0],a[max-1][1]);
}
