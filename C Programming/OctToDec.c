#include <stdio.h>
int main()
{
    int num, sum = 0, base = 1, rem;
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + (rem * base);
        base = base * 8;
        num = num / 10;
    }
    printf("%d", sum);
    return 0;
}