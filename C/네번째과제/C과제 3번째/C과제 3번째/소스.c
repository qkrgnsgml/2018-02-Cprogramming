#include  <stdio.h>
#include  <math.h>

void main(void)
{
	double  a, b, c, d, e;

	printf("a��? ");
	scanf_s("%lf", &a); // ax���� + bx+c = 0
	printf("b��? ");
	scanf_s("%lf", &b); 
	printf("c��? ");
	scanf_s("%lf", &c);

	if (a == 0)
	{
		printf("x = %f \n", -c / b);
	}
	else
	{
		d = b * b - 4.0*a*c;//�Ǻ���
		if (d > 0)
		{
			e = sqrt(d);
			printf("�� ���� ��: %f, %f \n", (-b + e) / (2.0*a), (-b - e) / (2.0*a));
		}
		else
		{
			if (d == 0)
			{
				printf("�� ���� ��: %f \n", (-b) / (2.0*a));
			}	
			else
			{
				printf("���� �����ϴ�.(���)\n");
			}
		}
	}

}