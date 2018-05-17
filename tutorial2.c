#include <stdio.h>
#include <math.h>
#define pi 3.14

int main(void){
    double r;
    int x;
    int a2 = 1, b2 = 2, c2 = 1;
    double a3, b3, c3, r3;
    double celcius, fahrenheigh;
    int u,v; 

    printf("Exercise 1:\n");
    printf("radius = "); scanf("%lf", &r);
    printf("The area is %.2f\n", pi * r * r);
    printf("The circumference is %.2f\n\n", 2 * pi * r);

    printf("Exercise 2:\n");
    printf("Enter the value x: "); scanf("%d", &x);
    printf("The value of ax^2 + b*x + c: %d \n\n", a2 * x * x + b2*x + c2);

    printf("Exercise 3:\n");
    printf("Enter 3 number a, b, c: ");
    scanf("%lf,%lf,%lf", &a3, &b3, &c3);
    r3 = 3*a3 - b3*b3*b3 - 2*sqrt(c3);
    printf("The result is: %.3lf\n\n", r3);

    printf("Exercise 4: \n");
    printf("Celcius: \n"); scanf("%lf", &celcius);
    fahrenheigh = 5.00 / 9.00 * (celcius - 32.00);
    printf("That celcius is %.2f in fahrenheigh\n\n", fahrenheigh);

    printf("Exercise 5: \n");
    printf("Enter 2 integers u and v:\n");
    scanf("%d,%d", &u, &v);
    u -= v;
    v +=u;
    u = v - u;
    printf("2 numbers after swapping is:\n %d %d", u, v);

    return 0;
}