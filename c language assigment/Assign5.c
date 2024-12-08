#include <stdio.h>
    // 1.write a program to input a three digit number and display the sum of digit
int main()
{
    int a,w,x,y,z,sum;
    printf("enter digit : "); // enter digit
    scanf("%d",&a); // 123
    w=a%10; // w=123%10  - w[3]
    x=a/10; // x=123/10  - x[12]
    y=x%10; // y=12%10   -  y[2]
    z=x/10;// z=12/10    - z[1]
    sum=w+y+z;  //sum=w[3]+y[2]+z[1]
    printf("sum of : %d",sum); // sum of : 6
    return 0;
}
// 2. write  a program to find ASCII code of the character'+',
int S2()
{
    printf(" ASCII CODE [+] IS : %d",'+');
    return 0;
}

/* 3 .write a program to print size of an int a, float a char and a double type variable */
int s3()
{

    printf("size of intiger   : %d bytes\n", sizeof(int));
    printf("sizo of character : %d bytes\n", sizeof(char));
    printf("size of float     : %d bytes\n", sizeof(float));
    printf("sizo of double    : %d bytes\n", sizeof(double));
    return 0;
}
/* 4. write a program to make the last digit of a number stored in variable as zero
example-if x=2345 the make it x=2340*/
int s4()
{

    int x = 2345;
    int y = 2345;
    printf("Enter your number\n");
    scanf("%d", &x);
    x = x / 10;
    y = y % 10>5;
    printf("%d%d",x,y);
    return 0;
}

/* 5. write a program to input a number from the user and also input a digit Append a
digit in the number and print the resulting number (example-number =234 and digit =9
 then the rerulting number is 2349)*/
 // first method
int s5()
{
    int a = 234, b = 9;
    printf("Enter your digit: ");
    scanf("%d%d", &a, &b);
    a = a;
    b = b;
    printf("OUTPUT IS: %d%d", a, b);
    return 0;
}

// 5 second method

int s6()
{
    int a = 234, b = 9;
    printf("Enter your digit: ");
    scanf("%d%d", &a, &b);
    printf("OUTPUT IS: %d%d", a*10+b);
    return 0;
}