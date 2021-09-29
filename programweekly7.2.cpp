#include<stdio.h>
int main()
{
	int size, row, col;
	printf("Enter number: ");
	scanf("%d", &size);
	for (row = 0; row < size; row++)
	{
		if (row == 0 || row == size - 1)
		{
			printf("*");
			for (col = 0; col < size - 1; col++)
			{
				printf("*");
			}
			printf("\n");
			continue;
		}
		printf("*");
		for (col = 0; col < size - 2; col++)
		{
			printf("*");
		}
		printf("*\n");
	}
	return 0;

}