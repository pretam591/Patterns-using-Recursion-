// sum = 1! + 2! + 3! + 4! + 5! + 6! + ... n terms
// place 1    2    3    4    5    6    ... n places
// n! = (n-1)!*n

#include <stdio.h>

int series(int);
int sum=0;

int main() {

    int n;
    printf("\nEnter the value of n:-");
    scanf("%d",&n);
    printf("\nThe %d term of the series is dispayed as follows:-",n);
    printf("%d",factsum(n));
    return 0;
}
int series(int n)
{
    if(n==1)
        return 1;
    else 
    {
        return(series(n-1)*n);
    }
}

int factsum(int n)
{
    if(n==1)
        return 1;
    else 
    {
        return(factsum(n-1)+series(n));
    }
    
}