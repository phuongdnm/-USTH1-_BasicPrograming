#include <stdio.h>
#include <math.h>

int main(void){
	//Exercise 1: print all divisors of n
	printf("Exercise 1: ");
	int n1, i1;
	printf("Enter a natural number n > 1: "); scanf("%d", &n1);
	printf("All n divisors are: ");
	for (i1 = 1; i1 <= n1 ; ++i1){
		if (n1 % i1 == 0) {
			printf("%d ", i1);
		}
	}

	//Exercise 2: print all prime numbers between 1 and n
	printf("\nExercise 2: ");
	int n2, i2 = 2, j, count;
	printf("Enter a natural number n > 1: "); scanf("%d", &n2);
	printf("All prime numbers between 1 and n: ");
	while ( i2 <= n2){
		count = 0;
		for ( j = 1; j <= i2; ++j){
			if ( i2 % j == 0)
				count += 1;
		}
		if (count == 2)
			printf("%d ", i2);
		i2+= 1;
	}

	//Excercise 3: calculate 1 + 1/2 + 1/3 +...+ 1/n
	printf("\nExcercise 3: ");
	int n3, i3;
	double sum3 = 0.000;
	printf("Enter a natual number n > 1: "); scanf("%d", &n3);
	for ( i3 = 1; i3 <= n3; ++i3){
		sum3 += 1.000/i3;
	}
	printf("Sum: %.3lf", sum3);

	//Exercise 5: calculate sum of digits of a number
	printf("\nExcercise 4 is totally same with ex2");
	printf("\nExcercise 5: ");
	int n5, sum5, digit;
	printf("Enter positive number n > 1: "); scanf("%d", &n5);
	sum5 = 0;
	while ( n5 > 0){
		digit = n5 % 10;
		sum5 += digit;
		n5 /= 10;
	}
	printf("The sum of its digits is: %d", sum5);

	//Exercise 6: print fibonacci numbers between 1 and n
	printf("\nExercise 6: ");
	int n6, f1 = 0, f2 = 1;
	printf("Enter a natural number n > 1: "); scanf("%d", &n6);
	while (f2 <= n6){
		printf("%d ", f2);
		int next = f1 + f2;
		f1 = f2;
		f2 = next;
	}

	//Exercise 7: calculat n! = 1*2*3*...*n
	printf("\nExercise 7: ");
	int n7, i7, factorial;
	printf("Enter a natural number n > 1: "); scanf("%d", &n7);
	factorial = 1;
	for (i7 = 1; i7 <= n7; ++i7){
		factorial *= i7;
	}
	printf("factorial of n is: %d", factorial);



	return 0;
}