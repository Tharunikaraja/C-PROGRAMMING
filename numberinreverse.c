#include <stdio.h>

int main()
{
    int i,x,y;
    scanf("%d",&x);
    
    while(x!=0)
    {
        y=x%10;
        printf("%d",y);
        x=x/10;
    }
    return 0;
}