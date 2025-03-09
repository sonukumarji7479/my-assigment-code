#include <stdio.h>
/*write a program to find and display grad ontained by a student a lest
grading specification as follows:
- marks from 90 to 100: Grad A
- Marks from 80 to less than 90: grade B
- Marks from 70 to less than 80 grade C
- Marks from 60 to less than 70: grade D
- Marks from 50 to less than 60 grade E
Marks bleow 50: Grade Fail*/
int m1()
{
    int x;
    printf("Enter a number:\t");
    scanf("%d", &x);
    switch (x)
    {
    case 90 ... 100:
        printf("Grade A");
        break;

    case 80 ... 89:
        printf("Grade B");
        break;

    case 70 ... 79:
        printf("Grade C");
        break;

    case 60 ... 69:
        printf("Grade D");
        break;

    case 50 ... 59:
        printf("Grade E");
        break;

    case 0 ... 49:
        printf("Fail");
        break;

    default:
        printf("Invailid");
        break;
    }
    return 0;
}

/*2.write a menu driven program with the following option
1. factorial of a number
2. check Even and odd
3. Area of circle
4. Sum of first Natural number
5. Exit*/
int main()
{
    int choise = 1, n, i, f;
    float a = 3.14, p, area;
    while (choise != 5)
    {
        printf("\n");
        printf("\n1.factorial of a number ");
        printf("\n2.check Even and odd");
        printf("\n3.Area of circle");
        printf("\n4.Sum of first Natural number");
        printf("\n5.Exit");
        printf("\n");
        printf("choise your number:\t");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            printf("Enter a Number:\t");
            scanf("%d", &n);
            for (i = 1, f = 1; i <= n; i++)
            {
                f = f * i;
            }
            printf("\n");
            printf(" factorial is:%d", f);
            break;

        case 2:
            printf("Enter a number:\t");
            scanf("%d", &n);
            if (n % 2 == 0)
                printf("%d Even number:", n);
            else
                printf("%d Odd number:", n);
            break;

        case 3:
            printf("Enter your radius\t");
            scanf("%f", &p);
            area = a * p * p;
            printf("%0.2f", area);
            break;

        case 4:
            printf("Enter your Number:\t");
            scanf("%d", &n);
            for (i = 1, f = 0; i <= n; i++)
            {
                f = f + i;
            }
            printf("sum is:%d", f);
            break;

        case 5:
            break;
        default:
            printf("invaild number\n");
            break;
        }
    }
    return 0;
}

/*3.write a program to check whether a given character is uppercase
alphabet or some other special character using switch case statement */
int main()
{
    char c;
    printf("Type any character:\t");
    scanf("%c", &c);

    switch (c)
    {
    case 'A' ... 'Z':
        printf("Upercase");
        break;

    case 'a' ... 'z':
        printf("lowercase");
        break;

    case '0' ... '9':
        printf("Digit");
        break;

    default:
        printf("special character");
        break;
    }
    return 0;
}

/*4.write a program to check whether a given character is vowel or consonant or some
other special character using switch case statement*/
/*4.write a program to check whether a given character is vowel or consonant or some
other special character using switch case statement*/
int main()
{
    char c;
    printf("Type any character:\t");
    scanf("%c", &c);
    switch (c)
    {
    case 'b' ... 'd':
        printf("consonant");
        break;

    case 'f' ... 'h':
        printf("consonant");
        break;

    case 'j' ... 'n':
        printf("consonant");
        break;

    case 'p' ... 't':
        printf("consonant");
        break;

    case 'v' ... 'z':
        printf("consonant");
        break;

    case 'a':
        printf("vawel");
        break;

    case 'e':
        printf("vawel");
        break;

    case 'i':
        printf("vawel");
        break;

    case 'o':
        printf("vawel");
        break;

    case 'u':
        printf("vawel");
        break;

    default:
        printf("special character:");
        break;
    }
    return 0;
}
/*5.write a menu diriven program with the folloing option
1.calculate sum of two number:
2.calculate sum the digit of a number
3.volme of a cuboid
4.check whether a given number is prime or not
5.exit*/

int main()
{
    int choise;
    int p,b,lcm;
    int a,w,x,y,z,sum;
    int l,bb,h,volume;
    int i=2,n;
    while (choise!=5)
    {
    printf("\n1.calculate LCM of two number:");
    printf("\n2.calculate sum the digit of a number");
    printf("\n3.volme of a cuboid");
    printf("\n4.check whether a given number is prime or not");
    printf("\n5.Exit");
    printf("\n");
    printf("choise your Number:\t");
    scanf("%d",&choise);
    switch (choise)
    {
    case 1:
        printf("Enter first number:\t");
        scanf("%d",&p);
        printf("Enter second number:\t");
        scanf("%d",&b);
        for(lcm=p>b?p:b;lcm<=p*b;lcm++)
        if(lcm%p==0&&lcm%b==0)
        {
              printf("LCM:%d",lcm);
              break;
        }
        break;

        case 2:
       
        printf("enter digit : "); // enter digit
        scanf("%d",&a); // 123
        w=a%10; // w=123%10  - w[3]
        x=a/10; // x=123/10  - x[12]
        y=x%10; // y=12%10   -  y[2]
        z=x/10;// z=12/10    - z[1]
        sum=w+y+z;  //sum=w[3]+y[2]+z[1]
        printf("sum of : %d",sum); // sum of : 6
        break;
        
        case 3:
        printf("Enter your lenth:\t");
        scanf("%d",&l);
        printf("Enter your breath:\t");
        scanf("%d",&bb);
        printf("Enter your hight:\t");
        scanf("%d",&h);
        volume=l*bb*h;
        printf("volume of cuboid = %d",volume);
        break;
        
        case 4:
        printf("Enter a number:\t");
        scanf("%d",&n);
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            break;
        }
        if(i==n)
        printf("prime number:");
        else
        printf("Not prime number:");
        break;
        
        case 5:
        break;
    
    default:
    printf("your number is invailid:");
        break;
    }
}
return 0;
}
