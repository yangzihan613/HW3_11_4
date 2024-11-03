#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
void main(void)
{
	char stringl[60] = "Welcome"; 
	char string2[60];

	int len;

	strcpy(string2, stringl); 
	printf("string2=%s\n", string2);

	len = strlen(string2);
	printf("¦r¦êªø«×%d\n", len);

	system("pause");
	return 0;
}