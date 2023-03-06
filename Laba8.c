#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i, num;
	double Arr[10], O, A = 1.0, Two, One, H;
	printf("\n Диапазон от -10 до 10\n");
	srand(time(NULL));
	for(i=0;i<10;i++)
	{	num = rand() % 2;
		One = rand() % 10;
		Two = rand() % 10;
		H = Two/10;
		Arr[i]=(One+H);
		O = Arr[i];
		printf("%d\n", num);
		if (num == 0)
		{
			O = O*1;
		}
		else
		{
			O = O *-1;
		}
		printf("Число = %lf\n", O);
		if (O > 0)
		{
			A = A * O;
		}
		else
		{
			A = A*1.0;
		}
	}
	printf("\n Произведение = %lf\n", A);
	return 0;
}
