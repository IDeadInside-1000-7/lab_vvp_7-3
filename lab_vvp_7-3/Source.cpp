#include <stdio.h>
#include <math.h>
float main()
{
	float Y, X, A, rez;
	printf("Enter X(kg) and A(rub): ");
	printf("X = ");
	scanf("%f", &X);
	printf("A = ");
	scanf("%f", &A);
	rez = A / X;
	printf("X(kg) of sweets costs that amount of rub ");
	printf("%f\n", A);
	printf("1 kg of sweets costs that amount of rub ");
	printf("%f\n", rez);
	printf("Enter Y(kg): ");
	scanf("%f", &Y);
	printf("Y(kg) of sweets costs that amount of rub ");
	printf("%f\n", (Y * rez));
}