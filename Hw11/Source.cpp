#include<stdio.h>
int main()
{
	int x = 0, y = 0, i;
	for (x = 1; x <= 10000; x++) {
		for (i = 1; i < x; i++)
		{
			if (x % i == 0) {
				y += i;
			}
		}
		if (y == x) {
			printf("%d ", x);
		}
		y = 0;
	}
	return 0;
}