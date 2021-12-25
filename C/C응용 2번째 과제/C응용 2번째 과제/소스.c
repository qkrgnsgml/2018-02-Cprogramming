#include <stdio.h>

void main()
{
	printf("201844082 ¹ÚÈÆÈñ\n");
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int b[10] = {0 } , i;
	for (i = 0; i < 10; i++)
	{
		b[i] = a[9 - i];
		printf("%d     %d\n", a[i], b[i]);
	}
}