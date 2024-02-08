#include<stdio.h>
int main() {
    int a;
    printf("Enter age: ");
    scanf("%d",&a);
    
    if(a>0 && a<5) 
    {    
        printf("Ticket is free ");
    }
    else if(a>=5 && a<=12)
    {
        printf("Ticket price:20 rupees");
    }
    else if(a>=13 && a<=59)
    {
        printf("Ticket price:50 rupees");
    }
    else if(a>=60)
    {
        printf("Ticket price(Discounted):40 rupees");
    }
    else
    {
        printf("Not eligible");
    }
    return 0;
}