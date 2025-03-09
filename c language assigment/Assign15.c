#include <stdio.h>
// 1...write a program to print all prime numbers under 100
int main()
{
    int i = 2, p;
    printf("Enter a number:\t");
    scanf("%d", &p);
    for (i = 2; i <= p; i++)
        if (i % 2 == 1)
        {
            printf(" %d", i);
        }
    return 0;
}
// 2.write a program to print all prime numbers between  two given number
int main()
{
    int x, y;
    printf("Enter first number:\t");
    scanf("%d", &x);
    printf("Enter second number:\t");
    scanf("%d", &y);
    for (x; x <= y; x++)
        if (x % 2 == 1)
        {
            printf(" %d", x);
        }
    return 0;
}
// 3.write a program to find the next prime number .
int main()
{
    int x;
    printf("Enter a number:\t");
    scanf("%d", &x);
    x++;
    while (1)
    {
        for (i = 2; i < x; i++)
            if (x % i == 0)
                break;
        if (i == n)
            break;
        x++;
        printf("%d", x);
    }
    return 0;
}
