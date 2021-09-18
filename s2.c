// C program to get the sum of the series
#include <math.h>
#include <stdio.h>
 
// Function to get the series

double Series(double x, int n)
{

    double sum = 1, term = 1, fct, j, y = 2, m;
 

    // Sum of n-1 terms starting from 2nd term

    int i;

    for (i = 1; i < n; i++) {

        fct = 1;

        for (j = 1; j <= y; j++) {

            fct = fct * j;

        }

        term = term * (-1);

        m = term * pow(x, y) / fct;

        sum = sum + m;

        y += 2;

    }

    return sum;
}

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
