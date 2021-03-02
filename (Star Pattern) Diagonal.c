
#include <stdio.h>
int main()

// Diagonal making

{
	int a,b,c,N;
	printf("Size of diagonal ? ");
	scanf("%d",&N);
	printf("\n");
	for (a=0;a<N;a++)
	{
		
		for (b=0;b<N;b++)
		{
			c=a+b;
			if ((b==a)||(c==(N-1)))
			printf(" * ");
			else printf(" . ");
		}
		printf("\n");
	}
	getch();
	return 0;
}
