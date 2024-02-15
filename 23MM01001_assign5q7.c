#include<stdio.h>
int main() {
    int i,j,n,x[5],temp;
    printf("Enter array size: ");
    scanf("%d",&n);

    printf("Enter array elements:");
    for(int m=0;m<n;m++)
    {
        scanf("%d",&x[m]);
    }

    printf("Array elements before sort");
    for(int k=0;k<n;k++)
    {
        printf("%d\t",x[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(x[j]>x[j+1])
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
    printf("Array after sorting: ");
    for(i=0;i<n;i++)
    {
        printf("%d",x[i]);
    }
    return 0;
}