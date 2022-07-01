#include<stdio.h>
#include<conio.h>
int a,b,c,d,switch_case,conti_not;
float e,f,g;
int main()
{
    do{
    printf("Press 1: for adding\npress 2: for circle area\npress 3: for volume of cubooid\npress 4: for simple inrerest\npress 5: for area of rectangle\npress 6: for average of three numbers\npress 7: for square of a number\npress 8: converting ASCII\npress 9: for profit margin\npress 10: for area of triangle\n\n");
    scanf("%d",&switch_case);
    switch(switch_case){
    case 1:
    // write a program to calculate sum of two numbers
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("Your sum is: %d\n",a+b);
    break;

    case 2:
    // write a program to calculate the area of a circle.
    printf("Enter your circle radius\n");
    scanf("%d",&a);
    printf("Area of circle is: %f\n",2*3.14*a*a);
    break;

    case 3:
    // write a program to calculate the volume if a cuboid
    printf("Enter length breath height\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("Volume of cuboid is: %d\n",a*b*c);
    break;

    case 4:
    // write a program to calculate simple interest
    printf("Enter principle amount Rate of interest time(anually)\n");
    scanf("%f %f %f",&e,&f,&g);
    printf("Your interest is: %0.1f\n",(e*(1+f/100*g))-e);
    break;

    case 5:
    // write a program to calculate area of a rectangle
    printf("Enter length breath\n");
    scanf("%f %f",&e,&f);
    printf("the area of a rectangle is :%f\n",2*(e+f));
    break;

    case 6:
    //write a program to calculate average of three numbers
    printf("Enter 3 numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("Your average is :%d\n",(a+b+c)/3);
    break;

    case 7:
    //write a program to calculete square of a given number
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("square of your number is: %d\n",a*a);
    break;

    case 8:
    // write a program to convert input char into ascii
    printf("Enter a character\n");
    d = 'a';
    printf("your charcater number is: %d\n",d);
    break;

    case 9:
    //write a program to calculate profit margin
    printf("Enter cost price  selling price\n");
    scanf("%f %f",&e,&f);
    if(e>f){
    printf("you have a loss of %0.1f percentage\n",((e-f)/e)*100);
    }
    else
    printf("your profit is: %0.1f percentage\n",((f-e)/e)*100);
    break;

    case 10:
    // write a program to calculate area of a triangle
    printf("Enter base and height\n");
    scanf("%f %f",&e,&f);
    printf("area of triangle is: %0.1f\n",0.5*e*f);
    break;

    default: printf("you entered a wrong number\n");
    }
    printf("if you want to continue press: 0\n");
    scanf("%d",&conti_not);
}while(conti_not==0);

}