#include <stdio.h>
int m1()
{
    // 1.write a program to  calculate factorial of a numbers.
    int n, i, f = 1;
    printf("Enter a numbers:\t");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        f = f * i;
    printf(" Number - %d is:  factorial:  %d ", n, f);
    return 0;
}
//2. write a program to count digit in a given numbers
int main()
{
    int n,count;
    printf("Enter a Digit:\t");
    scanf("%d",&n);
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    printf("%d",count);
    return 0;
}
//3.write a program to check whether a given number is a prime number or not
int main()
{
    int n,i;
    printf("Enter your number:\t");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    if(n%i==0)
    {
      break;
    }
    if(n==i)
    printf(":prinme number");
    else
    printf("not prime number");
    return 0;
}

//4.write a program to calculate LCM of two numbers

int main() {
        int a,b,lcm;
    printf("Enter first numbers:\t");
    scanf("%d",&a);
    printf("Enter second number:\t");
    scanf("%d",&b);
    for(lcm=a>b?a:b;lcm<=a*b;lcm++)
    if(lcm%a==0&&lcm%b==0)
    {
        printf("LCM IS %d:",lcm);
        break;
    }
    return 0;
}
//.5 write a program to reverse a given number.


