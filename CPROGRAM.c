 //Question 1

#include <stdio.h>

int main() {
    
    int a,b;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    if(a>b)
     printf("first number is greater\n");
    else
     printf("second number is greater\n");

    return 0;
}

//Question 2
#include <stdio.h>

int main() {
    
    int a,b,c;
    printf("enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
     printf("first number is greater\n");
    else if(b>a && b>c)
     printf("second number is greater\n");
    else
      printf("third number is greater\n");

    return 0;
}

//Question 3
#include <stdio.h>

int main() {
    
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a>0)
     printf("positive number\n");
    else if(a<0)
     printf("negative number\n");
    else
      printf("its zero\n");

    return 0;
}

//Question 4
#include <stdio.h>

int main() {
    
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if((a%55==0))
     printf("number is divisible by 5 and 11\n");
    
    else
      printf("number is not divisible by 5 and 11\n");

    return 0;
}

//Question 5
#include <stdio.h>

int main() {
    
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a%2==0)
     printf("number is even\n");
    
    else
      printf("number is odd\n");

    return 0;
}

//Question 6
#include <stdio.h>

int main() {
    
    int a;
    printf("enter a year\n");
    scanf("%d",&a);
    if((a%4==0) &&((a%400==0) || (a%100!=0)))
     printf("its a leap year\n");
    
    else
      printf("not a leap year\n");

    return 0;
}
//Question 7
#include <stdio.h>

int main() {
    
    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
     printf("character %c is alphabet\n",ch);
    
    else
      printf("character %c is not alphabet\n");

    return 0;
}

//Question 8
#include <stdio.h>

int main() {
    
    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))
     printf("character %c is vowel\n",ch);
    
    else
      printf("character %c is consonant\n");

    return 0;
}

//Question 9
#include <stdio.h>

int main() {
    
    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
     printf("character %c is alphabet\n",ch);
    
    else if(ch>='0' && ch<='9')
      printf("character %c is digit\n",ch);
    else
     printf("character %c is a special character \n",ch);

    return 0;
}

//Question 10
#include <stdio.h>

int main() {
    
    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
     printf("character %c is uppercase alphabet\n",ch);
    else
     printf("character %c is a lowercase character \n",ch);

    return 0;
}

//Question 11



#include <stdio.h>

int main() {
    
    int week;
    printf("enter a week number(1-7):\n");
    scanf("%d",&week);
    if(week == 1)
    {
        printf("Monday");
    }
    else if(week == 2)
    {
        printf("Tuesday");
    }
    else if(week == 3)
    {
        printf("Wednesday");
    }
    else if(week == 4)
    {
        printf("Thursday");
    }
    else if(week == 5)
    {
        printf("Friday");
    }
    else if(week == 6)
    {
        printf("Saturday");
    }
    else if(week == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }

    return 0;
}
//Question 12.
#include <stdio.h>

int main()
{
    int month;

    /* Input month number from user */
    printf("Enter month number (1-12): ");
    scanf("%d", &month);


    /* Group all 31 days conditions together using logical OR operator */
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        printf("31 days");
    }
    else if(month==4 || month==6 || month==9 || month==11)
    {
        /* Group all 30 days months together */
        printf("30 days");
    }
    
    else
    {
        printf("28 or 29 days");
    }

    return 0;
}

//Question 12
#include <stdio.h>

int main()
{
    int amount;
    int note500, note100, note50, note20, note10, note5, note2, note1;
    
    /* Initialize all notes to 0 */
    note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;


    /* Input amount from user */
    printf("Enter amount: ");
    scanf("%d", &amount);


    if(amount >= 500)
    {
        note500 = amount/500;
        amount -= note500 * 500;
    }
    if(amount >= 100)
    {
        note100 = amount/100;
        amount -= note100 * 100;
    }
    if(amount >= 50)
    {
        note50 = amount/50;
        amount -= note50 * 50;
    }
    if(amount >= 20)
    {
        note20 = amount/20;
        amount -= note20 * 20;
    }
    if(amount >= 10)
    {
        note10 = amount/10;
        amount -= note10 * 10;
    }
    if(amount >= 5)
    {
        note5 = amount/5;
        amount -= note5 * 5;
    }
    if(amount >= 2)
    {
        note2 = amount /2;
        amount -= note2 * 2;
    }
    if(amount >= 1)
    {
        note1 = amount;
    }

    /* Print required notes */
    printf("Total number of notes = \n");
    printf("500 = %d\n", note500);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    printf("5 = %d\n", note5);
    printf("2 = %d\n", note2);
    printf("1 = %d\n", note1);

    return 0;
}



//Question 13
#include <stdio.h>

int main()
{
    int angle1, angle2, angle3, sum;
    printf("Enter three angles of triangle: \n");
    scanf("%d%d%d", &angle1, &angle2, &angle3);
     sum = angle1 + angle2 + angle3; 
    /*
     * If sum of angles is 180 and
     * angle1, angle2, angle3 is not 0 then
     * triangle is valid.
     */
    if(sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) 
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}

//Question 14
#include <stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Enter three sides of triangle: \n");
    scanf("%d%d%d", &side1, &side2, &side3);

    if((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}

//Question 15
#include <stdio.h>

int main()
{
    int side1, side2, side3;

    /* Input sides of a triangle */
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &side1, &side2, &side3);

    if(side1==side2 && side2==side3) 
    {
        /* If all sides are equal */
        printf("Equilateral triangle.");
    }
    else if(side1==side2 || side1==side3 || side2==side3) 
    {
        /* If any two sides are equal */
        printf("Isosceles triangle.");
    }
    else 
    {
        /* If none sides are equal */
        printf("Scalene triangle.");
    }

    return 0;
}

//Question 16
#include <stdio.h>
#include <math.h> /* Used for sqrt() */

int main()
{
    float a, b, c;
    float root1, root2, imaginary;
    float discriminant;
    
    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);
    
    /* Find discriminant of the equation */
    discriminant = (b * b) - (4 * a * c);
    
   
    /* Find the nature of discriminant */
    if(discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

        printf("Two distinct and real roots exists: %.2f and %.2f", root1, root2);
    }
    else if(discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);

        printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
    }
    else if(discriminant < 0)
    {
        root1 = root2 = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);

        printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", 
                root1, imaginary, root2, imaginary);
    }

    return 0;
}

//Question 17
#include <stdio.h>

int main()
{
    int cp,sp, amt; 
    
    /* Input cost price and selling price of a product */
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);
    
    if(sp > cp)
    {
        /* Calculate Profit */
        amt = sp - cp;
        printf("Profit = %d", amt);
    }
    else if(cp > sp)
    {
        /* Calculate Loss */
        amt = cp - sp;
        printf("Loss = %d", amt);
    }
    else
    {
        /* Neither profit nor loss */
        printf("No Profit No Loss.");
    }

    return 0;
}

//Question 18
#include <stdio.h>

int main()
{
    int phy, chem, bio, math, comp; 
    float per; 

    /* Input marks of five subjects from user */
    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);


    /* Calculate percentage */
    per = (phy + chem + bio + math + comp) / 5.0;

    printf("Percentage = %.2f\n", per);


    /* Find grade according to the percentage */
    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}

//Question 19

#include <stdio.h>

int main()
{
    float basic, gross, da, hra;

    /* Input basic salary of employee */
    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic);


    /* Calculate D.A and H.R.A according to specified conditions */
    if(basic <= 10000)
    {
        da  = basic * 0.8;
        hra = basic * 0.2;
    }
    else if(basic <= 20000)
    {
        da  = basic * 0.9;
        hra = basic * 0.25;
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.3;
    }

    /* Calculate gross salary */
    gross = basic + hra + da;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);

    return 0;
}
//Question 20
#include <stdio.h>

int main()
{
    int unit;
    float amt, total_amt, sur_charge;

    /* Input unit consumed from user */
    printf("Enter total units consumed: ");
    scanf("%d", &unit);


    /* Calculate electricity bill according to given conditions */
    if(unit <= 50)
    {
        amt = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amt = (50*0.50) + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amt = (50*0.50) +(100*0.75)+ ((unit-150) * 1.20);
    }
    else
    {
        amt = (50*0.50) +(100*0.75)+ (100*1.20) + ((unit-250) * 1.50);
    }

    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total_amt);

    return 0;
}
