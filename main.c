#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define note "Don't Fun , enter the valid operation"

int a,b,n,fact;
double ba,p;
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();

int main(){
    printf("\t\tWelcome to the scientific calculator!!\n\n");
    int choice;
    printf("\n***** Press 0 to quit program *****\n");
    printf("Enter 1 for Addition \n");
    printf("Enter 2 for Subtraction \n");
    printf("Enter 3 for Multiplicaton \n");
    printf("Enter 4 for Division \n");
    printf("Enter 5 for Modulus \n");
    printf("Enter 6 for Factorial \n");
    printf("Enter 7 for Power \n");
    printf("Enter 8 for Square \n");
    printf("Enter 9 for Cude \n");
    printf("Enter 10 for Squareroot \n");
    while(1){
        printf("\n\nEnter the operation you want to do: ");

        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            modulus();
            break;
        case 6:
            factorial();
            break;
        case 7:
            power();
            break;
        case 8:
            square();
            break;
        case 9:
            cube();
            break;
        case 10:
            squareroot();
            break;
        case 0:
            exit(0);
        dafault:
            printf("\n******** %s ********\n" ,note);
        }
    }
    return 0;
}

void addition(){
    printf("Enter the numbers you want to add: ");
    scanf("%d%d",&a,&b);
    printf("The sum of a and b is %d\n", a+b);
}
void subtraction(){
    printf("Enter the numbers you want to subtract: ");
    scanf("%d%d",&a,&b);
    printf("The Subtraction of a and b is %d\n", a-b);
}
void multiplication(){
    printf("Enter the numbers you want to multiply: ");

    scanf("%d%d",&a,&b);
    printf("The multiplication of a and b is : %d\n ",a*b);
}
void division(){
    printf("Enter the numbers you want to devide: ");

    scanf("%d%d",&a,&b);
    printf("The division of a and b is %.2f\n",(float)a/(float)b);
}
void modulus(){
    printf("Enter the numbers you want to find modulus of: ");

    scanf("%d%d",&a,&b);
    printf("The modulus of a and b is %d\n",a%b);
}
void factorial(){
    printf("Enter the number you want factorial of: ");
    scanf("%d",&n);
    fact=n;
    for(int i = 1; i < n ; i++){
        fact=fact*i;
    }
    printf("\nFactorial of %d is %d",n,fact);
}
void power(){
    printf("Enter the base and power: ");
    scanf("%lf%lf",&ba,&p);
    double e = pow(ba,p);
    printf("The Power is %.2lf",e);
}
void square(){
    printf("Enter the number you want the square of: ");
    scanf("%lf",&ba);
    p=pow(ba,2);
    printf("The square of %.2lf is %.2lf",ba,p);
}
void cube(){
    printf("Enter the number you want to be the cube of: ");
    scanf("%lf",&ba);
    p=pow(ba,3);
    printf("The cube of %.2lf is %.2lf",ba,p);
}
void squareroot(){
    printf("Enter the number you want the square root of: ");
    scanf("%lf",&ba);
    double s = sqrt(ba);
    printf("The square root of %.2lf is %.2lf",ba,s);
}
