#include <stdio.h>
//write a program to print sum of two numbers
int main()
{
    int num1,num2,sum;
    printf("enter your value\n");
    printf("enter your first value\t");
    scanf("%d",&num1);
    printf("enter your second value\t");
    scanf("%d",&num2);
    sum=num1*num2;
    printf("%d=%d*%d",num1,num2,sum);
    return 0;

}
// write a problem to calculate curcumference of a circle
int f18()
{
    int r;
    float a = 3.14;
    printf("Enter your value\t");
    scanf("%d",&r);
    a = 3.14 * 2 * r;
    printf("circal of curcuference is %f", a);
    return 0;
}
// Assingment 2
// 1.write a program to calculate of three numbers are given by the user
int f17()
{
    int num1, num2, num3, Average;
    printf("Enter your first three values\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    Average = (num1 + num2 + num3) / 3;
    printf("Aerage is  %d", Average);
    return 0;
}
// solved the problem (a + b)3 = a3 + 3a²b + 3ab² + b3
// solved the  problem (a - b)3 = a3 - 3a2b + 3ab2 - b3
int f16()
{
    float num1, num2, calculate, solved;
    printf("(1) .Enter your first value   \t");
    scanf("%f", &num1);
    printf("(2).Enter your second value  \t");
    scanf("%f", &num2);
    printf("\n");
    calculate = num1 * 3 * num1 * num1 * num2 + 3 * num1 * num2 * num2 + num2 * 3;
    solved = num1 * 3 - 3 * num1 * num1 * num2 + 3 * num1 * num2 * num2 - num2 * 3;
    printf("1. (a + b)3   = [%f]", calculate);
    printf("\n");
    printf("\n");
    printf("2. (a - b)3   = [%f]", solved);
    return 0;
}
// solved the problem a²+b²=(a+b)²-2ab
//  solved the problem a²-b²=(a+b)(a-b)

int f15()
{
    float num1, num2, calculate, calculate1;
    printf("Enter your first vlaue     \t");
    scanf("%f", &num1);
    printf("Enter your second numbers  \t");
    scanf("%f", &num2);
    printf("\n");
    calculate = (num1 + num2) * (num1 + num2) - 2 * (num1 * num2);
    calculate1 = (num1 + num2) * (num1 - num2);
    printf(" a²+b²=%f", calculate);
    printf("\n");
    printf("\n");
    printf("a²-b²=%f", calculate1);
    return 0;
}
int f14()
// solved the problem (a+b)² = (a-b)²+(a-b)²+4ab
{
    float num1, num2, calculate;
    printf("Enter your first value\t");
    scanf("%f", &num1);
    printf("Enter your second value\t");
    scanf("%f", &num2);
    calculate = (num1 - num2) * (num1 - num2) + (num1 - num2) * (num1 - num2) + 4 * (num1 * num2);
    printf("Answar is  %f", calculate);
    return 0;
}
// solved the problem (a²+b²)=(a+b)²
//  solved the problem (a-b)² =a²-2ab+b²
int f13()
{
    float num1, num2, calculate;
    printf("enter your first vlaue\t");
    scanf("%f", &num1);
    printf("enter your second value\t");
    scanf("%f", &num2);
    // calculate the value of num1 and num2
    //(a+b)² = a²-2ab+b²
    calculate = num1 * num1 - 2 * num1 * num2 + num2 * num2;
    printf("VALUE IS %f", calculate);
    return 0;
}
// solved the problem (a+b)²=a²+2ab+b²
int f12()
{
    float num1, num2, calulate;
    printf("Enter your first value\n");
    scanf("%f", &num1);
    printf("Enter your second value\n");
    scanf("%f", &num2);
    calulate = num1 * num1 + 2 * (num1 * num2) + num2 * num2;
    printf("Answar is%f", calulate);
    return 0;
}
// perimeter of a rectengule leth of rectengle
// formul 2(lenth+width)
int f11()
{
    float length, width, perimeters;
    printf("enter your length of rectengle\n");
    scanf("%f", &length);

    printf("enter your width of rectengle\n");
    scanf("%f", &width);

    // clculation of rectengle
    perimeters = 2 * (length + width);
    printf("rectengle of perimeter is %f", perimeters);
}
// 10. wap to find the area of the circle take radius of circle from user input
// 10. वृत्त का क्षेत्रफल ज्ञात करने के लिए उपयोगकर्ता इनपुट से वृत्त की त्रिज्या लें
int f10()
{
    int r;
    float a;
    printf("enter your radius\n");
    scanf("%d", &r);
    a = 3.14 * r * r;
    printf(" Ariya is %f", a);
}
// 9. write program to calculate area of a rectengle input apporiate data from the user
// 9. उपयोगकर्ता से प्राप्त डेटा के आयत इनपुट के क्षेत्रफल की गणना करने के लिए प्रोग्राम लिखें
int f9()
{
    int a, b, v;
    printf("enter your area of a rectengurar input\n");
    scanf("%d%d", &a, &b);
    v = a * b;
    printf("lenth%d\nwidth%d\nis %d cm2", a, b, v, a * b);
}
/*8. write a program to  clculate square of
 given numbers numbers is entered by the user*/
int f8()
{
    int a, b;
    printf("enter your numbers\n");
    scanf("%d", &a, &b);
    b = a * a;
    printf("%d=%d", a, b);
}
// 7. write a program to calculate sum of two integers numbers are taken from user through keywords
int f7()
{
    int a, b;
    printf("enter your integers\n");
    scanf("%d%d", &a, &b);
    printf("sum of %d and %d is %d", a, b, a + b);
    return 0;
}
// 6. write a program to print "Teacher's Day" on the screen (remember to print double and single quotes )
int f6()
{
    printf("\"Teacher's Day\"\n");
    printf("\'Teacher's Day\'");
}
// 5. write a program to print \r on the screen
int f5()
{
    printf("hello my deare \rfriends");
}
// 4. Write a progaram to print \n on the srceen
int f4()
{
    printf("\\n");
}
//.3 write a program print "mysirG" on the screen (remember to print in double quotes)
int f3()
{
    printf("\"mysirG\"");
}
// 2. write a program to print hello in fist line and student in the second line
int f2()
{
    printf("hello\nstudent");
}
// 1. write a program two print hello student on the screen
int f1()
{
    printf("hello");
    return 0;
}