#include<stdio.h>
int main() {
    int dn,dr,q=0,r;
    printf("Dividend: ");
    scanf("%d",&dn);
    printf("Divisor: ");
    scanf("%d",&dr);
    
    while(dn>=0)
    {
        dn-=dr;
        q++;
        r=dn;    
    }

    printf("\nQuotient: %d",q-1);
    printf("\nRemainder: %d",r+dr);
    
    return 0;
}