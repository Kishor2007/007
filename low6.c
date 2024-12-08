#include <stdio.h>
int sum(int num)
{
    int ld = num % 10;
    int sld = (num / 10) % 10;
    return ld+sld;
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = sum(num);
    printf("The sum of the last two digits is: %d\n", result);
    return 0;
}