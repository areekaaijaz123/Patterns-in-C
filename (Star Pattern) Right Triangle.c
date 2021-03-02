#include <stdio.h>
int main()

// Right Triangle

{
	int i,j,n;
	printf("Enter size of triangle : ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for (j=1;j<=n;j++)
		{
			if (j<=i)
			{
			  printf("* ");
		    }
		    else printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
