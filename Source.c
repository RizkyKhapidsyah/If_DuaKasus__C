#include <stdio.h>
#include <conio.h>

int main()
{
	
	int a;
	
	printf("Contoh IF Dua Kasus \n");

	printf("Ketikkan suatu nilai integer :");
	scanf_s("%d", &a);
	
	if (a >= 0)
	{
		printf("Nilai a positif %d \n", a);
	}
	else
	{
		printf("Nilai a negatif %d \n", a);
	}
	
	_getch();
	return 0;
}