#include <stdio.h>
int main()

// Square pattern

{
	int i,j,n;
	printf("Enter size of square : ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for (j=1;j<n;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}
