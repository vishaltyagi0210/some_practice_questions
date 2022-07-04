#include<stdio.h>
#include<conio.h>
int a,b,num,c,switch_case,count,conti_not;
char ch;
float d,e,f,g,h,total_marks;
int main()
{
    printf("press 1: for checking positive or not\npress 2: for checking divisibility by 5\npress 3: for checking even or odd\npress 4: checking even or odd(without moduler.op)\npress 5:checking it is a three didig number or not\npress 6: for checking greater number from 2 numbers\npress 7: for checking your profit margin or loss\npress 8: check you are pass or not\npress 9: checking uppercase and lowercase\npress 10: checking your maturity\n\n");
    do{
    scanf("%d",&switch_case);
    switch (switch_case)
    {
    case 1:
    // 1.write a program to check whether given number is positive or negative
    printf("Enter a number: ");
    scanf("%d",&a);
    a>=0?printf("%d is a positive number\n",a):printf("%d is not a positive number\n",a);
    break;

    case 2:
    // 2.write a program to check whether a given number is divisible by 5 or not
    printf("Enter your number: ");
    scanf("%d",&a);
    a%5==0?printf("%d is divisible by 5\n",a):printf("%d is not divisible by 5\n",a);
    break;

    case 3:
     // 3.write a program to check whether a given number is even or odd.
     printf("Enter your number: ");
     scanf("%d",&a);
     a%2==0?printf("%d is an even number\n",a):printf("%d is not an odd number\n",a);
    break;

    case 4:
    // 4.write  a program too check whether a given number is even or odd without using the modulus operator
    printf("Enter a number: ");
    scanf("%d",&num);
    c=num/2;
    num-c*2!=1?printf("%d is a even number\n",a):printf("%d is a odd numer\n",a);
    break;

    case 5:
    // 5.Write a program to check whether a given number is a three digit number or not
    printf("Enter a number: ");
    scanf("%d",&a);
    99<a<1000?printf("%d is a three digit number\n",a):printf("%d is not a three digit number\n",a);
    break;

    case 6:
    // 6.write a program to find greater between two numbers.Print one number if both numers are the same.
    printf("Enter your two numbers: ");
    scanf("%d %d",&a,&b);
    a>b?printf("%d is greater than %d\n",a,b):a<b?printf("%d is greater than %d\n",b,a):printf("both numbers are same: %d\n",a);
    break;

    case 7:
    // 7. write a program which takes the cost price and selling proce of a product from the user. Now calculate and print profit or loss percentage
    printf("Enter Selling price and cost price: ");
    scanf("%f %f",&d,&e);
    d>e?printf("your gained a profit of %0.0f%%\n",(d-e)/d*100):printf("your gained a loss of %0.0f%%\n",(e-d)/e*100);
    break;

    case 8:
    //8.Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

     //fail subject counter.
    printf("Enter your all 5 subjects marks\nMaths, Science, Social Science, Hindi,English\n");
    float marks[] = {d,e,f,g,h};
    // taking input from the students
    for(int i=0;i<5;i++){
        scanf("%f",&marks[i]);
    }
    //adding all numbers
     for(int i=0;i<5;i++){
        total_marks+=marks[i];
     }
     total_marks = total_marks/500*100;
     // condition for pass and fail of stufents
        if(total_marks>=33){
         for(int i=0;i<5;i++){
            if(marks[i]<33)
            count++;
         }
         printf("You are passed in overall percentage: %f\nbut fail in %d subjects\n",total_marks,count);
    }
    else{
    for(int i=0;i<5;i++){
        if(marks[i]<33)
        count++;
    }
    printf("you are fail in overall percentage: %f\nand also fail in %d subjects\n",total_marks,count);
    }
    break;

    case 9:
    // 9. Write a program to check whether a given alphabet is in uppercase or lowercase

    printf("Enter a character: ");         
    scanf("%c",&ch);
    ch==97&&ch<=122?printf("you entered an lower case letter %c\n",ch):ch==65&&ch<=90?printf("you entered a upper case letter %c\n",ch):printf("You enter invalid character %c\n",ch);
    break;

    case 10:
    //10. A policy agent has to inform about the amount a client will get after maturity of the scheme. If the client comes in the age of 18 to 25 ,,,,etc.

    printf("Enter your age and your investenment amount: ");
    scanf("%d %f",&a,&e);
    (a>=18 && a<=55)&&(e>=10000 && e<=100000)?a>=18&&a<25?printf("Your maturity amount after 30 years is: %f\n",e*(1+0.05*30)):a>=25&&a<40?printf("Your maturity amount after 20 years is: %f\n",e*(1+0.05*20)):a>=40&&a<55?printf("Your maturity amount after 10 years is: %f\n",e*(1+0.05*10)):printf("\n"):printf("sorry you are not eligible for our criteria that is:\nyour age should be between 18-55\ninvested amount should be between 10,000-1,00,000\n");
    break;
    default: printf("Enter number from given table");
    break;
    }
    //case for do-while loop
    printf("If you want to continue press: 0\n");
    scanf("%d",&conti_not);
  }while(conti_not==0);
}