#include<stdio.h>
#include<conio.h>
// variables used in program:
int a,b,c,conti_not,switch_case;
char ch;
float total;
int main()
//conditions
{
    printf("press 1: for checking divisibility by 3 and 2\npress 2:for checking devisibility by 7 and 3\npress 3: for checking entered a number is positive or negative\npress 4: for checking leap year or not\npress 5: for checking greater between three number\npress 6: for checking type of given something from keyboard\npress 7: for finding it is a valid triangle or not\npress 8: for checking days in a given month\npress 9: for checking roots type of your quadratic equation\npress 10: for checking your grad\n\n ");
    do{
    scanf("%d",&switch_case);
    switch(switch_case){
    case 1:
    // 1.write a program to check whether a given number is divisible by 3 and divisible by 2.

    printf("Enter your number: ");
    scanf("%d",&a);
    a%2==0&&a%3==0?printf("your number %d is divisible by 2 and 3 both\n",a):printf("no your number %d is not divisible by both 2 and 3\n",a);
    break;

    case 2:
    // 2.write a program to check whether a given number is divisible by 7 and divisible by 3.

    printf("Enter your number: ");
    scanf("%d",&a);
    (a%7&&a%3)==0?printf("your number %d is divisible by 7 and 3 both\n",a):printf("no your number %d is not divisible by both 7 and 3\n",a);
    break;

    case 3:
    //3.Write a program to check whether a given number is positive,negative or zero.

    printf("Enter your number: ");
    scanf("%d",&a);
    a<0?printf("%d is a negative number\n",a):a>0?printf("%d is a positive number\n",a):a==0?printf("you entered 0"):printf("you dont entered a number\n",a);
    break;

    case 4:
    // 4.Write a program to check whether a given year is a leap year or not.
    printf("Enter year: ");
    scanf("%d",&a);
    a%4==0?printf("%d is a leap year\n",a):printf("%d is not a leap year\n",a);
    break;

    case 5:
    // 5.write a program to find greater among three numbers.if two or three number are identicall and greater among all then print it only once.
    printf("Enter your three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b||b==c||c==a){
    if(a==b){
        a>c?printf("%d is greater then %d\nyour entered two numbers are same that is: %d\n",a,c,a):printf("%d is greater than %d\nyour two entered numbers are same that is: %d\n",c,a,a);
    }
    else if(b==c){
        b>a?printf("%d is greater than %d\nyour enter two numbers are same that is: %d\n",b,a,b):printf("%d is greater than %d\nyour entered two numbers are same that is: %d\n",a,b,b);
    }
    else if(a==c){
      b>a?printf("%d is greater than %d\nyour enter two numbers are same that is: %d\n",b,a,b):printf("%d is greater than %d\nyour entered two numbers are same that is: %d\n",a,b,b);
    }
    }else {
       if(a<b){
        b<c?printf("%d is greater than %d %d\n",c,b,a):printf("%d is greater than %d %d\n",b,c,a);
       }
       else if(b<c){
        a<c?printf("%d is greater than %d %d\n",c,b,a):printf("%d is greater than %d %d\n",a,b,c);

       }else if(a<c){
        b<c?printf("%d is greater than %d %d\n",c,a,b):printf("%d is greater than %d %d\n",b,a,c);
       }
    }
    break;


    case 6:
    //6. write a program to check whether a given character is an alphabet(uppercase),an alphabet(lowercase),a digit or special character.

    printf("Enter a key from keyboard: ");
    scanf("%c",&ch);
    // checking alphabet uppercase.
    ch>=65&&ch<=90?printf("You enter a alphabet %c\nwhich is also an uppercase letter\n",ch):
    // checking alphabet lowercase.
    ch>=97&&ch<=122?
    printf("You entered an alphabet %c\nhich is in lowercase\n",ch):
    //checking number.
    ch>=48&&ch<=57?printf("You entered a digit %c\n",ch):
    //checking special character.
    (ch>=33&&ch<=47||ch>=58&&ch>=59||ch>=123&&ch<=126||ch==64||ch>=91&&ch<=96)?printf("You entered a special character %c\n",ch):
    //checking operators.
    ch>=58&&ch<=64?
    printf("you are enter a operator %c\n",ch):printf("enter something\n");
    break;


    case 7:
    // 7. write a program to take length of the sides of a triangle as an input. Display whether the triangle is vallid or not.

    printf("Enter your triangle sides: ");
    scanf("%d %d %d",&a,&b,&c);
    int first = a+b;
    int second = b+c;
    int third = c+a;
    first>c||second>a||third>b?printf("your triangle with sides %d %d %d is a valid triangle\n",a,b,b):printf("no your triangle is not valid\nA valid triangle: sum of two sides is greater than the third one\n");
    break;


    case 8:
    // 8.Write a program to take month number as input and display number of days in that month.

    printf("Enter month number: ");
    scanf("%d",&a);
    switch(a){
        case 1: printf("You enter %d which belongs to january\nit has 31 days\n",a);
        break;

        case 2: printf("You enter %d which belongs to february\nit has 28 days\n",a);
        break;

        case 3: printf("You enter %d which belongs to March\nit has 31 days\n",a);
        break;

        case 4: printf("You enter %d which belongs to April\nit has 30 days\n",a);
        break;
        
        case 5: printf("You enter %d which belongs to May\nit has 31 days\n",a);
        break;
        
        case 6: printf("You enter %d which belongs to june\nit has 30 days\n",a);
        break;
        
        case 7: printf("You enter %d which belongs to july\nit has 31 days\n",a);
        break;

        case 8: printf("You enter %d which belongs to August\nit has 31 days\n",a);
        break;
        
        case 9: printf("You enter %d which belongs to September\nit has 30 days\n",a);
        break;

        case 10: printf("You enter %d which belongs to October\nit has 31 days\n",a);
        break;
        

        case 11: printf("You enter %d which belongs to November\nit has 30 days\n",a);
        break;

        case 12: printf("You enter %d which belongs to December\nit has 31 days\n",a);
        break;
        
        default : printf("enter number from 1 to 12 only.\n");
        break;
    }

        break;

    case 9:
    // 9.write a program to find the nature of roots of a quadratic equation.

    printf("Enter your exuations constants ax^2, bx, c: ");
    scanf("%d %d %d",&a,&b,&c);
    int internal_cal = (b*b)-(4*a*c);
    // roots are imaginary.
    internal_cal<0?printf("Your rots of this quadratic equation: %dx^2+%dx +%d\nare imaginary\n",a,b,c)
    // roots are real and equal.
    :internal_cal==0?printf("Your roots of this quadratic equation: %dx^2 +%dx +%d\nare Real and equal\n",a,b,c)
    // roots are real and unequal.
    :internal_cal>0?printf("Your roots of this quadratic equation: %dx^2 +%dx +%d\nare Real and unequal\n",a,b,c):
    // default
    printf("Enter equation properly\n");
    break;

    case 10:
    // 10. write a c program to input marks of five subjects physics, chemistry, biology, mathematics and computer. Calculate percentage and grade according to following: 
    
    printf("Enter your marks Physics, Chemistry, Biology, Mathematics, Computer:\n");
    float marks[5]={};
    for (int i=0;i<5;i++){
        scanf("%f",&marks[i]);
    }
    for(int i=0;i<5;i++){
        total = total+marks[i];
    }
    total=total/500*100;
    // grade giving
    //grade a
    total>=90?printf("You got Grade A\nAnd your percentage is: %0.1f\n",total):
    // grade b
    total>=80?printf("You got Grade B\nAnd your percentage is: %0.1f\n",total):
    //grade c
    total>=70?printf("You got Grade C\nAnd your percentage is: %0.1f\n",total):
    // grade d
    total>=60?printf("You got Grade D\nAnd your percentage is: %0.1f\n",total):
    // grade e
    total>=40?printf("You got Grade E\nAnd your percentage is: %0.1f\n",total):
    // grade f
    total<40?printf("You got Grade F\nAnd your percentage is: %0.1f\n",total):
    // default
    printf("Error");
    break;
    default: printf("Enter right number\n");
    break;
    }
    printf("If you want to continue press 1: ");
    scanf("%d",&conti_not);
    }while(conti_not==1);
}