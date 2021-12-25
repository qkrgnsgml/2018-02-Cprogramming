#include <stdio.h>

void main()
{
	printf("201844082 ¹ÚÈÆÈñ\n");
	int x[5] = { 1,2,3,4,5 };
	int y[5] = { 5,4,3,2,1 };
	int z[5] = { 0 };
	int i;
	for (i = 0; i < 5; i++)
	{
		z[i] = x[i] + y[4 - i];
		printf("%d\n", z[i]);
	}
}