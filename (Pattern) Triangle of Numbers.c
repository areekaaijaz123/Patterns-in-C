#include <stdio.h>
int main()
{
	int i , j , k , x=1 , rows ;
	printf("Enter no. of rows : ");
	scanf("%d",&rows);
	for (i=1 ; i<=rows ; i++)
	{
		k=1;
		for (j=1 ; j<=rows*2-1 ; j++)
		{
			if (j>=rows+1-i && j<=rows-1+i && k)
			{
				printf("%2d ",x);
				x++;
				k=0;
			}
			else
			{
				printf("  ");
				k=1;
			}
		}
		printf("\n");
	}
}
