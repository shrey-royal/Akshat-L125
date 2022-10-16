/*
printf is a functions that prints the output to the screen.
printf is a function that is defined in the stdio.h header file.
printf() takes 2 arguments, the first is the format string and the second is the variable to be printed.

syntax:
printf("format string", variable/argument_list);

example:
printf("Hello World");  // i gave only one argument, so the format string is "Hello World"
printf("Hello %s", "World"); // i gave two arguments, so the format string is "Hello %s" and the argument is "World"
printf("%d", 5)

we need to know 2 things about the format string:

1. what is the type of the argument ->

format specifiers -> 
int - %d, %i, 
float - %f, 
string - %s, 
char - %c, 
address(unsigned int) - %u
// long - %ld, %li
// long long - %lld, %lli
double - %lf
// unsigned int - %u
// unsigned long - %lu
// unsigned long long - %llu


2. where to print the argument ->

Escape sequence characters -> 
new line - \n, 
tab - \t, 
backspace - \b, 
single quote - \', 
double quote - \", 
slash - \\

// printf("format \"string\"");


scanf function () :- 

scanf is a function that takes input from the user.
scanf is a function that is defined in the stdio.h header file.
scanf() takes 2 arguments, the first is the format specifier and the second is the variable to be scanned.

syntax:
scanf("format specifier", variable/argument_list);

example:
scanf("%d", &a); // i gave two arguments, so the format specifier is "%d" and the argument is &a
scanf("%d %d", &a, &b); // i gave two arguments, so the format specifier is "%d %d" and the arguments are &a and &b

the data type of the variable should be same as the format specifier. so that scanf can scan the input and store it in the variable.

in order to store the scanned data into a variable, we need to use the address of operator (&) before the variable name.

*/
/*
#include <stdio.h>

int main()
{
    int a = 7;
    
    // printf("Hello World%s", ", this is my first program");
    // printf("\nAkshat %d", 5);
    // printf("Hello \"World\"!");
    // printf("\na = %d", a);

    printf("\nEnter the value of A : ");
    scanf("%d", &a);
    // scanf("format specifier", &variable);

    printf("\na = %d", a);  //a will reflect the value stored in a variable
    printf("\na = %u", &a);  //&a will reflect the address of the variable

    

    return 0;
}

*/


#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;

    printf("Enter any integer number : ");
    scanf("%d", &a);
    printf("Enter any float number : ");
    scanf("%f", &b);
    printf("Enter any character : ");
    scanf(" %c", &c);
    printf("Enter any double sized number : ");
    scanf("%lf", &d);

    printf("\na = %d", a);
    printf("\nb = %.4f", b);    //default value of precision is 6
    printf("\nc = %c", c);
    printf("\nd = %.4lf", d);   //default value of precision is 6
    
    return 0;
}