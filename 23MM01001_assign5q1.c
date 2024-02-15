#include<stdio.h>
#include<math.h>
int main() {
    int n,s=0,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    int check=0;
    while(n!=0) 
    {
        n/=10;
        check++;
    }

    int x[10]={0,0,0,0,0,0,0,0,0,0};
    while(temp!=0)
    {
        int d=temp%10;
        if(x[d]==0)
        {
            s+=d;
            x[d]++;
        }
        temp/=10;
    }
    printf("\nNumber of digits:%d",check);
    printf("\nSum:%d",s);
    return 0;
}