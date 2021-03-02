#include <stdio.h>
int main()

//Diamond shape

{
	int i,j,n=0;
	for (i=1;i<=9;i++)
	{
		 i<=5 ?
		n++ : n--;
		for (j=1;j<=9;j++)
		{
			if(j<=6-n || j>=4+n)
			{
				printf(" o ");
			}
			else printf(" * ");
		}
			printf("\n\n");
		
	}
	return 0;
	
}
