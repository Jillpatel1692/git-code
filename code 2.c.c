// Pattern-15
#include<stdio.h>
int main()
{
	int r,c,N=5,j=1;
	for(r=0;r<5;r++) 
	{
		for(c=0;c<=r;c++)
		{
			printf("%d ",j%2);
			j++; 
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
			printf("%d",j%2);
			j++; 
		}
		printf("\n");
	}
	
	return 0;
}
