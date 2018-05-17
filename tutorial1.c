#include <stdio.h>

int main(){
    int x;
    double y;
    char s[1000];

    printf("Ex2: Hello World!\n");
    
    printf("Enter an integer: \n"); 
    scanf("%d" ,&x);
    printf("%d\n", x);

    printf("Enter a float: \n"); 
    scanf("%lf", &y);
    printf("%f\n", y);

    printf("Enter a string: "); 
    scanf("%s", &s);
    printf("%s\n", s);

    printf("\n");
    printf("Some special charatcter: \n");
    printf("\\n \\r \\b \\f \\t \\v \\a \\? \\* \\' \\ ");
    printf("\n");

    printf("\"This's our C programing course\"\n");
    printf("\"Welcome to the first tutorial class\"");

    return 0;
}