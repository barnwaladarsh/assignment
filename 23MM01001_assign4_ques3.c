#include<stdio.h>
int main() {
    int c,s,i;
    printf("Enter credit card balance: ");
    scanf("%d",c);
    printf("Enter credit card score: ");
    scanf("%d",s);

    if(s<600) {
        i=15;
        printf("Calculated interest is %d",c*i/100);
    }

    if(s>=600 && s<=750) {
        i=12;
        printf("Calculated interest is %d",c*i/100);
    }

    if(s>750) {
        i=10;
        printf("Calculated interest is %d",c*i/100);
    }
    return 0;

}