// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#define FUNC(x)	sin(x)
#define Q(x, n) (x*x) /((-2) * (n + 3) * (n + 2))
#define PI 3.1415


int main()
{
	double x, S = 0;
	printf("%s", "Enter x: (Rule 0 <= x <= PI)\n");
	scanf("%lf", &x);
	if (x >= 0 && x <= PI) {
		double a = x;
		unsigned int n = 0, N = 6;
		for (; n <= N; ++n) {
			S += a;
			a *= Q(x, n);
		}
		double y = FUNC(x), tol = fabs(S - y);
		printf("Sum:\t\t%.7f\nControl:\t%.7f\nTolerance:\t%.7f\n", S, y, tol);
		getchar();
	}
	else {
		printf("%s", "Invalid input. Look at the rule!\n");
		getchar();
		return -1;
	}
	return 0;
}


