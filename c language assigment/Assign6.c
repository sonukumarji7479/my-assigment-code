#include <stdio.h>
int a1()
{
    // 1. Assume price  of USD is INR 84.23 write a program to take the amount in USD and convert into INR.
    float USD, NRC;
    printf("1 USD dollor = 84.23 Indian rupees \n ");
    printf(" Enter USD dollor: \t");
    scanf("%f", &USD);
    NRC = 84.23 * USD;
    printf("\n");
    printf("%0.2f :Indian rupees\t", NRC);
    return 0;
}
// 2 Assume price  of USD is INR 84.23 write a program to take the amount in INR  and convert into USD.
int a2()
{
    float INR, USD;
    printf("ENTER INDAIN RUPIES: ");
    scanf("%f", &INR);
    USD = INR / 84.23;
    printf(" %0.2f = USD DOLLOR ", USD);
    return 0;
}
/* 3.write a program to take a three digit number from the user.
 and rotat its digit by one position towards the right */
int a3()
{
    int x, a, b, c, d;
    printf("Enter three digits:");
    scanf("%d", &x);
    a = x % 10;                // without first last digit 962 a=[2]
    b = x / 10;                // withotut last digit 962  b=[96]
    c = b % 10;                // 96%10  c=[6]
    d = b / 10;                // 96/10  d=[9]
    printf("%d%d%d", a, c, d); // print a[2] c[6] d[9] output: [269]
    return 0;
}

// 4. SECOND METHOD;
int a4()
{
    int a, w, x, y; // 256 = 625
    printf("Enter your value\n");
    scanf("%d", &a);
    w = a % 10;
    x = a / 10;
    printf("%d%d", w, x);

    return 0;
}

/* 5. what will be the value stored in the variable x after executing following
statment x=10>8>4; */
int a5()
{
    int x = 10 > 8 > 4;
    printf("value : %d", x);
    return 0;
}
/* 6. what will be the value stored in the variable x after executing following
statment x=!12>-2; */
int a6()
{
    int x = !12 > -2;
    printf("value is : %d", x);
    return 0;
}
/* 7. what will be the value stored in the variable x after executing following
statment x=3<0&&5>0; */
int a7()
{
    int x = 3 < 0 && 5 > 0;
    printf("value is a : %d", x);
    return 0;
}
