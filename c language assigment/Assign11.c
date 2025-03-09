#include <stdio.h>
int a1()
{
    // 1. write a program to print mysirG 5 time on the screen.
    int a = 1;
    while (a <= 5)
    {
        printf("MysirG\n");
        a++;
    }
    return 0;
}
// 2.write a program to print the first 10 natural numbers.
int a2()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
// 3.write a program to print the first 10 natural numbers is reverse order.
int a3()
{
    int i = 10;
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
    return 0;
}
// 4. write a program to print the first 10 odd natural numbers.
int a4()
{
    int i = 1;
    while (i <= 10)
    {
        if (i % 2 == 1)
            printf("%d\n", i);
        i++;
    }
    return 0;
}
// 5.write a program to print the first 10 odd natural numbers in reverse oder.
int a5()
{
    int i = 10;
    while (i <= 10)
    {
        if (i % 2 == 1)
            printf("%d\n", i);
        i--;
    }
    return 0;
}
// 6.write a program to print the first even natural numbers.
int a6()
{
    int i = 1;
    while (i <= 10)
    {
        if (i % 2 == 0)
            printf("%d\n", i);
        i++;
    }
    return 0;
}

// 7.write a program to print the first 10 enven natural numbers in reverse order.
int a7()
{
    int i = 20;
    while (i <= 10)
    {
        if (i % 2 == 0 && i >= 0)
            printf("%d\n", i);
        i--;
    }
    return 0;
}
// 7.write a program to print the first 10 enven natural numbers in reverse order.
int a8()
{
    int i = 10;
    while (i >= 1)
    {
        printf("%d\n", 2 * i);
        i--;
    }
    return 0;
}
// 8.write a progrma to print squar of the first 10 natural numbers is revers order
int a9()
{
    int i = 10;
    while (i >= 1)

    {
        printf("%d\n", i * i);
        i--;
    }
    return 0;
}
// 9.write a program to print cube of the first 10 natural numbers
int a10()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d\n", i * i * i);
        i++;
    }
    return 0;
}
// 10. write a program to print a table of 5
int main()
{
    int i = 1;
    int n = 5;
    while (n <= 1)
    {
        printf("%d\n", 5 * i);
        i++;
    }
    return 0;
}
/*11.write a program to check ask user to enter an even number
computer will give user three change if user failed to asnswer
in all of the change "gave over" message should be displayed an the 
screen otherwise "you win " message should be display and game stop
immediately*/
int main() {
    int x,k=1;
    while(k<=3)
    {
    printf("Enter Even Number:");
    scanf("%d",&x);
    if(x%2==0) //condition is true 
    break; // break chalega 
    k++;
    }
    
    if(k==4) // loop pura chala hai
      printf("game over");
      else
          printf("you win");
    return 0;
}