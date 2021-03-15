#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,j;

	scanf("%d",&n);
	char A[n][1000],B[1000];
	for(i=0;i<n;i++)
	{
		scanf("%s",A[i]);

	}
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{
		if(strcmp(A[i],A[j])>0)
		{
		  strcpy(B,A[i]);
		  strcpy(A[i],A[j]);	
		  strcpy(A[j],B);
	    }
	}
	
	for(i=0;i<n;i++)
	{
		printf("%s\n",A[i]);
	}
	
	return 0;
}
