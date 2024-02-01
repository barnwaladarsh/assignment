#include<stdio.h>
int main() {
    int x1,y1,x2,y2,x3,y3,m,n;
    printf("Enter coordinates of first point(x1,y1): ");
    scanf("%d %d",&x1,&y1);
    printf("Enter coordinates of first point(x2,y2): ");
    scanf("%d %d",&x2,&y2);
    printf("Enter coordinates of first point(x3,y3): ");
    scanf("%d %d",&x3,&y3);
    m=(y2-y1)/(x2-x1);
    n=(y3-y1)/(x3-x1);
    if(m==n) {
        printf("They fall on one straight line");
    } else {
        printf("They don't fall on one straight line");
    }
    return 0;
}