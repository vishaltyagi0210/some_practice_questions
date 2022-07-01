#include<stdio.h>
#include<conio.h>
int a,b,c,d,conti_not,cases;
float e;
int main(){
    do{

    printf("Press 1: for printing data types size\npress 2: for printing last digit of your number\npress 3: for printing first digit of three digit number\npress 4: for printing middle digit of three digit number\npress 5: for swapping variable with 3 variables\npress 6: for swap variable without third variable\npress 7: for storing last digit as 0\npress 8: for append digit in your given number\npress 9: convert inr into usd\npress 10: rotate to left your digit\n\n");
    scanf("%d",&cases);
switch (cases)
{
case 1:
    // 1.write a program to print size of an int, float , char , double type variable.
    a = sizeof(int),b=sizeof(char),c=sizeof(float),d= sizeof(double);
    printf("Size of int is: %d\nSize of char is: %d\nSize of float is: %d\nSize of double is: %d\n",a,b,c,d);
break;

case 2:
    // 2.write a program to find last digit of a given number
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("you entered %d and it's last digit is: %d\n",a,a%10);
break;

case 3:
    // 3.write a program to find first digit of a given three digit number
    printf("Enter a three digit number only: ");
    scanf("%d",&a);
    printf("You entered %d and its middle digit is: %d\n",a,a/100);
break;

case 4:
    // 4.write a program to find middle digit of a given three digit number
    printf("Enter a three digit number: ");
    scanf("%d",&a);
    printf("you entered %d and its middle digit is: %d\n",a,a/10%10);
break;

case 5:
    // 5. write a program to swap values of two int variables
    printf("Enter two values you want to swap: ");
    scanf("%d %d",&a,&b);
    printf("You entered %d as first value and %d as second value,\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("now your first value is %d and your second value is %d\n",a,b);
break;

case 6:
    // 6.write a program to swap two int variables without using three variables
      printf("Enter two values you want to swap: ");
      scanf("%d %d",&a,&b);
      printf("You entered %d as first value and %d as second value,\n",a,b);
      b=a+b;
      a=b-a;
      b=b-a;
      printf("now your first value is %d and your second value is %d\n",a,b);
break;

case 7:
    // 7.write a program to make the last digit of a number stored in a variable as zero
      printf("Enter a number: ");
      scanf("%d",&a);
      b = a%10;
      printf("you enter %d\nBut as per the question norms your answer is: %d\n",a,a-b);
break;

case 8:
    //8. Write a program to input a number from the user and also input a digit. Wppend a digit in the number and print the resulting number.
      printf("Enter Your number and a digit: ");
      scanf("%d%d",&a,&b);
      printf("You entered %d\nBut as per the question your ans is: %d%d\n",a,a,b);
break;

case 9:
    // 9. write a program to take the amount of INR and convert it into USD
    printf("Enter INR amount you want to convert: ");
    scanf("%d",&a);
    printf("\nEnter current USD price: ");
    scanf("%f",&e);
    printf("$%f\n",a/e);
break;

case 10:
    // 10.write a program to take a thrree digit number from user and rotate its digits by one position towards the right.
    printf("enter a number: ");
    scanf("%d",&a);
    int a1 = a>>1;
    printf("After shifting %d left from 1 ans is: %d\n",a,a1);  
break;

default : printf("entered a wrong input");
break;
   }
   printf("If you want to continue press 0: ");
   scanf("%d",&conti_not);
  }while(conti_not==0);
}