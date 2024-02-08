#include<stdio.h>
int main() {
    int x,y,z,a;
    printf("Enter three integers:");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y && x>z) {
        a=1;
    }
    if(y>x && y>z) {
        a=2;
    }
    if(z>y && z>x) {
        a=3;
    }
    
    switch(a)
    {
        case 1:
        printf("%d is the largest number",x);
        break;

        case 2:
        printf("%d is the largest number",y);
        break;
        case 3:
        printf("%d is the largest number",z);
        break;
        default:
        printf("Please enter three different numbers");
    }
    return 0;
}