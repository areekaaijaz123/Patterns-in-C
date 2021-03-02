#include<stdio.h>
int main()

// Rhombus pattern
{
	int i,j,n,k;
	printf("Enter size of Rhombus : \n");
	scanf("%d %d",&n,&k);
	
	for(i=1;i<=n;i++)
	{
		for (j=1;j<=k;j++)
		{
	      if (j>=((n+1)-i) && j<=((k+1)-i))
	      {
	      	printf(" * ");
		  }
		  else printf("  ");
		}
		printf("\n");
	}
	return 0;
}
