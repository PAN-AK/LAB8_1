#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int r, m, n, sum = 0, q, o, k = 0;
	char l, j;
	float x, y, st;

	// Zadanie 0
	printf("\nEnter symbol");
	scanf(" %c", &l);
	printf("\nEnter symbol");
	scanf(" %c", &j);
	printf(" Enter how many symbols you want to output:");
	scanf(" %d", &r);
	for (int start = 1; start <= r / 2; start++)
		printf("%c!", l);
	for (int end = (r / 2 + 1); end <= r; end++)
		printf("%c!", j);
	putchar('+');


	// Zadanie 1
	printf("\nEnter the range from:");
	scanf(" %d", &m);
	printf("To:");
	scanf(" %d", &n);
	for (int i = m; i <= n; i++) {
		sum += i;
		printf("\ncompleted %d times", k++);
	}
	printf("\nresult = %d", sum);


	// Zadanie 1A
	printf("\nEnter the the range from:");
	scanf(" %d", &o);
	printf("\nTo:");
	scanf(" %d", &q);
	for (int step = o; step <= q; step++)
		printf("\n%f", (pow(2, step)));



// Zadanie 2
	printf("Enter function: y = 5x^3 + 2x^2 - 15x - 6");
	printf("\nEnter the tab stop value:");
	scanf(" %f", &st);
	printf("\n|   x    |    f(x)   |");
	printf("\n--------------------"); 
	for (x = 1.3; x <= 3.4; x += st) {
		y = (5 * pow(x, 3) + 2 * pow(x, 2) - 15 * x - 6);
		printf("\n| %4.4f | %9.4f |",x, y );
	}



}