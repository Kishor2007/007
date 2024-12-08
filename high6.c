#include <stdio.h>
int largestprime(int n) 
{
    int maxPrime = -1;
    while (n % 2 == 0) 
    {
        maxPrime = 2;
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            maxPrime = i;
            n /= i;
        }
    }
    if (n > 2)
    {
        maxPrime = n;
    }

    return maxPrime;
}

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Output: %d\n", largestprime(num));
    return 0;
}