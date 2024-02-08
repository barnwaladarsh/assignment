#include<stdio.h>
int main() {
    int a,b,ch;
    float x;
    printf("Enter values of a and b ");;
    scanf("%d %d",&a,&b);
    
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Divison");

    printf("\nEnter choice:");
    scanf("%d",&ch);

    switch(ch) {
        case 1:
        x=a+b;
        printf("\n%d + %d = %.2f",a,b,x);
        break;

        case 2:
        x=a-b;
        printf("\n%d - %d = %.2f",a,b,x);
        break;

        case 3:
        x=a*b;
        printf("\n%d * %d = %.2f",a,b,x);
        break;

        case 4:
        x=a/b;
        printf("\n%d / %d = %.2f",a,b,x);
        break;

        default:
        printf("Invalid input");
    }
    return 0;
}