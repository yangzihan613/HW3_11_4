#include <stdio.h>
#include <stdlib.h> 
int maximun(int x, int y, int z);
int main(void)
{
	int numberl;
	int number2;
	int number3;
	printf("Enter three integers:");
	scanf("%d %d %d", &numberl, &number2, &number3);
	printf("Maximun is: %d\n", maximun(numberl, number2, number3)),
	system("pause");
	return 0;
}
int maximun(int x, int y, int z)
{
int max = x;
if (y > max)
max = y;
if (z>max)
max = z;

return max;
}