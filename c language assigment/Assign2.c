#include <stdio.h>
#include<conio.h>
/*5.write a program to ask user about the cost 
price and selling price banana per dozen calculate 
the profit or loss earned upon selling 25 banana*/
/*int main()
{
    float cp,sp,profit;
    printf("Enter your cost price and selling price\n");
    scanf("%f%f",&cp,&sp);
    profit=(sp-cp)/12*25;
    printf("profite(+ve)=%f \t\nLoss(-ne)=%f",profit);
    return 0;
}*/

/* 4. Write a program to calculate volume of a cuboid
घनाभ का प्रस्तीय क्षेत्रफल और घनाभ का आयतन का प्रोग्राम लिखिए*/
int A4()
{
    float l, b, h, formula;
    printf("Enter your lenth  \t");
    scanf("%f", &l);
    printf("Enter your breadth\t");
    scanf("%f", &b);
    printf("Enter your height \t");
    scanf("%f", &h);
    formula = 2 * (l * b + b * h + h * l);
    printf("surface area of a cubiod=\t%0.2f", formula);
    printf("\n");
    formula = l * b * h;
    printf("Volume of a Cuboid=\t%0.2f", formula);
    return 0;
}
/* 3. write a  program to calculate simple interest*/
int A3()
{
    float p, r, t, si, amount;
    printf("Enter your principle amount\n");
    scanf("%f", &p);
    printf("Enter your rate\n");
    scanf("%f", &r);
    printf("Enter your time\n");
    scanf("%f", &t);
    si = p * r * t / (100);
    printf("your simple intrest is =%0.2f", si);
    printf("\n");
    si = p * r * t / (100) + p;
    printf("Total Amount = %0.2f", si);
    return 0;
}

/* 2. Wriete a program to calculate curcumference of circle*/
int A2()
{
    float r, a = 3.14, calculate;
    printf("Enter your curcumference\n");
    scanf("%f", &r, &a);
    calculate = r * (3.14) * 2;
    printf("curcumference of circle = %0.3f", calculate);
    return 0;
}

/* 1. write a program to claculate average of
 three integers number are given by the user*/
int A1()
{
    int a, b, c;
    float Average;
    printf("enter your integers\n");
    scanf("%f%f%f", &a, &b, &c);
    Average = (a + b + c) / 3.0;
    printf("Average = %0.2f", Average);
    return 0;
}
int  main()
{
    printf("hello student");
    getch();
}