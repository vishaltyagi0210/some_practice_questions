#include<stdio.h>
#include<conio.h>
// variables used
char ch,charr;
int switch_odd_even_numbers_print,switch_cube_numbers_print,switch_case,conti_not;
int main()
{
    printf("press 1: for printing mySirG\npress 2: for printing natural number\npress 3: for printing even and odd natural number\npress 4: for printing square and cube of natural number\n\n");
    do{
    scanf("%d",&switch_case);
    switch(switch_case){
    case 1:
    // 1.write a program to print my sir g 10 times.
    for(int i=1;i<=10;i++){
        printf("%d. MySirG\n",i);
    }
    break;

    case 2:
    /*2.write a program to print first 10 natural numbers.
      3.write a program to print first 10 natural number in reverse.
    */
    printf("If you want to print first 10 natural number\nfor ascending order presss: R\for reverse order press any character: ");
    printf("printing first 10 natural number in ascending order\n");
    for(int i=1;i<11;i++){
        printf("%d\n",i);
    }
    printf("printing first 10 natural number in descending order\n");
    for(int i=1;i<11;i++){
        printf("%d\n",11-i);
    }
    break;
    
    case 3:
    /*4.write a program to print 10 even natural number.
      5.write a program to print the first 10 even natural number in reverse order.
      6.write a program to print the first 10 odd natural numbers
    */
    //printing 10 even natural number in ascending order.
    printf("press 1: for even numbers\npress 2: for odd numbers: ");
    scanf("%d",&switch_odd_even_numbers_print);
    switch(switch_odd_even_numbers_print){
    case 1:
    printf("printing even natural numbers in ascending order\n");
    for(int i=1;i<=10;i++){
        printf("%d\n",2*i);
    }
    // printing 10 even natural number in decending order.
    printf("printing even natural numbers in descending order\n");
    for(int i=1;i<=10;i++){
        printf("%d\n",22-2*i);
    }
    break;

    case 2: 
    // printing 10 odd natural number in ascending order.
    printf("printing odd natural numbers in ascending order\n");
    for(int i=1;i<=10;i++){
        printf("%d\n",2*i-1);
    }
    // printing 10 odd natural number in decending order.
    printf("printing odd natural numbers in descending order\n");
    for(int i=1;i<=10;i++){
        printf("%d\n",20-(2*i-1));
    }
    break;
}
break;

case 4: 
    //7. write a program to print the square of first 10 natural number 
    //8. write a program to print the cubes of first 10 natural numbers
    //9.write a program to print first 10 natural number square in reverse order.
    //10. write a program to print the cubes of the first 10 natural number in reverse order.
    printf("press 1: for printing square of natural numbers\npress 2: for cube of natural numbers\n: ");
    scanf("%d",&switch_cube_numbers_print);
    switch(switch_cube_numbers_print){
    case 1: 
    // square of 10 natural number in ascending order.
    printf("printing square of 10 natural number in ascending order\n");
    for(int i=1;i<=10;i++){
        printf("%d\n",i*i);
    }
    // square of 10 natural number in descending order.
    printf("printing square of 10 natural number in descending order\n");
    for(int i=1;i>=1;i--){
        printf("%d\n",i*i);
    }
    break;

    case 2: 
    // cube of first 10 natural number in ascending order
    printf("printing cube of first 10 natural number in ascending order\n");
    for(int i=1;i<=10;i++){
        printf("%d\n",i*i*i);
    }
    // cube of first 10 natural number in descending order.
    printf("printing cube of first 10 natural number in descending order\n");
    for(int i = 10;i>=1;i--){
        printf("%d\n",i*i*i);
    }
    break;
    }
    break;
}
printf("if you want to continue press 1: ");
scanf("%d",&conti_not);
}while(conti_not==1);
}