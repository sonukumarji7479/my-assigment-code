#include <stdio.h>
// 1.write a program to check wheather a given number is positive or non positive
int p1()
{
    int a;
    printf("Enter your Number:");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("Positive");
    }
    else if (a < 0)
    {
        printf("Non positive");
    }
    return 0;
}
// 2. write a program to check whether a given number is divisible by 5 or not
int p2()
{
    int x;
    printf("Enter your number:\t");
    scanf("%d", &x);
    if (x % 5 == 0)
    {
        printf("Yes Divisible");
    }
    else
    {
        printf("Not Divisible");
    }
    return 0;
}
// 3. write a program to check whether a given number is an even number or an odd number.
int p3()
{
    int x;
    printf("Enter Numbers : ");
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
    return 0;
}
/*4. write a program to check wheather a give number is an enven .
or odd number without using % operator*/
int p4()
{
    int x;
    printf("Enter your number: ");
    scanf("%d", &x);
    if (x / 2 * (2) - x == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd Number");
    }
    return 0;
}
/*5.write a program to chek whether the given number is even or odd using
a bitwise operator.*/
int main()
{
    int x;
    printf("Enter your number: ");
    scanf("%d", &x);
    if(x&1)
    {
        printf("ood number");
    }
    else
    {
        printf("even Number");
    }
    return 0;
}
