#include <stdio.h>
int main()

//Hollow Diamond

{
	int i,j,k=0;
	for(i=1;i<=7;i++)
	{
		i<=4 ? k++ : k--;
		for(j=1;j<=7;j++)
		{
		    if(j==5-k || j==k+3)
			{
				printf("* ");
			}
			else printf("  ");
		}
		printf("\n");
	}
	
	return 0;
}
