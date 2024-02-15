#include<stdio.h>
int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    
    char a[n],b[n+1];

    printf("Enter array elements: ");
    scanf("%s",&a);
    
    
    printf("Enter a word: ");
    scanf("%s",&b);

    int i=0;
    int check = 1;

    while(1)
    {
        char d = b[i];
        if(d==' ')
            break;

        int checker = 0;
        for(int j=0;j<n;j++)
        {
            if(a[j]==d)
            {
                checker++;
                break;
            }
        }   

        if(checker==sizeof(b) / sizeof(b[0]))
            check=0;
        else
            check=1;;    

        i++;
    }

    if(check==1)
        printf("Word found");
    else
        printf("Word cannot be found");   

    return 0;
}