#include <stdio.h>
int p1()
{
    // 1.write a program to calculate size of character constaint
    char y = 4;
    printf("size of character is : %lu\n", sizeof(y));

    return 0;
}
// 2.write a program to calculate size of real constent.
int p2()
{

    double x = 2.523;
    printf("size of real constent:%lu\n", sizeof(x));
    return 0;
}

/*3.write a program with one char type variable .
.assing 'A' in the now the variable now change the
value of variable from 'A' to ,B, using increment operator */

int p3()
{
    char x = 'A';
    printf("Enter your value:\n");
    scanf("%c", &x);
    x++;
    printf("value is:%c\n", x);
    return 0;
}

// 4.WRITE A PROGRAM TO SWAP VALUES OF TWO INT VARIABLES,
int p4()
{
    int a, b, c;
    printf("Enter a :\t");
    scanf("%d", &a);
    printf("Enter b :\t");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("a: = %d\nb: = %d\t", a, b, c);
    return 0;
}
// 5.write a program to swap of two int variable without using a third variabke
int p5()
{
    int a, b;
    printf("Enter a :\t");
    scanf("%d", &a);
    printf("Enter b :\t");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a: = %d\nb: = %d\t", a, b);
    return 0;
}
/*6.write a program to swap value of two int variable  .
without third variable and without using +,- operators.*/
// Method 1:

int p6()
{
    int a, b;
    printf("enter your vlaue\n");
    scanf("%d%d", &a, &b);
    printf("a=%d\nb=%d", b, a);
    return 0;
}
/*6 write a program to swap value of two int variable  .
without third variable and without using +,- operators.*/
// method 2:
int p7()
{
    int a, b;
    printf("Enter a:\t");
    scanf("%d", &a);
    printf("Enter b:\t");
    scanf("%d", &b);
    a = a * b;
    b = a / b;
    a = a / b;
    printf("a=%d\nb=%d", a, b);
    return 0;
}
/* 7.write a program to swap values of two int variable .
without using third variable and arithmatic  operators*/
int p8()
{
    int a, b;
    printf("Enter a:\t");
    scanf("%d", &a);
    printf("Enter b:\t");
    scanf("%d", &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("a=%d\nb=%d", a, b);
    return 0;
}

/*write a program to swap values of two int variable in single arrthmetic expression*/
int main()
{
    int a, b;
    printf("Enter swaping value\n");
    scanf("%d%d", &a, &b);
    a = a + b, b = a - b, a = a - b;
    //or a=a+b-(b=a);
    printf("a=%d\nb=%d", a, b);
    return 0;
}

