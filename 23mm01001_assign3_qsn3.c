#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    (((a+b)>c)&&((a+c)>b)&&((c+b)>a))? printf("They can form a triangle"):printf("They cannot form a triangle");
    return 0;
}