#include <stdio.h> 
#include <stdlib.h> 
int Square(int y);

int main(void)
{
	int x;

	for (x = 1 ; x <= 10; x++)
		printf("%d ", Square(x));

	printf("\n"); 
	system("pause"); 
	return 0 ;
}
int Square(int y)
{
	return y * y;
}