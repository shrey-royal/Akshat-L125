//operators in C

/*
operators are used to perform operations on operands

operands are the values on which operators operate
operations are performed on operands and the result is stored in a variable

8 types of operators in C
1. Arithmetic operators -> +, -, *, /(quotient), %(remainder)
2. Relational/Conditional operators -> ==(compare to), !=, >, <, >=, <=
3. Assignment operators -> =, +=, -=, *=, /=, %=
4. Logical operators -> &&, ||, !
5. Increment/Decrement operators -> ++, --
6. Bitwise operators -> &, |, ^, ~, <<, >>
7. Ternary operators -> ?:
8. sizeof operator -> sizeof()

*/

#include<stdio.h>

int main(){
    int a, b;

    //Arithmetic operators
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    // int c = a + b;
    // printf("\n%d + %d = %d", a, b, a+b);
    // printf("\n%d - %d = %d", a, b, a-b);
    // printf("\n%d %% %d = %d", a, b, a%b);
    //remaining operators are in homework

    /*
    //Relational operators -> boolean type
    // == -> compare to (equal to) -> returns 1 if true, 0 if false
    printf("\n%d == %d => %d", a, b, a==b);
    // != -> not equal to -> returns 1 if true, 0 if false
    printf("\n%d != %d => %d", a, b, a!=b);
    // > -> greater than -> returns 1 if true, 0 if false
    printf("\n%d > %d => %d", a, b, a>b);
    // < -> less than -> returns 1 if true, 0 if false
    printf("\n%d < %d => %d", a, b, a<b);
    // >= -> greater than or equal to -> returns 1 if true, 0 if false
    printf("\n%d >= %d => %d", a, b, a>=b);
    // <= -> less than or equal to -> returns 1 if true, 0 if false
    printf("\n%d <= %d => %d", a, b, a<=b);
    */

   //Assignment operators
    // = -> assignment operator
    // a = b -> a = b
    // += -> a = a + b -> a += b
    // -= -> a = a - b
    // *= -> a = a * b
    // /= -> a = a / b
    // %= -> a = a % b

    // printf("\n%d <-- %d += %d", a+=b, b, a);
    // printf("\n%d <-- %d -= %d", a-=b, b, a);
    //printf statement executes from right to left

    //Logical operators
    // && -> logical AND -> returns 1 if both operands are true, 0 if either operand is false

    // cond_1  cond_2  cond_1 && cond_2
    // 0       0       0
    // 0       1       0
    // 1       0       0
    // 1       1       1

    printf("\n%d && %d => %d", a<=b, a>=b, a<=b&&a>=b);



    // || -> logical OR -> returns 1 if either operand is true, 0 if both operands are false

    // cond_1  cond_2  cond_1 || cond_2
    // 0       0       0
    // 0       1       1
    // 1       0       1
    // 1       1       1  

    printf("\n%d || %d => %d", a<b, a>b, a<b||a>b);


    // ! -> logical NOT -> returns 1 if operand is false, 0 if operand is true

    // cond_1  !cond_1
    // 0       1
    // 1       0

    printf("\n!%d => %d", a<b, !(a<b));

    //Ternary operator
    // ?:
    // cond ? true : false
    //if condition is true, then true value is returned or else false value is returned

    // (3>2)?printf("\n3>2 (True)"):printf("\n3<2 (False)");
    int c = a>b ? a : b;
    printf("\nBigger number from %d and %d is %d", a, b, c);
}