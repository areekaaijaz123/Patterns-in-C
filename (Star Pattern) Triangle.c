#include <stdio.h>
int main()


// Triangle

{
	int i,j,k=1;
	for(i=1;i<=3;i++)
    {
		for (j=1;j<=5;j++)
		{
			if (j>=4-i && j<=i+2)
			{
			 printf("%d ",k);
			 j<3 ? k++ :k--;
			 }
			else printf("  ");
		}
	     k+=2;
		printf("\n");
	}
	return 0;
}
