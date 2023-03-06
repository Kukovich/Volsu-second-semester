#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i, num, u;
	double Arr[10], O = 11, A = 0.0, Two, One, H, P = 0;
	printf("\nДиапазон от -10 до 10\n");
	srand(time(NULL));
	for(i=0;i<10;i++)
	{	num = rand() % 2;
		One = rand() % 10;
		Two = rand() % 10;
		H = Two/10;
		if (num == 0)
		{
		Arr[i]=(One+H);
		}
		else
		{
		Arr[i]=((One+H)*-1);
		}
		printf("\nЧлен массива = %lf\n", Arr[i]);
		P = P+Arr[i];
		if (O > Arr[i])
		{
			O = Arr[i];
		}
		else
		{
			continue;
		}
	}	
	for(u = 0; u<10; u++)
	{
		if(Arr[u] > O)
		{
			A = A + Arr[u];
		} 
	}
	printf("\nСумма = %lf\nМинимальное число = %lf\nСумма всех элементов = %lf\n", A, O, P);
	return 0;
}
