#include<stdio.h>
int main() {
    int x,r;
    printf("Enter any integer: ");
    scanf("%d",&x);
    r=x%2;
    switch(r) {
        case 0:
        printf("Number is even");
        break;
        
        case 1:
        printf("Number is odd");
        break;
    }
    return 0;
    
}