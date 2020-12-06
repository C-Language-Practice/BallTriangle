#include <stdio.h>
#include <stdlib.h>

void drawTriangle(float height)
{
	int ballCount = 1;
	for (int i = height; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			printf_s(" ");
		}
		for (int n = 0; n < ballCount; n++)
		{
			printf_s("*");
		}
		ballCount = ballCount + 2;
		printf_s("\n");
	}
}


int main()
{
	int height;
	printf_s("Ball Triangle \n \n");
	printf_s("Please specify the height of the triangle:\n");
	scanf_s("%d", &height);
	printf_s("\n");

	drawTriangle(height);
	return 0;
}
