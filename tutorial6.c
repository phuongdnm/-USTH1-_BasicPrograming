#include <stdio.h>
#include <string.h>

int main(void){

	//Exercise 1 : Write a C program to find the minimum and
	//maximum number in a given series of n numbers stored in a 
	//static array
	printf("\nExercise 1: ");
	int a1[100],n1;
	int i;
	printf("\nEnter a positive integer n: ");
	scanf("%d", &n1);

	printf("Enter %d numbers: \n", n1);
	for ( i = 0; i < n1; ++i){
		printf("Enter number %d :", i);
		scanf("%d", &a1[i]);
	}

	int max1 = a1[0], min1 = a1[0];
	for ( i = 0; i < n1; ++i){
		if (a1[i] < min1)
			min1 = a1[i];
		if (a1[i] > max1)
			max1 = a1[i];
	}

	printf("Min = %d\n", min1);
	printf("Max = %d\n", max1);

	//Exercise 2: Write a C program to enter a positive integer number
	//n and calculate the sum of even and odd numbers from 1 to n
	printf("\nExercise 2: ");
	int n2, s_odd = 0, s_even = 0, i2;
	printf("\nEnter a positive number n: ");
	scanf("%d", &n2);

	for ( i2 = 1; i2 <=n2 ; ++i2){
		if ( i2 % 2 == 0)
			s_even += i2;
		else 
			s_odd += i2;
	}

	printf("Sum of odd numbers: %d\n", s_odd);
	printf("Sum of even numbers: %d\n", s_even);


	//Exercise 3: Write a C program to sort an array of n elements in 
	//an increasing order ( n is constant) by 3 methods: 
	// bubble sort, insertion sort, selection sort
	printf("\nExercise 3: ");
	int n3, i3, j3;
	int a3[100];
	printf("\nEnter a positive number: ");
	scanf("%d", &n3);

	printf("\nEnter %d numbers: \n", n3);
	for ( i3 = 0; i3 < n3; ++i3){
		printf("Enter item[%d]: ", i3);
		scanf("%d", &a3[i3]);
	}

	printf("\nBubble sort: \n");
	int temp;
	for (i3 = 0; i3 < n3; ++i3){
		for (j3 = 0; j3 < n3 - i3 - 1; ++j3){
			if (a3[j3] > a3[j3 + 1]){
				temp = a3[j3];
				a3[j3] = a3[j3 + 1];
				a3[j3 + 1] = temp;
			}
		}
	}

	for ( i3 = 0; i3 < n3; ++i3){
		printf("%d ", a3[i3]);
	}



	//Exercise 5: Enter a string from the keyboard, let's print
	//the string in reverse
	printf("\n\nExercise 5: ");
	char s5[100], i5 = 0;
	printf("\nEnter a STRING (not a SENTENCE): ");
	scanf("%s", s5);
	
	printf("Your string in reverse: ");
	for (i5 = strlen(s5); i5 >= 0; i5--){
		putchar(s5[i5]);
	}


	//Exercise 6: Enter a string from keyboard, let's print out the 
	//number of the character 'a' in the string and their orders int the string
	printf("\n\nExercise 6: ");
	char s6[100], i6 = 0;
	printf("\nEnter a STRING (not a SENTENCE): ");
	scanf("%s", s6);

	int count6 = 0;
	for (i6 = 0; i6 < strlen(s6); ++i6){
		if (s6[i6] == 'a')
			count6 += 1;
	}
	printf("\nNumber of 'a' in string: %d", count6);
	printf("\nIts (their) order(s): ");
	for (i6 = 0; i6 < strlen(s6); ++i6){
		if (s6[i6] == 'a')
			printf("%d ", i6);
	}


	//Exercise 7: Enter a string and a character x form the keyboard
	//and delete all the characters x in the string
	printf("\n\nExercise 7: ");
	char s7[100], character[10];


	printf("\nEnter a STRING: ");
	scanf("%s", s7);

	printf("\nEnter a character: ");
	scanf("%s", character);

	for(int i7 = 0; i7 < strlen(s7); i7++){
		if (s7[i7] == character[0]){
			for(int j7 = i7; j7 < strlen(s7); j7++){
				s7[j7] = s7[j7 + 1];
			}
			i7 -= 1;
		}
	}
	printf("Your string now is : %s", s7);

	return 0;
}