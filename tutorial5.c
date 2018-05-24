#include <stdio.h>
#include <math.h>


int exercise1(int x, int y){
	int i, gcd = 1;
	for (i = 1; i <= x && i <= y; ++i){
		if ((x % i == 0) && (y % i == 0))
			gcd = i;
	}
	printf("Greatest common divisor is: %d", gcd);
}

void exercise2(float a, float b, float c, float *x1, float *x2){
	float delta;
	delta = b*b - 4*a*c;
	*x1 = (-b + sqrt(delta)) / (4*a);
	*x2 = (-b - sqrt(delta)) / (4*a);
}

int exercise3(float x, float y){
	printf("f(x) = 2.5*x = %.2f\n", 2.5 * x);
	printf("g(x,y) = x*y = %.2f", x * y);
}

int exercise4(int n){
	if (n >= 1)
		return n*exercise4(n-1);
	else
		return 1;
}

int exercise5a(int x, int n){
	int i, result = 1;

	for ( i = 1; i <= n; ++i){
		result *=x;
	}
	return result;
}

int exercise5b(int x, int n){
	if (n != 0){
		return x*exercise5b(x, n-1);
	}
	else 
		return 1;
}

int main(void){

	//Write a function to calculate f(x) = 2.5*x and g(x,y) = x*y
	float x3, y3;
	printf("\nExercise 3: ");
	printf("\nEnter x and y: "); scanf("%f %f", &x3, &y3);
	exercise3(x3, y3);

	//Write a function to find gcd of 2 positive integers
	int x1, y1;
	printf("\n\nExercise 1: ");
	printf("\nEnter 2 positive integer: "); 
	scanf("%d %d", &x1, &y1);
	exercise1(x1, y1);


	//Write a function to solve ax^2 + bx * c = 0 and use it to
	//solve ax^4 + bx^2 + c = 0
	float a2, b2, c2;
	float x21, x22;
	printf("\n\nExercise 2:");
	printf("\nEnter 3 number a, b,c: ");
	scanf("%f %f %f", &a2, &b2, &c2);
	exercise2(a2, b2,c2, &x21, &x22);
	printf("\nSolution:");
	printf("%.2f\t %.2f", sqrt(x21), -sqrt(x21));
	printf("\n%.2f\t %.2f", sqrt(x22), -sqrt(x22));

	//Write a C function to enter a positive integer number 
	//and calculate n! using recursive function
	printf("\n\nExercise 4: ");
	int n4;
	printf("\nEnter a positive number: ");
	scanf("%d", &n4);
	printf("Factorial of n: %d", exercise4(n4));

	//Write 2 functions to calculate x^n, n and x are from
	//keyboard by the normal function and recursive function
	printf("\n\nExercise 5: ");
	int x5, n5;
	printf("\nEnter 2 positive integer numbers x and n: ");
	scanf("%d %d", &x5, &n5);
	
	printf("Normal: %d\n", exercise5a(x5, n5));
	printf("Recursive: %d", exercise5b(x5, n5));


	return 0;


}
 