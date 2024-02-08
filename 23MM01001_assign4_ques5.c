#include<stdio.h>
#include<math.h>

int main() {
    int x,s=0,n;
    printf("Enter any three digit number: ");
    scanf("%d",&x);
    n=x;
    while(x!=0) {
        s+=pow(x%10,3);
        x/=10;
    }
    if(n==s) {
        printf("Yes");
    } 
    else {
        printf("No");
    }
    return 0;
}