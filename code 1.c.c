// Pattern-14
#include<stdio.h>
int main()
{
	int r,c,N=5;
	for(r=0;r<5;r++) 
	{
		for(c=0;c<=r;c++)
		{
			printf("%d ",); 
		}
		printf("\n");
	}
	printf("\n pattern 2");
	printf("\n");
	for(r=0;r<N;r++)
	{
		for(c=0;c<N-(r+1);c++)
		{
			printf("*");
		}
		for(c=0;c<=r;c++)
		{
			printf("%d",); 
		}
		printf("\n");
	}
	
	return 0;
}
