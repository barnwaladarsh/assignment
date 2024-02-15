#include<stdio.h>
int main() {
    int x,n[4];
    printf("Enter a four digit number: ");
    scanf("%d",&x);
    int temp=x;
    for(int m=3;m>=0;m--)
    {
       n[m]=x%10;
       x/=10; 
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            for(int k=0;k<4;k++)
            {
                for(int l=0;l<4;l++)
                {
                    if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l)
                        printf("%d\n",(1000*n[i])+(100*n[j])+(10*n[k])+n[l]);
                }
            }
        }
    } 
    return 0;   
}