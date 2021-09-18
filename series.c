// C program to get the sum of the series
#include <math.h>
#include <stdio.h>

// Function to get the series
double Series(double x, int n)
{
	double sum = 1, term = 1, fct, j, m;
	int i;
	for (i = 2; i <= n; i++) {
		fct = 1;
		for (j = 1; j <= i; j++) {
			fct = fct * j;
		}
		m = x / fct;
		sum = sum + m;
	}
	return sum;
}

// Driver Code
int main()
{
	double x;
	int n;
printf("Enter x: ");
scanf("%lf", &x);
printf("Enter n: ");
scanf("%d", &n);

	printf("%.4f", Series(x, n));
	return 0;
}

// sadasd
// adasd
// asdaasd