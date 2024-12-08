#include <stdio.h>
int p1()
{
    // write a program to check whether a given number is positive ,nagative or zero.
    int x;
    printf("Enter your number :\n");
    scanf("%d", &x);
    if (x > 0)
    {
        printf("%d : is Positive", x);
    }
    else if (x < 0)
    {
        printf("%d:  is Nagative", x);
    }
    else
    {
        printf("%d: is zero", x);
    }
    return 0;
}
/*write a program to check whether a given character is an alphabet
(upercase) and alphabet (lower case) or a special character.*/
int p2()
{
    char c;

    printf("Enter your character:\n");
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z')
    {
        printf("[%c] is a Alphabet(lower case)", c);
    }
    else if (c >= 'A' && c <= 'Z')
    {
        printf("[%c] is a Alphabet(uper case)", c);
    }
    else if (c >= '0' && c <= '9')
    {
        printf("[%c] is a decimal numbers", c);
    }

    else
    {
        printf("[%c] is a special character", c);
    }
    return 0;
}
/* 4.write a program to which takes the lenth of the side of a trengal
as an input display whether the trigle is valid of not*/
int p3()
{
    int a, b, c;
    printf("Enter lenth of the size\n");
    printf("Lenth of AB:\t");
    scanf("%d", &a);
    printf("Lenth of BC:\t");
    scanf("%d", &b);
    printf("Lenth of AC:\t");
    scanf("%d", &c);
    if (a == b && b == c && a == c)
    {
        printf("Equal [%d]=[%d]=[%d] Trengle is valid", a, b, c);
    }

    else
    {
        printf("Not Equal [%d]=[%d]=[%d] not valid", a, b, c);
    }
    return 0;
}


/*Write a program which takes the month number as an input and display number of 
days in that moth*/
int main()
{
    int n,m;
    printf("Enter your moths Numbers\n");
    scanf("%d",&n);
    
    if(n==1){
        m=n;
        printf("january 31 days ");
    }
    else if(n==2)
    {
        m=n;
        printf("Fabruary 29 days ");
    }
    else if(n==3)
    {
        m=n;
        printf("March 31 days");
    }
    else if(n==4)
    {
        m=n;
        printf("Aprile 30 days");
    }
    else if(n==5){
    m=n;
    printf("May 31 days");
    }
    else if(n==6){
        m=n;
        printf("June 30 days");
    }
    else if(n==7){
        m=n;
        printf("July 31 days");
    }
    else if(n==8){
        m=n;
        printf("August 31 days");
    }
    else if(n==9){
        m=n;
        printf("September 30 days");
    }
    else if(n==10){
        m=n;
        printf("October 31 days");
    }
    else if(n==11){
        m=n;
        printf("November 30 days");
    }
    else if(n==12){
        m=n;
        printf("December 31 days");
    }
    return 0;
    }