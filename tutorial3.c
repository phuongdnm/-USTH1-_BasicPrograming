#include <stdio.h>
#include <math.h>

int main(void){
	printf("Exercise 1: \n");
	float x, y, z;
	int i;
	printf("Enter 3 numbers: ");
	scanf("%f %f %f", &x, &y, &z);
	
	float max = x , min = x;
	if (y > max) max = y;
	if (z > max) max = z;
	if (y < min) min = y;
	if (z < min) min = z;

	printf("Max : %f\n", max);
	printf("Min : %f\n", min);

	
	printf("\n");
	printf("Exercise 2: \n");
	float a, b, c, delta;
	float x1, x2;
	printf("Enter 3 numbers a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	delta = b*b - 4*a*c;
	if (delta < 0)
		printf("The equation has no solution.");
	else if (delta == 0)
		printf("The equation has 1 solution: %.4f", -b/(2*a));
	else {
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("Solution 1: %.4f\n", x1);
		printf("Solution 2: %.4f\n", x2);
	}

	
	int year;
	printf("\n\nExercise 3: \n");
	printf("Enter a year: ");
	scanf("%d", &year);
	if (( year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		printf("%d is a leap year", year);
	else
		printf("%d is not a leap year", year);


	printf("\n\nExercise 4: \n");
	int a4, b4, c4, d4, e4, f4;
	float dx, dy, dd;
	printf("Enter a, b, c: "); scanf("%d %d %d", &a4, &b4, &c4);
	printf("Enter d, e, f: "); scanf("%d %d %d", &d4, &e4, &f4);
	dx = - b4 * f4 + e4 * c4;
	dy = - c4 * d4 + a4 * f4;
	dd = a4 * e4 - b4 * d4;
	printf("The equation has the solution: \n");
	printf("x = %.4f\n", dx / dd);
	printf("y = %.4f", dy / dd); 

	printf("\n\nExercise 5: \n");
	int month;
	printf("Enter a month (numeric): \n"); scanf("%d", &month);
	switch (month){
		case 1: printf("31 days"); break;
		case 2: printf("28 or 29 days"); break;
		case 3: printf("31 days"); break;
		case 4: printf("30 days"); break;
		case 5: printf("31 days"); break;
		case 6: printf("30 days"); break;
		case 7: printf("31 days"); break;
		case 8: printf("31 days"); break;
		case 9: printf("30 days"); break;
		case 10: printf("31 days"); break;
		case 11: printf("30 days"); break;
		case 12: printf("31 days"); break;
	}
	return 0;
	
}