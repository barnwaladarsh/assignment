#include <stdio.h>

int main() {
    int n,s=0;char ch='y';
    for(int i=1;i>0;i++)
    {
        printf("Provide the number:\n");
        scanf("%d",&n);

        if(n%2==0)
            s+=n;
        
        printf("Do you want to continue?\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y')
            continue;
        else
            break;
    }
    printf("The sum is: %d",s);
    return 0;
}