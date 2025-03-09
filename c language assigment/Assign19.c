#include <stdio.h>
int m1()
{
    /*1.write a program to takes the month as input and
    display an input and display numbers of days in month */

    int x;
    while (x)
    {
        printf("Enter a number:\t");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            printf("january 31 days");
            break;
        case 2:
            printf("february 28/29 days");
            break;
        case 3:
            printf("march 31 days");
            break;
        case 4:
            printf("april 30 days");
            break;
        case 5:
            printf("may 31 days");
            break;
        case 6:
            printf("june 30 days");
            break;
        case 7:
            printf("july 31 days");
            break;
        case 8:
            printf("august 31 days");
            break;
        case 9:
            printf("september 30 days");
            break;
        case 10:
            printf("october 31 days");
            break;
        case 11:
            printf("november 30 days");
        case 12:
            printf("December 31 days");
            break;
        default:
            printf("Invid Number");
            break;
        }
        printf("\n");
    }
    return 0;
}
/*2.write a menu driven program with the following option*/
int m2()
{

    int x = 1, a, b, sum, sub, mul, div, ext;
    while (x != 5)
    {
        printf("\n1.Addition");
        printf("\n2.Subtraction");
        printf("\n3.Multiplication");
        printf("\n4.Addition");
        printf("\n5.Exit");
        printf("\n");
        printf("Choese your numbers:\t");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("Enter first number:\t");
            scanf("%d", &a);
            printf("Enter second number:\t");
            scanf("%d", &b);
            sum = a + b;
            printf("sum is:%d", sum);
            break;
        case 2:
            printf("Enter first number:\t");
            scanf("%d", &a);
            printf("Enter second number:\t");
            scanf("%d", &b);
            sub = a - b;
            printf("subtration is:%d", sub);
            break;
        case 3:
            printf("Enter first number:\t");
            scanf("%d", &a);
            printf("Enter second number:\t");
            scanf("%d", &b);
            mul = a * b;
            printf("multiplication is:%d", mul);
            break;
        case 4:
            printf("Enter first number:\t");
            scanf("%d", &a);
            printf("Enter second number:\t");
            scanf("%d", &b);
            div = a / b;
            printf("division is:%d", div);
            break;
        case 5:
            break;
        default:
            printf("Invilid number choise");
            break;
        }
        printf("\n");
    }
    return 0;
}

// 3.write a program which takes the day number of a week and displays s unique
//  greeting message for the day
// Online C compiler to run C program online
int main()
{
    int x;
    while (x != 8)
    {
        printf("\n1.Sunday");
        printf("\n2.Monday");
        printf("\n3.Tuesday");
        printf("\n4.Wednesday");
        printf("\n5.Thrusday");
        printf("\n6.Friday");
        printf("\n7.Saturday");
        printf("\n8.Exit");
        printf("\n");
        printf("choise the number:\t");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("आज रविवार है, आराम करें और खुशियाँ मनाएं।इस दिन को अपने परिवार और दोस्तों के साथ बिताएं।आपको रविवार की शुभकामनाएं।आपका दिन मंगलमय हो! ");
            break;

        case 2:
            printf("सोमवार की शुभकामनाएं!नया सप्ताह, नए सपने, नई उमंग।आज से आपके सपने सच होंगे।आपका दिन मंगलमय हो! 💪");
            break;

        case 3:
            printf("मंगलवार की शुभकामनाएं!आज का दिन आपके लिए मंगलमय हो।आपके सभी कार्य सफल हों।आपका दिन शुभ हो! ");
            break;

        case 4:
            printf("बुधवार की शुभकामनाएं!आज का दिन ज्ञान और बुद्धि का है।आपके सभी कार्य बुद्धिमत्ता से हों।आपका दिन शुभ और समृद्ध हो! ");
            break;

        case 5:
            printf("गुरुवार की शुभकामनाएं!आज का दिन आपके लिए शुभ और समृद्ध हो।आपके जीवन में गुरु की कृपा बनी रहे।आपका दिन मंगलमय हो ");
            break;

        case 6:
            printf("शुक्रवार की शुभकमानाएं!आज का दिन आपके लिए शुभ और समृद्ध हो।आपके जीवन में सुख और समृद्धि की बरसात हो।आपका दिन मंगलमय हो! ");
            break;

        case 7:
            printf("शनिवार की शुभकामनाएं!आज का दिन आपके लिए आराम और आनंद से भरा हो।आपके जीवन में खुशियों की बहार हो।आपका दिन शुभ और सुखद हो! ");
            break;

        case 8:
            break;

        default:
            printf("invalid number");
            break;
        }
        printf("\n");
    }
    return 0;
}
/*4.check a menu diven program to with the following option
1.check whether a given set of three numbers are lenths of an isosceles triangle or not
2.check whether a given set of three numbers are lenths of sides of a righr angled tringle or not
3.check whether a given set of three numbers are equilateral triangle of not
4.Exit */

/*5. convert the  following if-else construct into swich case:
if(var==1)
      printf("good");
else if(var==2)
      printf("batter");
else if(var==3)
     printf("best");
else
     printf("invalid");
*/
int main()
{
    int x;
    while (x != 4)
    {
        printf("Enter a number:\t");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("good");
            break;
        case 2:
            printf("better");
            break;
        case 3:
            printf("best");
            break;
        
        default:
              printf("invalid");
            break;
        }
        printf("\n");
    }
    return 0;
}