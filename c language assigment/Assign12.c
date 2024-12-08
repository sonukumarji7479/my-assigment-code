#include<stdio.h>
// 1.write a program to print MysirG N time on the screen.
int c1()
{
    int n;
    int i=1;
    printf("Enter your n number: \t");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("MysirG\n");
        i++;
    }
    return 0;
    
}

// 2.write a program to print the first N natural numbers.
int c2()
{
    int n;
    int i=1;
    printf("Enter your number:\t");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d\n",i);

        i++;
    }
    return 0;
    
}
// 3.write a program to print the first N natural number in reverse order
int c3()
{
    int n;
    printf("Enter your number:\t");
    scanf("%d",&n);
    while (n>=1)
    {
      printf("%d\n",n);
      n--;
    }
    return 0;
}
// 4.write a program to print the first N odd natural number
int c4()
{
    int n;
    int i=1;
    printf("Enter your N numaber:\t");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d\n",i);
        i=i+2;
    }
    return 0;
}
//5.write a prograam to print the first N odd natural numbers in revers order.
int c5()
{
    int i = 1;
    int n;
    printf("Enter your number:\t");
    scanf("%d",&n);
    while (n >= 1)
    {
        if (n % 2 == 1)
            printf("%d\n", n);
        n--;
    }
    return 0;
}

//6.write a program to print the first N enven numbers 

int c6()
{
    int n;
    printf("Enter your number:\t");
    scanf("%d",&n);
    while (i<=n)
    {
        if(i%2==0)
      printf("%d\n",i);
      i++;
    }
    return 0;
}
// 7.write a program to print the first N even natural number in reverse order.
int c7()
{
    int n;
    printf("Enter your number:\t");
    scanf("%d",&n);
    while (n >= 1)
    {
        if (n % 2 == 0)
            printf("%d\n", n);
        n--;
    }
    return 0;
}
//8.write a program to print square of the first N natural numbers
int c8()
{
    int n;
    int i=1;
    printf("Enter your N numbers:\t");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d",i*i);
        i++;
    }
    return 0;
}
// 9. write a program to print cubes of the first N natural numbers.
int c9()
{
    int n;
    int i=1;
    printf("Enter your N numbers:\t");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d\n",i*i*i);
        i++;
    }
    return 0;
}
// 10 write a program to print table of N.
int main()
{
    int i=1,n;
    printf("Enter your table:\n");
    scanf("%d",&n);
    while(i<= 10)
    {
        printf("%d*%d =%d",n,i,i*n);
        i++;
    }
    return 0;
}