#include<stdio.h>
#include<conio.h>
// variables used in program.
int sum=0,n,factorial=1,count=0;
int main()
{
    // // 1. write a program to calculate sum of first N natural numbers.

    // printf("Enter a number: ");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    // sum+=i;
    // }
    // printf("Your first %d natural number sum is: %d\n",n,sum);

    // // 2.write a program to calculate sum of first N even natural number.

    // printf("Enter a number: ");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     sum=sum+(2*i);
    // }
    // printf("your first %d even number sum is: %d\n",n,sum);

    // // 3. write a program to calculate sum of first n odd natural number

    // printf("Enter a number: ");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     sum = sum+(2*i-1);
    // }
    // printf("Your first %d odd natural number sum is: %d\n",n,sum);

    // //4. write a program to calculate sum of squares of first N natural numbers.

    // printf("Enter a number: ");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     sum = sum + (2*i)*(2*i);
    // }
    // printf("Your first %d even natural number square sum is: %d",n,sum);

    // // 5.write a program to calculate sum of squares of first N natural odd numbers.

    // printf("Enter a number: ");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     sum = sum+(2*i-1)*(2*i-1);
    // }
    // printf("Your first %d square of odd numbers is: %d",n,sum);

    // // 6. write a program to calculate factorial of a number.

    // printf("Enter a number: ");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     factorial *= i;
    // }
    // printf("your %d factorial is: %d",n,factorial);

    // // 7. write a program to count digits in a given number.

    // printf("Enter a number: ");
    // scanf("%d",&n);
    // int f =n;
    // for(int i=1;f!=0;i++){
    //    f%10;
    //    count++;
    //    f/=10;
    // }
    // printf("Your enter %d digit number: %d",count,n);

    // // 8. write a program to check whether a given number is a prime number or not.

    // printf("Enter your number: ");
    // scanf("%d",&n);
    // int i;
    // for( i=2;i<n;i++){
    //     if(n%i==0){
    //         break;
    //     }
    // }

    // //logic
    // n==i?
    // printf("%d is a prime number\n",n):
    // printf("%d is not a prime number\n",n);

    // //9. write a program to calculate LCM of two numbers;

    // printf("Enter two numbers: ");
    // scanf("%d %d",&n,&sum);
    // int j;
    // for( j=n>sum?n:sum;j<n*sum;j++){
    //     if(j%n==0 && j%sum==0){
    //         printf("%d is your LCM",j);
    //         break;
    //     }
    // }
    // if(j==n*sum)printf("%d is the LCM",n*sum);

    //10. write a program to reverse a given number.

    printf("Enter your number: ");
    scanf("%d",&n);
    int reverse = n,number_array[100],temp=0,temp_add=0;

    // storing number in array and counting it.
    for(int i=0;reverse!=0;i++){
      number_array[i]=reverse%10;
      count++;
      reverse/=10;
    }
    if(count>=2){
    //rearrange array number in same form
    for(int i=0;i<=count-1;i++){
       for(int j=i;j<count-1;j++){
        number_array[i]*=10;
        temp = number_array[i];
       }
       temp_add += temp;
       temp = 1;
    }
    printf("%d \n",temp_add);
    }
    else{
        printf("%d",n);
    }
}