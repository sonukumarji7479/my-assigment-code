#include <stdio.h>
int main()
// 1. write a program to print a character from the user and print its ASCII code.
{
    char character;
    printf("Enter character : \t");
    scanf("%c", &character);
    printf("CHARACTER  : %c\n", character);
    printf("ASCII CODE :%d\t", character);
    return 0;
}

int W2()
// 2.write a program to input an ASCII code from the user and print  its corresponding
{
    char character;
    printf("Enter your ASCII CODE\t");
    scanf("%d", &character);
    printf("ASCII CODE : %c\n", character);
    printf("CHARACTER : %d\t", character);

    return 0;
}

int w3()
// 3(a). write a program to input three characters from user and display characters with their corresponding ASCCI codes.
{
    char a, b, c;
    printf("enter three character input :");
    scanf("%c %c %c", &a, &b, &c);
    printf("%c=%d\n%c=%d\n%c=%d\n", a, a, b, b, c, c);
    return 0;
}
// 3(b). write a program to input three characters from user and display characters with their corresponding ASCCI codes.
int w4()
{
    char a;
    char b;
    char c;
    printf("Enter your first character :\t");
    scanf("%c", &a);
    printf("character is %c\n", a);
    printf("ASCII CODE :%d\n", a);

    printf("Enter your second chacter :\n");
    scanf(" %c", &b);
    printf("character is: %c\n",b);
    printf("ASCII CODE  : %d\n",b);

    printf("Enter your third charcter\t ");
    scanf(" %c", &c);
    printf("character is %c\n", c);
    printf("ASCII CODE :%d\t", c);

    return 0;
}
// 4 write a program to print last digit of a given number
int w5()
{
    int a, c;
    printf("enter digit \n");
    scanf("%d", &a);
    c = a % 10;
    printf("last digit : %d", c);
    return 0;
}

//5.write a program to print a given number without its last digit
int w6()
{
int a,c;
printf("Enter Digit\n");
scanf("%d",&a);
c=a/10;
printf("Last Digit :%d",c);
return 0;
}
