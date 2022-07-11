#include <stdio.h>

int series(int);

int main() {

    int n;
    printf("\nEnter the value of n:-");
    scanf("%d",&n);
    printf("\nThe %d term of the series is dispayed as follows:-",n);
    printf("\n%d",series(n));
    return 0;
}

int series(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 4;
    else 
    {
        if(n%2 == 0)
            return(series(n-1) + 7); 
        else
            return(series(n-1) + 4);
    }
}